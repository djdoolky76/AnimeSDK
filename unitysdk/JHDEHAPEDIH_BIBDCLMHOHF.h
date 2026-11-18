#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MECPGCBLFAE_JKIOJGIINAO.h"
#include "unitysdk/System/Object.h"

class JHDEHAPEDIH_FDOONENCLDN;

#define JHDEHAPEDIH_BIBDCLMHOHF_GFLLFECAOAI_OFFSET UNITYSDK_OFFSET(0x13083460)
#define JHDEHAPEDIH_BIBDCLMHOHF__CTOR_OFFSET UNITYSDK_OFFSET(0x13083450)

inline static constexpr unsigned int JHDEHAPEDIH_BIBDCLMHOHF_TypeDefinitionIndex = 48709;

class JHDEHAPEDIH_BIBDCLMHOHF : public ::System::Object
{
public:
	::JHDEHAPEDIH_FDOONENCLDN* FGBNBFHOKAA; // 0x10
	::MECPGCBLFAE_JKIOJGIINAO PHHDHIBOCKA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_BIBDCLMHOHF__CTOR_OFFSET))(this);
	}

	::System::Void GFLLFECAOAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_BIBDCLMHOHF_GFLLFECAOAI_OFFSET))(this);
	}
};
