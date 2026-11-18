#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessory; }
namespace System { template <typename T> class Func_1; }

#define JGCDCGHCCOC___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x15262660)
#define JGCDCGHCCOC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15262610)
#define JGCDCGHCCOC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15262650)

inline static constexpr unsigned int JGCDCGHCCOC___c_TypeDefinitionIndex = 42346;

class JGCDCGHCCOC___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigPlayerAccessory*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigPlayerAccessory*>**)Il2CppClass::FromTypeDefinitionIndex(JGCDCGHCCOC___c_TypeDefinitionIndex)->GetStaticField(0x49F00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JGCDCGHCCOC___c_TypeDefinitionIndex)->GetStaticField(0x49F08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGCDCGHCCOC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCDCGHCCOC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigPlayerAccessory* MEMFHNGDGIN()
	{
		return ((::MoleMole::Config::ConfigPlayerAccessory*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCDCGHCCOC___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
