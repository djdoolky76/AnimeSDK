#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class PFPNPJDJNOB;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MultiLightEffectMaterialBlock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1745D4A0)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_CGMJDCGIKNI_OFFSET UNITYSDK_OFFSET(0x1745CDD0)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_CTOR_OFFSET UNITYSDK_OFFSET(0x1745D160)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_EPACFKIMEKB_OFFSET UNITYSDK_OFFSET(0x1745C1C0)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_MOOMLIBMBFD_OFFSET UNITYSDK_OFFSET(0x1745C840)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_OCLOBFJDOPH_OFFSET UNITYSDK_OFFSET(0x1745C100)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_OHPCADPGKOG_OFFSET UNITYSDK_OFFSET(0x1745D000)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_PKMJLIADPOD_OFFSET UNITYSDK_OFFSET(0x1745CC80)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_STOP_OFFSET UNITYSDK_OFFSET(0x1745BD00)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_TRYINIT_OFFSET UNITYSDK_OFFSET(0x1745B4F0)
#define RPG_CLIENT_PROP_ROGUEDLCCOMPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1745BEC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueDLCCompass_TypeDefinitionIndex = 81729;

	class RogueDLCCompass : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* SpeedScale; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* BufferingScale; // 0x20
		::System::Single StopTime; // 0x28
		::System::Int32 speedIndexOuter; // 0x2C
		::System::Int32 directionOuter; // 0x30
		::System::Int32 angleIndexOuter; // 0x34
		::System::Int32 speedIndexMiddle; // 0x38
		::System::Int32 directionMiddle; // 0x3C
		::System::Int32 angleIndexMiddle; // 0x40
		::System::Int32 speedIndexInner; // 0x44
		::System::Int32 directionInner; // 0x48
		::System::Int32 angleIndexInner; // 0x4C
		::PFPNPJDJNOB* CBLAFHGGLHE; // 0x50
		::PFPNPJDJNOB* NIICNGILHGO; // 0x58
		::PFPNPJDJNOB* LOIABNPGPLC; // 0x60
		::RPG::Client::MultiLightEffectMaterialBlock* HPNMGOLAMAH; // 0x68
		::System::Collections::Generic::List_1<::PFPNPJDJNOB*>* NJGNPOIFHLA; // 0x70
		::System::Int32 NCDEGDCPCHN; // 0x78
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Single>* ENCHFAKMAGA; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* CACINMJCLCC; // 0x88
		::System::Boolean HDJOGGDMCIO; // 0x90
		::System::Byte _padding1[0x3];
		::System::Int32 PAEKGHFACCJ; // 0x94
		::System::Boolean InChangingColor; // 0x98
		::System::Byte _padding2[0x3];
		::System::Single JEGDGFDAMKL; // 0x9C
		::System::Int32 DDBLFAKICFL; // 0xA0
		::System::Single PDDDOLHLFDC; // 0xA4
		::System::Single CIKOAICCDCO; // 0xA8
		::System::Single MEIIELDCPCO; // 0xAC
		::System::Single BFILFBPDLEF; // 0xB0
		::System::Single PIAJMODAKGK; // 0xB4
		::System::Single FJMMAGJDJDC; // 0xB8
		static ::System::String** StaticGet_TWO_OVERLAP()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DCC0);
		}

		static ::System::String** StaticGet_COUNTDOWN_END()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DCC8);
		}

		static ::System::String** StaticGet_RTPC_OUTER()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DCD0);
		}

		static ::System::String** StaticGet_MIDDLE_ROTATE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DCD8);
		}

		static ::System::String** StaticGet_COMPASS_FINISH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DCE0);
		}

		static ::System::String** StaticGet_OUTER_ROTATE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DCE8);
		}

		static ::System::String** StaticGet_RTPC_INNER()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DCF0);
		}

		static ::System::String** StaticGet_OUTER_SELECT()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DCF8);
		}

		static ::System::String** StaticGet_MIDDLE_STOP()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD00);
		}

		static ::System::String** StaticGet_INNER_STOP()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD08);
		}

		static ::System::String** StaticGet_FINISH_WEAK_EFFECT()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD10);
		}

		static ::System::String** StaticGet_COUNTDOWN_START()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD18);
		}

		static ::System::String** StaticGet_MIDDLE_SELECT()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD20);
		}

		static ::System::String** StaticGet_RTPC_MIDDLE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD28);
		}

		static ::System::String** StaticGet_THREE_OVERLAP()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD30);
		}

		static ::System::String** StaticGet_COMPASS_FINISH_LV3()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD38);
		}

		static ::System::String** StaticGet_FINISH_STRONG_EFFECT()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD40);
		}

		static ::System::String** StaticGet_OUTER_STOP()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD48);
		}

		static ::System::String** StaticGet_INNER_ROTATE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD50);
		}

		static ::System::String** StaticGet_INNER_SELECT()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCCompass")->GetStaticField(0x5DD58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_CCTOR_OFFSET))();
		}

		::System::Boolean TryInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_TRYINIT_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_STOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_UPDATE_OFFSET))(this);
		}

		::System::Void EPACFKIMEKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_EPACFKIMEKB_OFFSET))(this);
		}

		::System::Void MOOMLIBMBFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_MOOMLIBMBFD_OFFSET))(this);
		}

		::System::Void PKMJLIADPOD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_PKMJLIADPOD_OFFSET))(this, a1);
		}

		::System::Void CGMJDCGIKNI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_CGMJDCGIKNI_OFFSET))(this, a1);
		}

		::System::Void OCLOBFJDOPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_OCLOBFJDOPH_OFFSET))(this);
		}

		::System::Void OHPCADPGKOG(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCCOMPASS_OHPCADPGKOG_OFFSET))(this, a1, a2);
		}

	};
}
