#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
class OOJNDHEMKCN;

#define OOJNDHEMKCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B6930)
#define OOJNDHEMKCN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2B6940)
#define OOJNDHEMKCN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2B6900)

	class OOJNDHEMKCN : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single IEHPFADHJFD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJNDHEMKCN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OOJNDHEMKCN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOJNDHEMKCN*))((::PBYTE)hIl2Cpp + OOJNDHEMKCN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OOJNDHEMKCN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOJNDHEMKCN*))((::PBYTE)hIl2Cpp + OOJNDHEMKCN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
