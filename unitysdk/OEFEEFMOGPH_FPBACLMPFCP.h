#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class OEFEEFMOGPH;
namespace System { class String; }

#define OEFEEFMOGPH_FPBACLMPFCP_POHDKLBDHLI_OFFSET UNITYSDK_OFFSET(0xFB83300)
#define OEFEEFMOGPH_FPBACLMPFCP__CTOR_OFFSET UNITYSDK_OFFSET(0xFB832F0)

inline static constexpr unsigned int OEFEEFMOGPH_FPBACLMPFCP_TypeDefinitionIndex = 49755;

class OEFEEFMOGPH_FPBACLMPFCP : public ::System::Object
{
public:
	::OEFEEFMOGPH* KLHPEBKNIFB; // 0x10
	::System::String* CEKNHIDPNNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_FPBACLMPFCP__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask POHDKLBDHLI(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_FPBACLMPFCP_POHDKLBDHLI_OFFSET))(this, OMMEALOOOOD);
	}
};
