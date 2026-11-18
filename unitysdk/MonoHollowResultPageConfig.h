#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MissionResult.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

class MonoHollowResultPageConfig_ResutlLights;
class NumberBlinkConfig;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOHOLLOWRESULTPAGECONFIG_MONOREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x120C32A0)
#define MONOHOLLOWRESULTPAGECONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x120C3B00)
#define MONOHOLLOWRESULTPAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x120C33A0)

inline static constexpr unsigned int MonoHollowResultPageConfig_TypeDefinitionIndex = 63408;

class MonoHollowResultPageConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	static ::System::Int32* StaticGet_ExpandRow()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_TypeDefinitionIndex)->GetStaticField(0xDD40);
	}
	static ::System::Int32* StaticGet_ExpandCol()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_TypeDefinitionIndex)->GetStaticField(0xDD44);
	}
	static ::System::Int32* StaticGet_ValidCol()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_TypeDefinitionIndex)->GetStaticField(0xDD48);
	}
	static ::System::Int32* StaticGet_ValidRow()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoHollowResultPageConfig_TypeDefinitionIndex)->GetStaticField(0xDD4C);
	}
	::System::Object* DepthMatrix; // 0x58
	::System::Object* SuccessHue; // 0x60
	::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Collections::Generic::List_1<::System::Single>*>* SuccessHue1; // 0x68
	::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Collections::Generic::List_1<::System::Single>*>* SuccessSaturation; // 0x70
	::System::Collections::Generic::List_1<::System::Single>* FailLight; // 0x78
	::System::Collections::Generic::List_1<::System::Single>* FailSaturation; // 0x80
	::System::Collections::Generic::List_1<::System::String*>* TextureSheetConfigs; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::System::Object*>* BlinkMatrixMap; // 0x90
	::System::Int32 NumberValidRow; // 0x98
	::System::Int32 NumberValidCol; // 0x9C
	::System::Int32 NumberExpandRow; // 0xA0
	::System::Int32 NumberExpandCol; // 0xA4
	::System::Object* NumberDepthMatrix; // 0xA8
	::System::Collections::Generic::List_1<::System::Object*>* NumberBlinkList; // 0xB0
	::NumberBlinkConfig* NumberBlinkConfig; // 0xB8
	::System::Collections::Generic::Dictionary_2<::MoleMole::MissionResult, ::UnityEngine::Color>* MissionResultDict; // 0xC0
	::MonoHollowResultPageConfig_ResutlLights* Success_Lights; // 0xC8
	::MonoHollowResultPageConfig_ResutlLights* Faild_Lights; // 0xD0
	::System::Single lerpLightDelayTime; // 0xD8
	::System::Single ExpProgressDuration; // 0xDC
	::System::Single DelayRefreshUi; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG__CCTOR_OFFSET))();
	}

	::System::Void MonoRefreshView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_MONOREFRESHVIEW_OFFSET))(this);
	}
};
