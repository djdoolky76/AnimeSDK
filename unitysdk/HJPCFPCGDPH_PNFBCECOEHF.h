#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHLOBCHIEA.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class CANOPECPHCD;
class HJPCFPCGDPH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJPCFPCGDPH_PNFBCECOEHF_KFBHNGJIHIL_OFFSET UNITYSDK_OFFSET(0x17E4F9B0)
#define HJPCFPCGDPH_PNFBCECOEHF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4F9A0)

inline static constexpr unsigned int HJPCFPCGDPH_PNFBCECOEHF_TypeDefinitionIndex = 56976;

class HJPCFPCGDPH_PNFBCECOEHF : public ::System::Object
{
public:
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* FPAHJNBMBBM; // 0x18
	::HJPCFPCGDPH* KLHPEBKNIFB; // 0x20
	::CANOPECPHCD* IMCKNHBFJEJ; // 0x28
	::DPHLOBCHIEA AAOCANGHBDG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_PNFBCECOEHF__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask KFBHNGJIHIL()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_PNFBCECOEHF_KFBHNGJIHIL_OFFSET))(this);
	}
};
