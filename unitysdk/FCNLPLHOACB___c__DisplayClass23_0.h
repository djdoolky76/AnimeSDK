#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class AAFIACIMMHE;

#define FCNLPLHOACB___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C552940)
#define FCNLPLHOACB___C__DISPLAYCLASS23_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1C552DE0)

inline static constexpr unsigned int FCNLPLHOACB___c__DisplayClass23_0_TypeDefinitionIndex = 41833;

	class FCNLPLHOACB___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::AAFIACIMMHE* attributeLevelUpRule; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNLPLHOACB___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> __ctor_b__0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + FCNLPLHOACB___C__DISPLAYCLASS23_0___CTOR_B__0_OFFSET))(this, a1);
		}

	};
