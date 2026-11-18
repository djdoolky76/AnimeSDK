#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBJCLLBMALO;
class PBGECGKKLKD;
namespace System { template <typename T1, typename T2> class Action_2; }

#define HOIKIINAJLG___C_IKEHBGKEPAC_OFFSET UNITYSDK_OFFSET(0x140C8990)
#define HOIKIINAJLG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140C8940)
#define HOIKIINAJLG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140C8980)

inline static constexpr unsigned int HOIKIINAJLG___c_TypeDefinitionIndex = 80400;

class HOIKIINAJLG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HOIKIINAJLG___c_TypeDefinitionIndex)->GetStaticField(0x32290);
	}
	static ::System::Action_2<::PBGECGKKLKD*, ::MBJCLLBMALO*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::PBGECGKKLKD*, ::MBJCLLBMALO*>**)Il2CppClass::FromTypeDefinitionIndex(HOIKIINAJLG___c_TypeDefinitionIndex)->GetStaticField(0x32298);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOIKIINAJLG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIKIINAJLG___C__CTOR_OFFSET))(this);
	}

	::System::Void IKEHBGKEPAC(::PBGECGKKLKD* PFBADNEIOHG, ::MBJCLLBMALO* EFEBFFCEJEF)
	{
		return ((::System::Void(*)(::PVOID, ::PBGECGKKLKD*, ::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + HOIKIINAJLG___C_IKEHBGKEPAC_OFFSET))(this, PFBADNEIOHG, EFEBFFCEJEF);
	}
};
