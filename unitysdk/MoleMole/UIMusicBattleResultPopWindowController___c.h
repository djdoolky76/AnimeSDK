#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NFGHOLFKEPK;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17979800)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17979840)
#define MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__ONUIOPEN_B__1_2_OFFSET UNITYSDK_OFFSET(0x17979850)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleResultPopWindowController___c_TypeDefinitionIndex = 75392;

	class UIMusicBattleResultPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::NFGHOLFKEPK*>** StaticGet___9__1_2()
		{
			return (::System::Action_1<::NFGHOLFKEPK*>**)Il2CppClass::FromTypeDefinitionIndex(UIMusicBattleResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x51940);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMusicBattleResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x51948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1_2(::NFGHOLFKEPK* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::NFGHOLFKEPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLERESULTPOPWINDOWCONTROLLER___C__ONUIOPEN_B__1_2_OFFSET))(this, rsp);
		}
	};
}
