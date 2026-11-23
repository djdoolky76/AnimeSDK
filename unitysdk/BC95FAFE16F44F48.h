#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization { class B32A689F11D18703; }
namespace System::Globalization { class CultureInfo; }

#define BC95FAFE16F44F48_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3D006D0)
#define BC95FAFE16F44F48_FA5A6B9D882905E4_OFFSET UNITYSDK_OFFSET(0x3D008D0)
#define BC95FAFE16F44F48__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D007C0)
#define BC95FAFE16F44F48__CTOR_OFFSET UNITYSDK_OFFSET(0x3D00840)

inline static constexpr unsigned int BC95FAFE16F44F48_TypeDefinitionIndex = 10818;

class BC95FAFE16F44F48 : public ::System::Object
{
public:
	::System::Globalization::B32A689F11D18703* ACBFD21C2D710738; // 0x10

	static ::BC95FAFE16F44F48* FA5A6B9D882905E4()
	{
		return ((::BC95FAFE16F44F48*(*)())((::PBYTE)hIl2Cpp + BC95FAFE16F44F48_FA5A6B9D882905E4_OFFSET))();
	}

	::System::Void _ctor(::System::Globalization::CultureInfo* B639ACA4E77C2506)
	{
		return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + BC95FAFE16F44F48__CTOR_OFFSET))(this, B639ACA4E77C2506);
	}

	::System::Int32 B996A70283B60FAC(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BC95FAFE16F44F48_B996A70283B60FAC_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC95FAFE16F44F48__CTOR_1_OFFSET))(this);
	}
};
