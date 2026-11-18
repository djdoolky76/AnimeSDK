#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMFHPMONGC;
namespace System::Threading { class CancellationTokenSource; }

#define FBMFHPMONGC_NGFAGONMJPE_ANAJHCHCICB_OFFSET UNITYSDK_OFFSET(0x15E42120)
#define FBMFHPMONGC_NGFAGONMJPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E42110)

inline static constexpr unsigned int FBMFHPMONGC_NGFAGONMJPE_TypeDefinitionIndex = 50509;

class FBMFHPMONGC_NGFAGONMJPE : public ::System::Object
{
public:
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationTokenSource* KHGFAKJKDGG; // 0x18
	::System::UInt32 DEFAKCIAKLG; // 0x20
	::System::Boolean NELCEOFGEFI; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 NPAKMAGBOCH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NGFAGONMJPE__CTOR_OFFSET))(this);
	}

	::System::Void ANAJHCHCICB(::System::Boolean IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NGFAGONMJPE_ANAJHCHCICB_OFFSET))(this, IGAAKDOIPNN);
	}
};
