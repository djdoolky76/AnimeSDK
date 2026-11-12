#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class ColorGradingMaskController; }
namespace RPG::CustomRP { class ColorGradingMaskManager_MaskCb; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC5DF0)
#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1DDC4D10)
#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1DDC4F00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ColorGradingMaskManager_TypeDefinitionIndex = 38696;

	class ColorGradingMaskManager : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::ColorGradingMaskManager_MaskCb** StaticGet__cb()
		{
			return (::RPG::CustomRP::ColorGradingMaskManager_MaskCb**)UnitySDK::FromName("RPG.CustomRP", "ColorGradingMaskManager")->GetStaticField(0x27310);
		}

		static ::System::Collections::Generic::List_1<::RPG::CustomRP::ColorGradingMaskController*>** StaticGet__instances()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::ColorGradingMaskController*>**)UnitySDK::FromName("RPG.CustomRP", "ColorGradingMaskManager")->GetStaticField(0x27318);
		}

		static ::System::Boolean* StaticGet_InvertMask()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "ColorGradingMaskManager")->GetStaticField(0x7D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Void Register(::RPG::CustomRP::ColorGradingMaskController* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::ColorGradingMaskController*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_REGISTER_OFFSET))(a1);
		}

		static ::System::Void Unregister(::RPG::CustomRP::ColorGradingMaskController* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::ColorGradingMaskController*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_UNREGISTER_OFFSET))(a1);
		}

	};
}
