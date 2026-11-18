#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEMPJCOPMDE;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EAD700)
#define MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAD740)
#define MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__REFRESHVIEW_B__10_1_OFFSET UNITYSDK_OFFSET(0x17EAD750)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarActivityCoinBrushingWidgetController___c_TypeDefinitionIndex = 75896;

	class UIAvatarActivityCoinBrushingWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarActivityCoinBrushingWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35030);
		}
		static ::System::Action_1<::MEMPJCOPMDE*>** StaticGet___9__10_1()
		{
			return (::System::Action_1<::MEMPJCOPMDE*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarActivityCoinBrushingWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__10_1(::MEMPJCOPMDE* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__REFRESHVIEW_B__10_1_OFFSET))(this, rsp);
		}
	};
}
