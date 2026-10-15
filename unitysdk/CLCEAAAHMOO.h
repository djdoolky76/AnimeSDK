#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyStatusRankConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLCEAAAHMOO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC20260)
#define CLCEAAAHMOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC20E40)
#define CLCEAAAHMOO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC20600)
#define CLCEAAAHMOO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC202A0)
#define CLCEAAAHMOO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC20B40)
#define CLCEAAAHMOO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC206A0)
#define CLCEAAAHMOO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC206F0)
#define CLCEAAAHMOO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC204D0)
#define CLCEAAAHMOO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC20AE0)
#define CLCEAAAHMOO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC20CB0)
#define CLCEAAAHMOO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC20560)
#define CLCEAAAHMOO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC20A60)

	class CLCEAAAHMOO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CLCEAAAHMOO")->GetStaticField(0x432B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStatusRankConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStatusRankConfigRow*>**)UnitySDK::FromName("", "CLCEAAAHMOO")->GetStaticField(0x432B8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CLCEAAAHMOO")->GetStaticField(0x432C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CLCEAAAHMOO")->GetStaticField(0x102E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CLCEAAAHMOO")->GetStaticField(0x102E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLCEAAAHMOO_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLCEAAAHMOO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLCEAAAHMOO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLCEAAAHMOO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLCEAAAHMOO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLCEAAAHMOO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CLCEAAAHMOO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyStatusRankConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyStatusRankConfigRow*))((::PBYTE)hIl2Cpp + CLCEAAAHMOO_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStatusRankConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStatusRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLCEAAAHMOO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLCEAAAHMOO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStatusRankConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStatusRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLCEAAAHMOO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyStatusRankConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyStatusRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLCEAAAHMOO_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
