#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class NDCLBAKBEIP;

#define GHLFKNFJMBC___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C557630)
#define GHLFKNFJMBC___C__DISPLAYCLASS3_0__GETSORTEDTYPES_B__0_OFFSET UNITYSDK_OFFSET(0x1C557640)

inline static constexpr unsigned int GHLFKNFJMBC___c__DisplayClass3_0_TypeDefinitionIndex = 41889;

	class GHLFKNFJMBC___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::NDCLBAKBEIP* displayConfigRepository; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLFKNFJMBC___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedTypes_b__0(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::RPG::Client::MechCraft::MechCraftAttributeType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + GHLFKNFJMBC___C__DISPLAYCLASS3_0__GETSORTEDTYPES_B__0_OFFSET))(this, a1, a2);
		}

	};
