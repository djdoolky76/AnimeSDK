#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageBuddiesShow; }
namespace System { template <typename T> class Func_1; }

#define APHNELGEKEP___C_KJIMAGGPDCB_OFFSET UNITYSDK_OFFSET(0x14C26DC0)
#define APHNELGEKEP___C_MOGKJKPDDKA_OFFSET UNITYSDK_OFFSET(0x14C26DD0)
#define APHNELGEKEP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C26D70)
#define APHNELGEKEP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C26DB0)

inline static constexpr unsigned int APHNELGEKEP___c_TypeDefinitionIndex = 90983;

class APHNELGEKEP___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::ConfigUIMainPageBuddiesShow*>** StaticGet___9__4_1()
	{
		return (::System::Func_1<::MoleMole::ConfigUIMainPageBuddiesShow*>**)Il2CppClass::FromTypeDefinitionIndex(APHNELGEKEP___c_TypeDefinitionIndex)->GetStaticField(0x496C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(APHNELGEKEP___c_TypeDefinitionIndex)->GetStaticField(0x496C8);
	}
	static ::System::Func_1<::MoleMole::ConfigUIMainPageBuddiesShow*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::MoleMole::ConfigUIMainPageBuddiesShow*>**)Il2CppClass::FromTypeDefinitionIndex(APHNELGEKEP___c_TypeDefinitionIndex)->GetStaticField(0x496D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APHNELGEKEP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHNELGEKEP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigUIMainPageBuddiesShow* KJIMAGGPDCB()
	{
		return ((::MoleMole::ConfigUIMainPageBuddiesShow*(*)(::PVOID))((::PBYTE)hIl2Cpp + APHNELGEKEP___C_KJIMAGGPDCB_OFFSET))(this);
	}

	::MoleMole::ConfigUIMainPageBuddiesShow* MOGKJKPDDKA()
	{
		return ((::MoleMole::ConfigUIMainPageBuddiesShow*(*)(::PVOID))((::PBYTE)hIl2Cpp + APHNELGEKEP___C_MOGKJKPDDKA_OFFSET))(this);
	}
};
