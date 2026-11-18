#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMFHPMONGC;
namespace System::Threading { class CancellationTokenSource; }

#define FBMFHPMONGC_KONKFANMHFD_CFNKCPHBNKE_OFFSET UNITYSDK_OFFSET(0x169C1910)
#define FBMFHPMONGC_KONKFANMHFD__CTOR_OFFSET UNITYSDK_OFFSET(0x169C1900)

inline static constexpr unsigned int FBMFHPMONGC_KONKFANMHFD_TypeDefinitionIndex = 50486;

class FBMFHPMONGC_KONKFANMHFD : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* MPPGOFIIMEM; // 0x10
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x18
	::System::Int32 NPAKMAGBOCH; // 0x20
	::System::Boolean NELCEOFGEFI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KONKFANMHFD__CTOR_OFFSET))(this);
	}

	::System::Void CFNKCPHBNKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_KONKFANMHFD_CFNKCPHBNKE_OFFSET))(this);
	}
};
