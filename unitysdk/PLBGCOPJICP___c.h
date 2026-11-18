#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PLBGCOPJICP___C_BNIJCNAIPIA_OFFSET UNITYSDK_OFFSET(0x1A7F8C60)
#define PLBGCOPJICP___C_CJGKCFEFLBL_OFFSET UNITYSDK_OFFSET(0x1A7F8BE0)
#define PLBGCOPJICP___C_EFGGKGAMHJB_OFFSET UNITYSDK_OFFSET(0x1A7F8BF0)
#define PLBGCOPJICP___C_MDGFDKBNFHM_OFFSET UNITYSDK_OFFSET(0x1A7F8C50)
#define PLBGCOPJICP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7F8B90)
#define PLBGCOPJICP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F8BD0)

inline static constexpr unsigned int PLBGCOPJICP___c_TypeDefinitionIndex = 59027;

class PLBGCOPJICP___c : public ::System::Object
{
public:
	static ::System::Func_2<::GPNHHGBPCGM, ::System::String*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::GPNHHGBPCGM, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PLBGCOPJICP___c_TypeDefinitionIndex)->GetStaticField(0x3CF90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PLBGCOPJICP___c_TypeDefinitionIndex)->GetStaticField(0x3CF98);
	}
	static ::System::Func_2<::GPNHHGBPCGM, ::GPNHHGBPCGM>** StaticGet___9__3_2()
	{
		return (::System::Func_2<::GPNHHGBPCGM, ::GPNHHGBPCGM>**)Il2CppClass::FromTypeDefinitionIndex(PLBGCOPJICP___c_TypeDefinitionIndex)->GetStaticField(0x3CFA0);
	}
	static ::System::Func_2<::GPNHHGBPCGM, ::System::String*>** StaticGet___9__3_3()
	{
		return (::System::Func_2<::GPNHHGBPCGM, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PLBGCOPJICP___c_TypeDefinitionIndex)->GetStaticField(0x3CFA8);
	}
	static ::System::Func_2<::GPNHHGBPCGM, ::GPNHHGBPCGM>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::GPNHHGBPCGM, ::GPNHHGBPCGM>**)Il2CppClass::FromTypeDefinitionIndex(PLBGCOPJICP___c_TypeDefinitionIndex)->GetStaticField(0x3CFB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLBGCOPJICP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBGCOPJICP___C__CTOR_OFFSET))(this);
	}

	::GPNHHGBPCGM CJGKCFEFLBL(::GPNHHGBPCGM MGMDLMBEDJF)
	{
		return ((::GPNHHGBPCGM(*)(::PVOID, ::GPNHHGBPCGM))((::PBYTE)hIl2Cpp + PLBGCOPJICP___C_CJGKCFEFLBL_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::String* EFGGKGAMHJB(::GPNHHGBPCGM MGMDLMBEDJF)
	{
		return ((::System::String*(*)(::PVOID, ::GPNHHGBPCGM))((::PBYTE)hIl2Cpp + PLBGCOPJICP___C_EFGGKGAMHJB_OFFSET))(this, MGMDLMBEDJF);
	}

	::GPNHHGBPCGM MDGFDKBNFHM(::GPNHHGBPCGM MGMDLMBEDJF)
	{
		return ((::GPNHHGBPCGM(*)(::PVOID, ::GPNHHGBPCGM))((::PBYTE)hIl2Cpp + PLBGCOPJICP___C_MDGFDKBNFHM_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::String* BNIJCNAIPIA(::GPNHHGBPCGM MGMDLMBEDJF)
	{
		return ((::System::String*(*)(::PVOID, ::GPNHHGBPCGM))((::PBYTE)hIl2Cpp + PLBGCOPJICP___C_BNIJCNAIPIA_OFFSET))(this, MGMDLMBEDJF);
	}
};
