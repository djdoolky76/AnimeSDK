#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class BHHPHPGCODJ;

#define IOJNNBAILBC___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x164F53B0)
#define IOJNNBAILBC___C__DISPLAYCLASS5_0__PLAYTARGETREACHED_B__0_OFFSET UNITYSDK_OFFSET(0x164F5530)

inline static constexpr unsigned int IOJNNBAILBC___c__DisplayClass5_0_TypeDefinitionIndex = 79549;

	class IOJNNBAILBC___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::MechCraftAttributeType target; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJNNBAILBC___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _PlayTargetReached_b__0(::BHHPHPGCODJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHHPHPGCODJ*))((::PBYTE)hIl2Cpp + IOJNNBAILBC___C__DISPLAYCLASS5_0__PLAYTARGETREACHED_B__0_OFFSET))(this, a1);
		}

	};
