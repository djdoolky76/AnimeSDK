#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JCBAMJALCKK_EHNMOGCHOHF_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x1382F790)
#define JCBAMJALCKK_EHNMOGCHOHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1382F560)

inline static constexpr unsigned int JCBAMJALCKK_EHNMOGCHOHF_TypeDefinitionIndex = 47912;

class JCBAMJALCKK_EHNMOGCHOHF : public ::System::Object
{
public:
	::System::Int32 FBIKHFMFBFG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBAMJALCKK_EHNMOGCHOHF__CTOR_OFFSET))(this);
	}

	::System::Boolean HOFIFAEOLBM(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JCBAMJALCKK_EHNMOGCHOHF_HOFIFAEOLBM_OFFSET))(this, HAAEBCOBKFF);
	}
};
