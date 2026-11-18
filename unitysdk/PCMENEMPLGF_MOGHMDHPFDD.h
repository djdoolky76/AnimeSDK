#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA_PJJIMDAOJCJ;
class PCMENEMPLGF;

#define PCMENEMPLGF_MOGHMDHPFDD_BOIFKCHBIJK_OFFSET UNITYSDK_OFFSET(0x18461850)
#define PCMENEMPLGF_MOGHMDHPFDD_OAGJLGCIANA_OFFSET UNITYSDK_OFFSET(0x184619F0)
#define PCMENEMPLGF_MOGHMDHPFDD__CTOR_OFFSET UNITYSDK_OFFSET(0x18461840)

inline static constexpr unsigned int PCMENEMPLGF_MOGHMDHPFDD_TypeDefinitionIndex = 62841;

class PCMENEMPLGF_MOGHMDHPFDD : public ::System::Object
{
public:
	::DMHOLJNNCJA_PJJIMDAOJCJ* PFAMMFCCOJL; // 0x10
	::DMHOLJNNCJA_PJJIMDAOJCJ* LFBBCGGEDAG; // 0x18
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MOGHMDHPFDD__CTOR_OFFSET))(this);
	}

	::System::Boolean BOIFKCHBIJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MOGHMDHPFDD_BOIFKCHBIJK_OFFSET))(this);
	}

	::System::Boolean OAGJLGCIANA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MOGHMDHPFDD_OAGJLGCIANA_OFFSET))(this);
	}
};
