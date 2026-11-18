#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IONMPBFCNPB___C_OPMEANPCEJE_OFFSET UNITYSDK_OFFSET(0x197E6B30)
#define IONMPBFCNPB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197E6AE0)
#define IONMPBFCNPB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197E6B20)

inline static constexpr unsigned int IONMPBFCNPB___c_TypeDefinitionIndex = 89673;

class IONMPBFCNPB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IONMPBFCNPB___c_TypeDefinitionIndex)->GetStaticField(0x4BC00);
	}
	static ::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IONMPBFCNPB___c_TypeDefinitionIndex)->GetStaticField(0x4BC08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONMPBFCNPB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONMPBFCNPB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean OPMEANPCEJE(::MoleMole::Config::ConfigViewObjectTraitBase* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + IONMPBFCNPB___C_OPMEANPCEJE_OFFSET))(this, IMLLDOHDCNC);
	}
};
