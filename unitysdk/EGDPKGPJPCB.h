#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicLayerRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGDPKGPJPCB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD4D420)
#define EGDPKGPJPCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD4DA20)
#define EGDPKGPJPCB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD4D590)
#define EGDPKGPJPCB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD4CE50)
#define EGDPKGPJPCB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD4D0E0)
#define EGDPKGPJPCB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD4D630)
#define EGDPKGPJPCB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD4D680)
#define EGDPKGPJPCB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD4D460)
#define EGDPKGPJPCB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD4D080)
#define EGDPKGPJPCB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD4D250)
#define EGDPKGPJPCB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD4D4F0)
#define EGDPKGPJPCB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD4CDD0)

inline static constexpr unsigned int EGDPKGPJPCB_TypeDefinitionIndex = 14857;

	class EGDPKGPJPCB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>**)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x4D2B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x4D2B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x4D2C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x11A40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EGDPKGPJPCB")->GetStaticField(0x11A41);
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
