#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KJNHIELIFEK;

#define KJNHIELIFEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0995E0)
#define KJNHIELIFEK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0995F0)
#define KJNHIELIFEK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0995B0)

	class KJNHIELIFEK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FLONKDDGCFC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNHIELIFEK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KJNHIELIFEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJNHIELIFEK*))((::PBYTE)hIl2Cpp + KJNHIELIFEK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KJNHIELIFEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJNHIELIFEK*))((::PBYTE)hIl2Cpp + KJNHIELIFEK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
