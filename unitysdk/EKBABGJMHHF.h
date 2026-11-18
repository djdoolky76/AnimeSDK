#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPODAIHJDDC.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class CancellationTokenSource; }

#define EKBABGJMHHF_FCBHKBHFMAC_OFFSET UNITYSDK_OFFSET(0x1426B620)
#define EKBABGJMHHF_IJAPDPBBEJM_OFFSET UNITYSDK_OFFSET(0x1426B880)
#define EKBABGJMHHF_LAOIIEMMLCF_OFFSET UNITYSDK_OFFSET(0x1426B5A0)
#define EKBABGJMHHF_LCENHGFKMGE_OFFSET UNITYSDK_OFFSET(0x1426B330)
#define EKBABGJMHHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1426B2E0)

inline static constexpr unsigned int EKBABGJMHHF_TypeDefinitionIndex = 81767;

class EKBABGJMHHF : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle NBCLKPICOAD; // 0x10
	::System::Threading::CancellationTokenSource* HKAJHHNIPON; // 0x20
	::System::Boolean DNMDONIOHHN; // 0x28
	::System::Byte _padding0[0x3];
	::System::UInt32 KMMGKJPAOMF; // 0x2C
	::FPODAIHJDDC JDNCHMEAJJC; // 0x30
	::System::UInt32 LJMPPBEMEPP; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBABGJMHHF__CTOR_OFFSET))(this);
	}

	::System::Void LCENHGFKMGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBABGJMHHF_LCENHGFKMGE_OFFSET))(this);
	}

	::System::Void LAOIIEMMLCF(::FPODAIHJDDC JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::FPODAIHJDDC))((::PBYTE)hIl2Cpp + EKBABGJMHHF_LAOIIEMMLCF_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void FCBHKBHFMAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBABGJMHHF_FCBHKBHFMAC_OFFSET))(this);
	}

	::System::Void IJAPDPBBEJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBABGJMHHF_IJAPDPBBEJM_OFFSET))(this);
	}
};
