#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGPHFADIIBM.h"

#define HGOBBALJENJ_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x15DA93F0)
#define HGOBBALJENJ_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x15DA9440)
#define HGOBBALJENJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15DA93E0)
#define HGOBBALJENJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA9300)

inline static constexpr unsigned int HGOBBALJENJ_TypeDefinitionIndex = 45780;

class HGOBBALJENJ : public ::KGPHFADIIBM
{
public:
	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGOBBALJENJ__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOBBALJENJ__CTOR_1_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOBBALJENJ_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOBBALJENJ_OENOEFBECOA_OFFSET))(this);
	}
};
