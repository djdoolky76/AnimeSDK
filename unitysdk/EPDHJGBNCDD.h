#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EPDHJGBNCDD;
class FCOEMCEDLNL;

#define EPDHJGBNCDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBDE00)
#define EPDHJGBNCDD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDBDE10)
#define EPDHJGBNCDD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDBDDC0)

inline static constexpr unsigned int EPDHJGBNCDD_TypeDefinitionIndex = 19925;

	class EPDHJGBNCDD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardTeamType>* JJJNPLOLJGE; // 0x18
		::System::Single IKPNCBJBLHO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDHJGBNCDD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EPDHJGBNCDD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPDHJGBNCDD*))((::PBYTE)hIl2Cpp + EPDHJGBNCDD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EPDHJGBNCDD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPDHJGBNCDD*))((::PBYTE)hIl2Cpp + EPDHJGBNCDD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
