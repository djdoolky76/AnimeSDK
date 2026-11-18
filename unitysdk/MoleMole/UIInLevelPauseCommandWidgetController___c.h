#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFPLNPDOHJA;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F42600)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F42640)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___C__REFRESHSKILLLIST_B__12_0_OFFSET UNITYSDK_OFFSET(0x18F42650)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseCommandWidgetController___c_TypeDefinitionIndex = 44272;

	class UIInLevelPauseCommandWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::EFPLNPDOHJA*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::EFPLNPDOHJA*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseCommandWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48AF0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseCommandWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48AF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshSkillList_b__12_0(::EFPLNPDOHJA* a, ::EFPLNPDOHJA* b)
		{
			return ((::System::Int32(*)(::PVOID, ::EFPLNPDOHJA*, ::EFPLNPDOHJA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___C__REFRESHSKILLLIST_B__12_0_OFFSET))(this, a, b);
		}
	};
}
