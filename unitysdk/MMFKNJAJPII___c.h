#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ZipLineSubSystem; }
namespace System { template <typename T> class Func_1; }

#define MMFKNJAJPII___C_ENEIFIFJLMM_OFFSET UNITYSDK_OFFSET(0x12173370)
#define MMFKNJAJPII___C_GAPECOPDLPB_OFFSET UNITYSDK_OFFSET(0x12173350)
#define MMFKNJAJPII___C_NMDCEGIKGIO_OFFSET UNITYSDK_OFFSET(0x12173360)
#define MMFKNJAJPII___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12173300)
#define MMFKNJAJPII___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12173340)

inline static constexpr unsigned int MMFKNJAJPII___c_TypeDefinitionIndex = 87056;

class MMFKNJAJPII___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::ZipLineSubSystem*>** StaticGet___9__60_1()
	{
		return (::System::Func_1<::MoleMole::ZipLineSubSystem*>**)Il2CppClass::FromTypeDefinitionIndex(MMFKNJAJPII___c_TypeDefinitionIndex)->GetStaticField(0x38660);
	}
	static ::System::Func_1<::System::Int32>** StaticGet___9__60_0()
	{
		return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MMFKNJAJPII___c_TypeDefinitionIndex)->GetStaticField(0x38668);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__61_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MMFKNJAJPII___c_TypeDefinitionIndex)->GetStaticField(0x38670);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MMFKNJAJPII___c_TypeDefinitionIndex)->GetStaticField(0x38678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMFKNJAJPII___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GAPECOPDLPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII___C_GAPECOPDLPB_OFFSET))(this);
	}

	::System::Boolean NMDCEGIKGIO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII___C_NMDCEGIKGIO_OFFSET))(this);
	}

	::MoleMole::ZipLineSubSystem* ENEIFIFJLMM()
	{
		return ((::MoleMole::ZipLineSubSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKNJAJPII___C_ENEIFIFJLMM_OFFSET))(this);
	}
};
