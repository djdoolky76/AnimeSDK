#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOHCPPHPOLK.h"
#include "unitysdk/FKNKNLGMACL.h"
namespace RPG::Client { class PamChatQuickFunctionMessage; }
namespace RPG::Client { class PamChatRelicExplainData; }
namespace RPG::Client { class PamChatTeamExplainData; }
namespace System { class String; }

#define BANEBMOLDPF_BFNPECGBCND_OFFSET UNITYSDK_OFFSET(0x15E74DE0)
#define BANEBMOLDPF_CDJHAIIMEEC_OFFSET UNITYSDK_OFFSET(0x15E74930)
#define BANEBMOLDPF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E74920)
#define BANEBMOLDPF_DCMLFPBKIPF_OFFSET UNITYSDK_OFFSET(0x15E74CF0)
#define BANEBMOLDPF_DLOCENNCOCH_OFFSET UNITYSDK_OFFSET(0x15E74C50)
#define BANEBMOLDPF_EGNLOFMBJLM_OFFSET UNITYSDK_OFFSET(0x15E74EB0)
#define BANEBMOLDPF_EKIBKHFDHDJ_OFFSET UNITYSDK_OFFSET(0x15E74F90)
#define BANEBMOLDPF_EOHODOGNHJK_OFFSET UNITYSDK_OFFSET(0x15E74BB0)
#define BANEBMOLDPF_ICIOOHAFNCD_OFFSET UNITYSDK_OFFSET(0x15E749E0)
#define BANEBMOLDPF_NDMGJENDLCP_OFFSET UNITYSDK_OFFSET(0x15E74B10)

inline static constexpr unsigned int BANEBMOLDPF_TypeDefinitionIndex = 63292;

	class BANEBMOLDPF : public ::AOHCPPHPOLK
	{
	public:
		::System::Void _ctor(::FKNKNLGMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNKNLGMACL))((::PBYTE)hIl2Cpp + BANEBMOLDPF_CTOR_OFFSET))(this, a1);
		}

		::System::Void CDJHAIIMEEC(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANEBMOLDPF_CDJHAIIMEEC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ICIOOHAFNCD(::RPG::Client::PamChatQuickFunctionMessage* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionMessage*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANEBMOLDPF_ICIOOHAFNCD_OFFSET))(this, a1, a2);
		}

		::System::Void NDMGJENDLCP(::RPG::Client::PamChatRelicExplainData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatRelicExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANEBMOLDPF_NDMGJENDLCP_OFFSET))(this, a1, a2);
		}

		::System::Void EOHODOGNHJK(::RPG::Client::PamChatTeamExplainData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatTeamExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANEBMOLDPF_EOHODOGNHJK_OFFSET))(this, a1, a2);
		}

		::System::Void DLOCENNCOCH(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + BANEBMOLDPF_DLOCENNCOCH_OFFSET))(this, a1, a2);
		}

		::System::Void DCMLFPBKIPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BANEBMOLDPF_DCMLFPBKIPF_OFFSET))(this, a1);
		}

		::System::Void BFNPECGBCND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BANEBMOLDPF_BFNPECGBCND_OFFSET))(this, a1);
		}

		::System::Void EGNLOFMBJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEBMOLDPF_EGNLOFMBJLM_OFFSET))(this);
		}

		::System::Void EKIBKHFDHDJ(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANEBMOLDPF_EKIBKHFDHDJ_OFFSET))(this, a1, a2);
		}

	};
