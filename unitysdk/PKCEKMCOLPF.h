#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PKCEKMCOLPF;
namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }

#define PKCEKMCOLPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F73D0)
#define PKCEKMCOLPF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2F73E0)
#define PKCEKMCOLPF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2F7390)

inline static constexpr unsigned int PKCEKMCOLPF_TypeDefinitionIndex = 10243;

	class PKCEKMCOLPF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* KFNMIEMBJGD; // 0x18
		::System::UInt32 JHIOLAIGBCM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCEKMCOLPF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PKCEKMCOLPF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PKCEKMCOLPF*))((::PBYTE)hIl2Cpp + PKCEKMCOLPF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PKCEKMCOLPF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PKCEKMCOLPF*))((::PBYTE)hIl2Cpp + PKCEKMCOLPF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
