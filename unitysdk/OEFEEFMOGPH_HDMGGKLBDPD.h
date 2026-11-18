#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class OEFEEFMOGPH;
namespace System { class String; }

#define OEFEEFMOGPH_HDMGGKLBDPD_FIICDGKLDNK_OFFSET UNITYSDK_OFFSET(0x15F60220)
#define OEFEEFMOGPH_HDMGGKLBDPD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5F700)

inline static constexpr unsigned int OEFEEFMOGPH_HDMGGKLBDPD_TypeDefinitionIndex = 49752;

class OEFEEFMOGPH_HDMGGKLBDPD : public ::System::Object
{
public:
	::OEFEEFMOGPH* KLHPEBKNIFB; // 0x10
	::System::String* CEKNHIDPNNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_HDMGGKLBDPD__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask FIICDGKLDNK(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_HDMGGKLBDPD_FIICDGKLDNK_OFFSET))(this, OMMEALOOOOD);
	}
};
