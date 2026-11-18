#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KFDFKPCHAEE___C_DBKCHGKAJKI_OFFSET UNITYSDK_OFFSET(0x1633A590)
#define KFDFKPCHAEE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1633A540)
#define KFDFKPCHAEE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1633A580)

inline static constexpr unsigned int KFDFKPCHAEE___c_TypeDefinitionIndex = 83736;

class KFDFKPCHAEE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KFDFKPCHAEE___c_TypeDefinitionIndex)->GetStaticField(0x381F0);
	}
	static ::System::Func_2<::System::String*, ::System::Object*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(KFDFKPCHAEE___c_TypeDefinitionIndex)->GetStaticField(0x381F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFDFKPCHAEE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDFKPCHAEE___C__CTOR_OFFSET))(this);
	}

	::System::Object* DBKCHGKAJKI(::System::String* EMIKCAHJLGB)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KFDFKPCHAEE___C_DBKCHGKAJKI_OFFSET))(this, EMIKCAHJLGB);
	}
};
