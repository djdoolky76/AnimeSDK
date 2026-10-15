#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyGridConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBECOJBNHKB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE83FB0)
#define HBECOJBNHKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE84B90)
#define HBECOJBNHKB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE84350)
#define HBECOJBNHKB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE83FF0)
#define HBECOJBNHKB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE84890)
#define HBECOJBNHKB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE843F0)
#define HBECOJBNHKB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE84440)
#define HBECOJBNHKB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE84220)
#define HBECOJBNHKB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE84830)
#define HBECOJBNHKB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE84A00)
#define HBECOJBNHKB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE842B0)
#define HBECOJBNHKB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE847B0)

	class HBECOJBNHKB : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HBECOJBNHKB")->GetStaticField(0x1B6E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HBECOJBNHKB")->GetStaticField(0x1B6E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridConfigRow*>**)UnitySDK::FromName("", "HBECOJBNHKB")->GetStaticField(0x1B6F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HBECOJBNHKB")->GetStaticField(0x62E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HBECOJBNHKB")->GetStaticField(0x62E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBECOJBNHKB_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBECOJBNHKB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBECOJBNHKB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBECOJBNHKB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HBECOJBNHKB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBECOJBNHKB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HBECOJBNHKB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyGridConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyGridConfigRow*))((::PBYTE)hIl2Cpp + HBECOJBNHKB_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HBECOJBNHKB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBECOJBNHKB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyGridConfigRow*>(*)())((::PBYTE)hIl2Cpp + HBECOJBNHKB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyGridConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyGridConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HBECOJBNHKB_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
