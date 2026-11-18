#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class ABFDJPPBLHF;
class LEKHPKOOGIP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define PJLLFCLNHLO___C_NMOPKNBNFCC_OFFSET UNITYSDK_OFFSET(0x1F64C180)
#define PJLLFCLNHLO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F64C130)
#define PJLLFCLNHLO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F64C170)

inline static constexpr unsigned int PJLLFCLNHLO___c_TypeDefinitionIndex = 95111;

class PJLLFCLNHLO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PJLLFCLNHLO___c_TypeDefinitionIndex)->GetStaticField(0x52970);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::ABFDJPPBLHF*, ::LEKHPKOOGIP*>>, ::System::Single>** StaticGet___9__21_0()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::ABFDJPPBLHF*, ::LEKHPKOOGIP*>>, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PJLLFCLNHLO___c_TypeDefinitionIndex)->GetStaticField(0x52978);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLLFCLNHLO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLLFCLNHLO___C__CTOR_OFFSET))(this);
	}

	::System::Single NMOPKNBNFCC(::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::ABFDJPPBLHF*, ::LEKHPKOOGIP*>> IMLLDOHDCNC)
	{
		return ((::System::Single(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::ABFDJPPBLHF*, ::LEKHPKOOGIP*>>))((::PBYTE)hIl2Cpp + PJLLFCLNHLO___C_NMOPKNBNFCC_OFFSET))(this, IMLLDOHDCNC);
	}
};
