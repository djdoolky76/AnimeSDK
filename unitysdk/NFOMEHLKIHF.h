#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NFOMEHLKIHF;

#define NFOMEHLKIHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4197E0)
#define NFOMEHLKIHF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4197F0)
#define NFOMEHLKIHF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4197B0)

inline static constexpr unsigned int NFOMEHLKIHF_TypeDefinitionIndex = 10323;

	class NFOMEHLKIHF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FixPoint IEHPFADHJFD; // 0x18
		::System::UInt32 ICJFBLNANEP; // 0x20
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
