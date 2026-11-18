#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ModifierStacking.h"
#include "unitysdk/System/Object.h"

class JPPHPNAAJMO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOBMJFLHIJI_BLMMMDGFCMN_OFFSET UNITYSDK_OFFSET(0x179BE660)
#define FOBMJFLHIJI_FIPHHAHLAOO_OFFSET UNITYSDK_OFFSET(0x179BE780)
#define FOBMJFLHIJI_HJNGEEAANDN_OFFSET UNITYSDK_OFFSET(0x179BEAF0)
#define FOBMJFLHIJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x179BE5B0)
#define FOBMJFLHIJI__CTOR_OFFSET UNITYSDK_OFFSET(0x179BE5A0)

inline static constexpr unsigned int FOBMJFLHIJI_TypeDefinitionIndex = 62629;

class FOBMJFLHIJI : public ::System::Object
{
public:
	static ::System::String** StaticGet_BBGOAJPOLHL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FOBMJFLHIJI_TypeDefinitionIndex)->GetStaticField(0x3DCA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::JPPHPNAAJMO*>*>*>** StaticGet_KPNCECAKNBE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::JPPHPNAAJMO*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(FOBMJFLHIJI_TypeDefinitionIndex)->GetStaticField(0x3DCA8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBMJFLHIJI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOBMJFLHIJI__CCTOR_OFFSET))();
	}

	static ::System::Void BLMMMDGFCMN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOBMJFLHIJI_BLMMMDGFCMN_OFFSET))();
	}

	static ::JPPHPNAAJMO* FIPHHAHLAOO(::System::Int32 KEHNCKBIBFA, ::System::Single MDPPNMIPDMP, ::MoleMole::Config::ModifierStacking JMJHKMEMHDB)
	{
		return ((::JPPHPNAAJMO*(*)(::System::Int32, ::System::Single, ::MoleMole::Config::ModifierStacking))((::PBYTE)hIl2Cpp + FOBMJFLHIJI_FIPHHAHLAOO_OFFSET))(KEHNCKBIBFA, MDPPNMIPDMP, JMJHKMEMHDB);
	}

	static ::JPPHPNAAJMO* HJNGEEAANDN(::System::Int32 KEHNCKBIBFA, ::System::Single MDPPNMIPDMP, ::MoleMole::Config::ModifierStacking JMJHKMEMHDB)
	{
		return ((::JPPHPNAAJMO*(*)(::System::Int32, ::System::Single, ::MoleMole::Config::ModifierStacking))((::PBYTE)hIl2Cpp + FOBMJFLHIJI_HJNGEEAANDN_OFFSET))(KEHNCKBIBFA, MDPPNMIPDMP, JMJHKMEMHDB);
	}
};
