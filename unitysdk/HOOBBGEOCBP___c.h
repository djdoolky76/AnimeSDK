#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PFFCGAFKDPL;
namespace System { template <typename T> class Predicate_1; }

#define HOOBBGEOCBP___C_BLLEPNNFLAP_OFFSET UNITYSDK_OFFSET(0xEA07B00)
#define HOOBBGEOCBP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA07AB0)
#define HOOBBGEOCBP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA07AF0)

inline static constexpr unsigned int HOOBBGEOCBP___c_TypeDefinitionIndex = 88423;

class HOOBBGEOCBP___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::PFFCGAFKDPL*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::PFFCGAFKDPL*>**)Il2CppClass::FromTypeDefinitionIndex(HOOBBGEOCBP___c_TypeDefinitionIndex)->GetStaticField(0x44350);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HOOBBGEOCBP___c_TypeDefinitionIndex)->GetStaticField(0x44358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOOBBGEOCBP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOBBGEOCBP___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BLLEPNNFLAP(::PFFCGAFKDPL* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::PFFCGAFKDPL*))((::PBYTE)hIl2Cpp + HOOBBGEOCBP___C_BLLEPNNFLAP_OFFSET))(this, IMLLDOHDCNC);
	}
};
