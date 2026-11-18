#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EOAHFDPLGGJ;

#define NCOCHEGGKHD_BEMFLNLBHCM_OFFSET UNITYSDK_OFFSET(0x16B63EE0)
#define NCOCHEGGKHD_PBPFPFCLAEG_OFFSET UNITYSDK_OFFSET(0x16B63EC0)
#define NCOCHEGGKHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B63EB0)
#define NCOCHEGGKHD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B63EA0)

inline static constexpr unsigned int NCOCHEGGKHD_TypeDefinitionIndex = 53357;

class NCOCHEGGKHD : public ::System::Object
{
public:
	static ::EOAHFDPLGGJ** StaticGet_MLFDGJPFCED()
	{
		return (::EOAHFDPLGGJ**)Il2CppClass::FromTypeDefinitionIndex(NCOCHEGGKHD_TypeDefinitionIndex)->GetStaticField(0x3C8A0);
	}
	static ::System::Int64* StaticGet_PBBKOGKAAAG()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NCOCHEGGKHD_TypeDefinitionIndex)->GetStaticField(0xDDF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOCHEGGKHD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCOCHEGGKHD__CCTOR_OFFSET))();
	}

	static ::EOAHFDPLGGJ* PBPFPFCLAEG()
	{
		return ((::EOAHFDPLGGJ*(*)())((::PBYTE)hIl2Cpp + NCOCHEGGKHD_PBPFPFCLAEG_OFFSET))();
	}

	static ::EOAHFDPLGGJ* BEMFLNLBHCM(::System::Boolean NPPMJEIPMFC)
	{
		return ((::EOAHFDPLGGJ*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NCOCHEGGKHD_BEMFLNLBHCM_OFFSET))(NPPMJEIPMFC);
	}
};
