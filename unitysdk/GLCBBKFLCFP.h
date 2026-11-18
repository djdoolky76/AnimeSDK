#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GLCBBKFLCFP_POANHKDKJGC_OFFSET UNITYSDK_OFFSET(0x1490A940)
#define GLCBBKFLCFP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1490A930)
#define GLCBBKFLCFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1490A920)

inline static constexpr unsigned int GLCBBKFLCFP_TypeDefinitionIndex = 56555;

class GLCBBKFLCFP : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_IKENDGIJHLN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLCBBKFLCFP_TypeDefinitionIndex)->GetStaticField(0xFC10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCBBKFLCFP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLCBBKFLCFP__CCTOR_OFFSET))();
	}

	static ::System::Boolean POANHKDKJGC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLCBBKFLCFP_POANHKDKJGC_OFFSET))();
	}
};
