#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSkinPreview; }
namespace System { template <typename T> class Func_1; }

#define NEJJOJIGNAM___C_GANOGAIODGN_OFFSET UNITYSDK_OFFSET(0x12FE0E70)
#define NEJJOJIGNAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FE0E20)
#define NEJJOJIGNAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE0E60)

inline static constexpr unsigned int NEJJOJIGNAM___c_TypeDefinitionIndex = 78712;

class NEJJOJIGNAM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NEJJOJIGNAM___c_TypeDefinitionIndex)->GetStaticField(0x4FC20);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigSkinPreview*>** StaticGet___9__6_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigSkinPreview*>**)Il2CppClass::FromTypeDefinitionIndex(NEJJOJIGNAM___c_TypeDefinitionIndex)->GetStaticField(0x4FC28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEJJOJIGNAM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJOJIGNAM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSkinPreview* GANOGAIODGN()
	{
		return ((::MoleMole::Config::ConfigSkinPreview*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJOJIGNAM___C_GANOGAIODGN_OFFSET))(this);
	}
};
