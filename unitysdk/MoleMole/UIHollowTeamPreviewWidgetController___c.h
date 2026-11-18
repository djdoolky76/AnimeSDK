#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ACGHCAEEFAH;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187D1280)
#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187D12C0)
#define MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__FETCHCFGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x187D12D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex = 89760;

	class UIHollowTeamPreviewWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44FE0);
		}
		static ::System::Comparison_1<::ACGHCAEEFAH*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::ACGHCAEEFAH*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTeamPreviewWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FetchCfgs_b__11_0(::ACGHCAEEFAH* x, ::ACGHCAEEFAH* y)
		{
			return ((::System::Int32(*)(::PVOID, ::ACGHCAEEFAH*, ::ACGHCAEEFAH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMPREVIEWWIDGETCONTROLLER___C__FETCHCFGS_B__11_0_OFFSET))(this, x, y);
		}
	};
}
