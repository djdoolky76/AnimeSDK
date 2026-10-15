#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShopGoodsPackConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNCACFPEBNC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E7F00)
#define BNCACFPEBNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E8A50)
#define BNCACFPEBNC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E82A0)
#define BNCACFPEBNC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E7F40)
#define BNCACFPEBNC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E8790)
#define BNCACFPEBNC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E8340)
#define BNCACFPEBNC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E8390)
#define BNCACFPEBNC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E8170)
#define BNCACFPEBNC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E8730)
#define BNCACFPEBNC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E88C0)
#define BNCACFPEBNC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E8200)
#define BNCACFPEBNC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E86B0)

inline static constexpr unsigned int BNCACFPEBNC_TypeDefinitionIndex = 15111;

	class BNCACFPEBNC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BNCACFPEBNC")->GetStaticField(0x388D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BNCACFPEBNC")->GetStaticField(0x388D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>**)UnitySDK::FromName("", "BNCACFPEBNC")->GetStaticField(0x388E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNCACFPEBNC")->GetStaticField(0xC100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BNCACFPEBNC")->GetStaticField(0xC101);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNCACFPEBNC_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNCACFPEBNC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNCACFPEBNC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNCACFPEBNC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BNCACFPEBNC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNCACFPEBNC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BNCACFPEBNC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ShopGoodsPackConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ShopGoodsPackConfigRow*))((::PBYTE)hIl2Cpp + BNCACFPEBNC_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BNCACFPEBNC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNCACFPEBNC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>(*)())((::PBYTE)hIl2Cpp + BNCACFPEBNC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ShopGoodsPackConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ShopGoodsPackConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BNCACFPEBNC_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
