#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController_RankDataItem.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F067C0)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F06800)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__GETMISSIONLIST_B__45_0_OFFSET UNITYSDK_OFFSET(0x16F06810)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__REFRESHMISSIONVIEW_B__48_0_OFFSET UNITYSDK_OFFSET(0x16F06820)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex = 90737;

	class UIHollowLayerResultPageV2PopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__45_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44F80);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44F88);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__48_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMissionList_b__45_0(::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem a, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__GETMISSIONLIST_B__45_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshMissionView_b__48_0(::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem a, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__REFRESHMISSIONVIEW_B__48_0_OFFSET))(this, a, b);
		}
	};
}
