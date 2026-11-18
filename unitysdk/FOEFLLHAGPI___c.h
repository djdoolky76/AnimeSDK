#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BINDNEDBPDC;
namespace System { template <typename T> class Comparison_1; }

#define FOEFLLHAGPI___C_HDCAGAEGEDC_OFFSET UNITYSDK_OFFSET(0x165C4750)
#define FOEFLLHAGPI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C4700)
#define FOEFLLHAGPI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165C4740)

inline static constexpr unsigned int FOEFLLHAGPI___c_TypeDefinitionIndex = 89521;

class FOEFLLHAGPI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FOEFLLHAGPI___c_TypeDefinitionIndex)->GetStaticField(0x47F40);
	}
	static ::System::Comparison_1<::BINDNEDBPDC*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::BINDNEDBPDC*>**)Il2CppClass::FromTypeDefinitionIndex(FOEFLLHAGPI___c_TypeDefinitionIndex)->GetStaticField(0x47F48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOEFLLHAGPI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEFLLHAGPI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HDCAGAEGEDC(::BINDNEDBPDC* EJCBEJMGFAJ, ::BINDNEDBPDC* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BINDNEDBPDC*, ::BINDNEDBPDC*))((::PBYTE)hIl2Cpp + FOEFLLHAGPI___C_HDCAGAEGEDC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
