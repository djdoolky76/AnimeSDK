#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define KCNFLPBMCLA_BLMPAILAEIG_HKOFKBHGHAO_OFFSET UNITYSDK_OFFSET(0x157DFBA0)
#define KCNFLPBMCLA_BLMPAILAEIG__CTOR_OFFSET UNITYSDK_OFFSET(0x157DFB90)

inline static constexpr unsigned int KCNFLPBMCLA_BLMPAILAEIG_TypeDefinitionIndex = 49497;

class KCNFLPBMCLA_BLMPAILAEIG : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNFLPBMCLA_BLMPAILAEIG__CTOR_OFFSET))(this);
	}

	::System::Void HKOFKBHGHAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNFLPBMCLA_BLMPAILAEIG_HKOFKBHGHAO_OFFSET))(this);
	}
};
