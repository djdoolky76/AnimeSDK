#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFADNINMEJF;
namespace UnityEngine { class Texture; }

#define AFADNINMEJF_HDMKHGODBEI_OJNAOADMHOO_OFFSET UNITYSDK_OFFSET(0x134B9830)
#define AFADNINMEJF_HDMKHGODBEI__CTOR_OFFSET UNITYSDK_OFFSET(0x134B9820)

inline static constexpr unsigned int AFADNINMEJF_HDMKHGODBEI_TypeDefinitionIndex = 53994;

class AFADNINMEJF_HDMKHGODBEI : public ::System::Object
{
public:
	::UnityEngine::Texture* LIHLKMEHGEE; // 0x10
	::AFADNINMEJF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_HDMKHGODBEI__CTOR_OFFSET))(this);
	}

	::System::Void OJNAOADMHOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_HDMKHGODBEI_OJNAOADMHOO_OFFSET))(this);
	}
};
