#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C002F80)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C002FC0)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__ADAPT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C002FD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c_TypeDefinitionIndex = 81050;

	class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x57B70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x57B78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Adapt_b__3_0(::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry* a1, ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry*, ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__ADAPT_B__3_0_OFFSET))(this, a1, a2);
		}

	};
}
