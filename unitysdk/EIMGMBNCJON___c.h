#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAPCFDDBMJP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define EIMGMBNCJON___C_PHAIMLLKNFI_OFFSET UNITYSDK_OFFSET(0x1FFC55F0)
#define EIMGMBNCJON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFC55A0)
#define EIMGMBNCJON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFC55E0)

inline static constexpr unsigned int EIMGMBNCJON___c_TypeDefinitionIndex = 18076;

class EIMGMBNCJON___c : public ::System::Object
{
public:
	static ::System::Func_2<::AAPCFDDBMJP*, ::System::Int32>** StaticGet___9__5_4()
	{
		return (::System::Func_2<::AAPCFDDBMJP*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EIMGMBNCJON___c_TypeDefinitionIndex)->GetStaticField(0x8560);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EIMGMBNCJON___c_TypeDefinitionIndex)->GetStaticField(0x8568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIMGMBNCJON___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMGMBNCJON___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PHAIMLLKNFI(::AAPCFDDBMJP* KALNFNBBABH)
	{
		return ((::System::Int32(*)(::PVOID, ::AAPCFDDBMJP*))((::PBYTE)hIl2Cpp + EIMGMBNCJON___C_PHAIMLLKNFI_OFFSET))(this, KALNFNBBABH);
	}
};
