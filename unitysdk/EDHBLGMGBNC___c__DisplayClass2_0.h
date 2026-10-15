#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOPEINOKFCI;
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }

#define EDHBLGMGBNC___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13315B60)
#define EDHBLGMGBNC___C__DISPLAYCLASS2_0___GENERATEMIDDLEMISSIONPACKLIST_B__0_OFFSET UNITYSDK_OFFSET(0x13315B90)

inline static constexpr unsigned int EDHBLGMGBNC___c__DisplayClass2_0_TypeDefinitionIndex = 66089;

	class EDHBLGMGBNC___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::MiddleSinglePackMissionConfig* packMissionConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHBLGMGBNC___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GenerateMiddleMissionPackList_b__0(::EOPEINOKFCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOPEINOKFCI*))((::PBYTE)hIl2Cpp + EDHBLGMGBNC___C__DISPLAYCLASS2_0___GENERATEMIDDLEMISSIONPACKLIST_B__0_OFFSET))(this, a1);
		}

	};
