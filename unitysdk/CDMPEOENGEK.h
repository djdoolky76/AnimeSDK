#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CDMPEOENGEK;
class FCOEMCEDLNL;

#define CDMPEOENGEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA12570)
#define CDMPEOENGEK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA12580)
#define CDMPEOENGEK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA12540)

	class CDMPEOENGEK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean PJOBGMNIOIE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPEOENGEK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CDMPEOENGEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CDMPEOENGEK*))((::PBYTE)hIl2Cpp + CDMPEOENGEK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CDMPEOENGEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CDMPEOENGEK*))((::PBYTE)hIl2Cpp + CDMPEOENGEK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
