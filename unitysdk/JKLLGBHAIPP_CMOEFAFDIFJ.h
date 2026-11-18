#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CBHALHKAKLC_OMCMPLFMCAM;

#define JKLLGBHAIPP_CMOEFAFDIFJ_AGNOILIAHAA_OFFSET UNITYSDK_OFFSET(0x1C364D40)
#define JKLLGBHAIPP_CMOEFAFDIFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C364D30)

inline static constexpr unsigned int JKLLGBHAIPP_CMOEFAFDIFJ_TypeDefinitionIndex = 56648;

class JKLLGBHAIPP_CMOEFAFDIFJ : public ::System::Object
{
public:
	::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA; // 0x10
	::System::Boolean CENCKNOKNDK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_CMOEFAFDIFJ__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask AGNOILIAHAA(::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_CMOEFAFDIFJ_AGNOILIAHAA_OFFSET))(this, AMIDHEAIANO);
	}
};
