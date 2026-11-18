#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DHDNDNAMJHI___C_NMHNMHIAIKA_OFFSET UNITYSDK_OFFSET(0x12411B20)
#define DHDNDNAMJHI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12411AD0)
#define DHDNDNAMJHI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12411B10)

inline static constexpr unsigned int DHDNDNAMJHI___c_TypeDefinitionIndex = 47278;

class DHDNDNAMJHI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DHDNDNAMJHI___c_TypeDefinitionIndex)->GetStaticField(0x49980);
	}
	static ::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DHDNDNAMJHI___c_TypeDefinitionIndex)->GetStaticField(0x49988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHDNDNAMJHI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDNDNAMJHI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean NMHNMHIAIKA(::MoleMole::Config::ConfigViewObjectTraitBase* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + DHDNDNAMJHI___C_NMHNMHIAIKA_OFFSET))(this, IMLLDOHDCNC);
	}
};
