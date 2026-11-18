#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFFJJHDKOPK;
namespace System { class String; }

#define CFFJJHDKOPK_JAJAJNFJOCB_BOIOBOACAME_OFFSET UNITYSDK_OFFSET(0x13257250)
#define CFFJJHDKOPK_JAJAJNFJOCB_MNLHLLEHBPF_OFFSET UNITYSDK_OFFSET(0x13256B90)
#define CFFJJHDKOPK_JAJAJNFJOCB__CTOR_OFFSET UNITYSDK_OFFSET(0x13256B80)

inline static constexpr unsigned int CFFJJHDKOPK_JAJAJNFJOCB_TypeDefinitionIndex = 61703;

class CFFJJHDKOPK_JAJAJNFJOCB : public ::System::Object
{
public:
	::CFFJJHDKOPK* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFJJHDKOPK_JAJAJNFJOCB__CTOR_OFFSET))(this);
	}

	::System::String* MNLHLLEHBPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFJJHDKOPK_JAJAJNFJOCB_MNLHLLEHBPF_OFFSET))(this);
	}

	::System::String* BOIOBOACAME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFJJHDKOPK_JAJAJNFJOCB_BOIOBOACAME_OFFSET))(this);
	}
};
