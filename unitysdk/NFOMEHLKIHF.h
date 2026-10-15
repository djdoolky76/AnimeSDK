#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NFOMEHLKIHF;

#define NFOMEHLKIHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2047F0)
#define NFOMEHLKIHF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D204800)
#define NFOMEHLKIHF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2047C0)

	class NFOMEHLKIHF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ICJFBLNANEP; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint IEHPFADHJFD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOMEHLKIHF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NFOMEHLKIHF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NFOMEHLKIHF*))((::PBYTE)hIl2Cpp + NFOMEHLKIHF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NFOMEHLKIHF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NFOMEHLKIHF*))((::PBYTE)hIl2Cpp + NFOMEHLKIHF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
