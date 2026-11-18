#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIFBOKELGMC;
namespace System { template <typename T> class Predicate_1; }

#define HGKJHKLMIFE___C_FHONCOBPDBA_OFFSET UNITYSDK_OFFSET(0x146FAED0)
#define HGKJHKLMIFE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146FAE80)
#define HGKJHKLMIFE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146FAEC0)

inline static constexpr unsigned int HGKJHKLMIFE___c_TypeDefinitionIndex = 49485;

class HGKJHKLMIFE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HGKJHKLMIFE___c_TypeDefinitionIndex)->GetStaticField(0x4E550);
	}
	static ::System::Predicate_1<::CIFBOKELGMC*>** StaticGet___9__36_1()
	{
		return (::System::Predicate_1<::CIFBOKELGMC*>**)Il2CppClass::FromTypeDefinitionIndex(HGKJHKLMIFE___c_TypeDefinitionIndex)->GetStaticField(0x4E558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGKJHKLMIFE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKJHKLMIFE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean FHONCOBPDBA(::CIFBOKELGMC* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::CIFBOKELGMC*))((::PBYTE)hIl2Cpp + HGKJHKLMIFE___C_FHONCOBPDBA_OFFSET))(this, PELAJIFDIPN);
	}
};
