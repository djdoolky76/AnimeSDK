#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System::IO { class Stream; }
namespace UnityEngine { class Object; }

#define HPIEDBHGCAK_CNFBMBJDCGM_KKOIMOEAGOD_OFFSET UNITYSDK_OFFSET(0x14D3B3A0)
#define HPIEDBHGCAK_CNFBMBJDCGM__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3B390)

inline static constexpr unsigned int HPIEDBHGCAK_CNFBMBJDCGM_TypeDefinitionIndex = 41646;

class HPIEDBHGCAK_CNFBMBJDCGM : public ::System::Object
{
public:
	::System::IO::Stream* CPKODGLINAO; // 0x10
	::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* BOIBONJOJKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_CNFBMBJDCGM__CTOR_OFFSET))(this);
	}

	::System::Void KKOIMOEAGOD(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_CNFBMBJDCGM_KKOIMOEAGOD_OFFSET))(this, NGLKIKLLLFL, PIIPCLCCOIG);
	}
};
