#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5ACFC0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AD000)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___C___SENDAVATARCHANGE_B__21_0_OFFSET UNITYSDK_OFFSET(0x1C5AD010)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem___c_TypeDefinitionIndex = 39725;

	class BigSceneMiscLogicSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BigSceneMiscLogicSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4C050);
		}
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BigSceneMiscLogicSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4C058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void __SendAvatarChange_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM___C___SENDAVATARCHANGE_B__21_0_OFFSET))(this);
		}
	};
}
