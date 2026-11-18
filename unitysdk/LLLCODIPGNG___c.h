#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace System { template <typename T> class Func_1; }

#define LLLCODIPGNG___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x16C640D0)
#define LLLCODIPGNG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C64080)
#define LLLCODIPGNG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C640C0)

inline static constexpr unsigned int LLLCODIPGNG___c_TypeDefinitionIndex = 70120;

class LLLCODIPGNG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LLLCODIPGNG___c_TypeDefinitionIndex)->GetStaticField(0x3BB60);
	}
	static ::System::Func_1<::MoleMole::ConfigGalGameAvatarShow*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::MoleMole::ConfigGalGameAvatarShow*>**)Il2CppClass::FromTypeDefinitionIndex(LLLCODIPGNG___c_TypeDefinitionIndex)->GetStaticField(0x3BB68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLLCODIPGNG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCODIPGNG___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigGalGameAvatarShow* JFNPHKAHEJF()
	{
		return ((::MoleMole::ConfigGalGameAvatarShow*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCODIPGNG___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
