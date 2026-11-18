#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;
namespace System { class Action; }

#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10562350)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10562390)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONSHOW_B__16_8_OFFSET UNITYSDK_OFFSET(0x10562460)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONUIINIT_B__14_2_OFFSET UNITYSDK_OFFSET(0x105623A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattlePageController___c_TypeDefinitionIndex = 63018;

	class UIVRBossBattlePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__14_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossBattlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F450);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossBattlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F458);
		}
		static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__16_8()
		{
			return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossBattlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONUIINIT_B__14_2_OFFSET))(this);
		}

		::System::Void _OnShow_b__16_8(::OAEFGCLEHHO* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONSHOW_B__16_8_OFFSET))(this, errorMessage);
		}
	};
}
