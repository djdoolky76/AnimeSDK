#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicLayerRoomRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGDPKGPJPCB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD7B4A0)
#define EGDPKGPJPCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7BAA0)
#define EGDPKGPJPCB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD7B610)
#define EGDPKGPJPCB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD7AED0)
#define EGDPKGPJPCB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD7B160)
#define EGDPKGPJPCB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD7B6B0)
#define EGDPKGPJPCB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD7B700)
#define EGDPKGPJPCB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD7B4E0)
#define EGDPKGPJPCB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD7B100)
#define EGDPKGPJPCB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD7B2D0)
#define EGDPKGPJPCB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD7B570)
#define EGDPKGPJPCB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD7AE50)

	class EGDPKGPJPCB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>**)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x53D60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x53D68);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x53D70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x12990);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x12991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGDPKGPJPCB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>*(*)())((::PBYTE)hIl2Cpp + EGDPKGPJPCB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EGDPKGPJPCB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>(*)())((::PBYTE)hIl2Cpp + EGDPKGPJPCB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicLayerRoomRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueMagicLayerRoomRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EGDPKGPJPCB_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EGDPKGPJPCB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGDPKGPJPCB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGDPKGPJPCB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EGDPKGPJPCB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EGDPKGPJPCB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EGDPKGPJPCB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicLayerRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicLayerRoomRow*))((::PBYTE)hIl2Cpp + EGDPKGPJPCB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
