#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ECLEGOCKEHD;
class FCOEMCEDLNL;

#define ECLEGOCKEHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6C3F0)
#define ECLEGOCKEHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD6C400)
#define ECLEGOCKEHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD6C3C0)

	class ECLEGOCKEHD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MAJCBOFLAMP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLEGOCKEHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ECLEGOCKEHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECLEGOCKEHD*))((::PBYTE)hIl2Cpp + ECLEGOCKEHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ECLEGOCKEHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECLEGOCKEHD*))((::PBYTE)hIl2Cpp + ECLEGOCKEHD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
