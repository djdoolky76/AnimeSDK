#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJIEOECLNOM;
namespace System { class String; }

#define DONGCBIGJJL_FKLEAMMFOCF_EHBHNFDLIFF_OFFSET UNITYSDK_OFFSET(0x15880060)
#define DONGCBIGJJL_FKLEAMMFOCF__CTOR_OFFSET UNITYSDK_OFFSET(0x15880050)

inline static constexpr unsigned int DONGCBIGJJL_FKLEAMMFOCF_TypeDefinitionIndex = 70477;

class DONGCBIGJJL_FKLEAMMFOCF : public ::System::Object
{
public:
	::NJIEOECLNOM* FJHIDNECMIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_FKLEAMMFOCF__CTOR_OFFSET))(this);
	}

	::System::String* EHBHNFDLIFF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_FKLEAMMFOCF_EHBHNFDLIFF_OFFSET))(this);
	}
};
