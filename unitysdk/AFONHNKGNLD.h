#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialB51RacingGameButtonType.h"
class AFONHNKGNLD;
class FCOEMCEDLNL;

#define AFONHNKGNLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB80B0)
#define AFONHNKGNLD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCB80C0)
#define AFONHNKGNLD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB8070)

	class AFONHNKGNLD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean AODGNFHAPBL; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TutorialB51RacingGameButtonType PGOHOFMMIAJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFONHNKGNLD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFONHNKGNLD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFONHNKGNLD*))((::PBYTE)hIl2Cpp + AFONHNKGNLD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AFONHNKGNLD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFONHNKGNLD*))((::PBYTE)hIl2Cpp + AFONHNKGNLD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
