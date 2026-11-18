#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHGOHALCIPJ;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MLJCGMIJHJM___C_FEBAJOCKHEB_OFFSET UNITYSDK_OFFSET(0x14D8CAA0)
#define MLJCGMIJHJM___C_IPAKDNNKAAN_OFFSET UNITYSDK_OFFSET(0x14D8CAB0)
#define MLJCGMIJHJM___C_JDLGIIHDFKA_OFFSET UNITYSDK_OFFSET(0x14D8CAF0)
#define MLJCGMIJHJM___C_KHDPGPNKGBN_OFFSET UNITYSDK_OFFSET(0x14D8CA90)
#define MLJCGMIJHJM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D8CA40)
#define MLJCGMIJHJM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8CA80)

inline static constexpr unsigned int MLJCGMIJHJM___c_TypeDefinitionIndex = 90151;

class MLJCGMIJHJM___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__0_16()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MLJCGMIJHJM___c_TypeDefinitionIndex)->GetStaticField(0x4D6E0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MLJCGMIJHJM___c_TypeDefinitionIndex)->GetStaticField(0x4D6E8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MLJCGMIJHJM___c_TypeDefinitionIndex)->GetStaticField(0x4D6F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MLJCGMIJHJM___c_TypeDefinitionIndex)->GetStaticField(0x4D6F8);
	}
	static ::System::Action_1<::MHGOHALCIPJ*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::MHGOHALCIPJ*>**)Il2CppClass::FromTypeDefinitionIndex(MLJCGMIJHJM___c_TypeDefinitionIndex)->GetStaticField(0x4D700);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLJCGMIJHJM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJCGMIJHJM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KHDPGPNKGBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJCGMIJHJM___C_KHDPGPNKGBN_OFFSET))(this);
	}

	::System::Void FEBAJOCKHEB(::MHGOHALCIPJ* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MHGOHALCIPJ*))((::PBYTE)hIl2Cpp + MLJCGMIJHJM___C_FEBAJOCKHEB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::String* IPAKDNNKAAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJCGMIJHJM___C_IPAKDNNKAAN_OFFSET))(this);
	}

	::System::Boolean JDLGIIHDFKA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJCGMIJHJM___C_JDLGIIHDFKA_OFFSET))(this);
	}
};
