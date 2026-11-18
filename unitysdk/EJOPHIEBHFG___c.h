#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EJOPHIEBHFG___C_AAOHLOFNGLN_OFFSET UNITYSDK_OFFSET(0x17241BF0)
#define EJOPHIEBHFG___C_AOJFLACPHFI_OFFSET UNITYSDK_OFFSET(0x17241C00)
#define EJOPHIEBHFG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17241BA0)
#define EJOPHIEBHFG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17241BE0)

inline static constexpr unsigned int EJOPHIEBHFG___c_TypeDefinitionIndex = 76956;

class EJOPHIEBHFG___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::GPNHHGBPCGM>** StaticGet___9__51_0()
	{
		return (::System::Func_2<::System::Int32, ::GPNHHGBPCGM>**)Il2CppClass::FromTypeDefinitionIndex(EJOPHIEBHFG___c_TypeDefinitionIndex)->GetStaticField(0x49AA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EJOPHIEBHFG___c_TypeDefinitionIndex)->GetStaticField(0x49AA8);
	}
	static ::System::Func_2<::System::Int32, ::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*>** StaticGet___9__52_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*>**)Il2CppClass::FromTypeDefinitionIndex(EJOPHIEBHFG___c_TypeDefinitionIndex)->GetStaticField(0x49AB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJOPHIEBHFG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOPHIEBHFG___C__CTOR_OFFSET))(this);
	}

	::GPNHHGBPCGM AAOHLOFNGLN(::System::Int32 AELLPLBJELA)
	{
		return ((::GPNHHGBPCGM(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJOPHIEBHFG___C_AAOHLOFNGLN_OFFSET))(this, AELLPLBJELA);
	}

	::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* AOJFLACPHFI(::System::Int32 NHBENPCMJPI)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJOPHIEBHFG___C_AOJFLACPHFI_OFFSET))(this, NHBENPCMJPI);
	}
};
