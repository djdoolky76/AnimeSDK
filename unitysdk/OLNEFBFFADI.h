#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightShopPriceConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLNEFBFFADI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D29BD60)
#define OLNEFBFFADI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D29C330)
#define OLNEFBFFADI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D29BED0)
#define OLNEFBFFADI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D29B7D0)
#define OLNEFBFFADI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D29BA60)
#define OLNEFBFFADI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D29BF70)
#define OLNEFBFFADI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D29BFC0)
#define OLNEFBFFADI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D29BDA0)
#define OLNEFBFFADI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D29BA00)
#define OLNEFBFFADI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D29BBD0)
#define OLNEFBFFADI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D29BE30)
#define OLNEFBFFADI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D29B750)

	class OLNEFBFFADI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0x394A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>**)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0x394A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0x394B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0xC410);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OLNEFBFFADI")->GetStaticField(0xC411);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightShopPriceConfigRow*>(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightShopPriceConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightShopPriceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OLNEFBFFADI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNEFBFFADI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OLNEFBFFADI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLNEFBFFADI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OLNEFBFFADI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightShopPriceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightShopPriceConfigRow*))((::PBYTE)hIl2Cpp + OLNEFBFFADI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
