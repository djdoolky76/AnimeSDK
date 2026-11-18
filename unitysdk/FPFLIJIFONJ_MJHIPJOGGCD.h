#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FPFLIJIFONJ_MJHIPJOGGCD_MAHKNMCELJN_OFFSET UNITYSDK_OFFSET(0x179C3330)
#define FPFLIJIFONJ_MJHIPJOGGCD__CTOR_OFFSET UNITYSDK_OFFSET(0x179C3320)

inline static constexpr unsigned int FPFLIJIFONJ_MJHIPJOGGCD_TypeDefinitionIndex = 86227;

class FPFLIJIFONJ_MJHIPJOGGCD : public ::System::Object
{
public:
	::System::String* MMGALAABIJD; // 0x10
	::System::String* GNCJEDAAAIE; // 0x18
	::System::String* JNAJDCADOOA; // 0x20
	::System::Int32 CJHCCIAEBNP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFLIJIFONJ_MJHIPJOGGCD__CTOR_OFFSET))(this);
	}

	static ::System::Int32 MAHKNMCELJN(::FPFLIJIFONJ_MJHIPJOGGCD* LCDLAKOLLJJ, ::FPFLIJIFONJ_MJHIPJOGGCD* LBOICOIDEIH)
	{
		return ((::System::Int32(*)(::FPFLIJIFONJ_MJHIPJOGGCD*, ::FPFLIJIFONJ_MJHIPJOGGCD*))((::PBYTE)hIl2Cpp + FPFLIJIFONJ_MJHIPJOGGCD_MAHKNMCELJN_OFFSET))(LCDLAKOLLJJ, LBOICOIDEIH);
	}
};
