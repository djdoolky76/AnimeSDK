#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMOJAEDFBID;
class GEDMHFPPBHN;
namespace RPG::GameCore { class GameEntity; }

#define DMOJAEDFBID___C__DISPLAYCLASS72_0_CTOR_OFFSET UNITYSDK_OFFSET(0xFECCE30)
#define DMOJAEDFBID___C__DISPLAYCLASS72_0___GETSUMMONEDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xFECDA50)

inline static constexpr unsigned int DMOJAEDFBID___c__DisplayClass72_0_TypeDefinitionIndex = 71322;

	class DMOJAEDFBID___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::DMOJAEDFBID* __4__this; // 0x10
		::RPG::GameCore::GameEntity* summoner; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS72_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetSummonedItems_b__0(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C__DISPLAYCLASS72_0___GETSUMMONEDITEMS_B__0_OFFSET))(this, a1);
		}

	};
