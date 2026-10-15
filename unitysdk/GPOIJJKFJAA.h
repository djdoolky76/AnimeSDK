#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShopItemGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPOIJJKFJAA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE4B6A0)
#define GPOIJJKFJAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE4C2F0)
#define GPOIJJKFJAA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE4BA40)
#define GPOIJJKFJAA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE4B6E0)
#define GPOIJJKFJAA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE4BFB0)
#define GPOIJJKFJAA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE4BAE0)
#define GPOIJJKFJAA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE4BB30)
#define GPOIJJKFJAA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE4B910)
#define GPOIJJKFJAA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE4BF50)
#define GPOIJJKFJAA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE4C120)
#define GPOIJJKFJAA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE4B9A0)
#define GPOIJJKFJAA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE4BED0)

inline static constexpr unsigned int GPOIJJKFJAA_TypeDefinitionIndex = 15110;

	class GPOIJJKFJAA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GPOIJJKFJAA")->GetStaticField(0x18480);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopItemGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopItemGroupConfigRow*>**)UnitySDK::FromName("", "GPOIJJKFJAA")->GetStaticField(0x18488);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GPOIJJKFJAA")->GetStaticField(0x18490);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GPOIJJKFJAA")->GetStaticField(0x5330);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GPOIJJKFJAA")->GetStaticField(0x5331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPOIJJKFJAA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPOIJJKFJAA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPOIJJKFJAA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPOIJJKFJAA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GPOIJJKFJAA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPOIJJKFJAA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GPOIJJKFJAA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ShopItemGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ShopItemGroupConfigRow*))((::PBYTE)hIl2Cpp + GPOIJJKFJAA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopItemGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopItemGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GPOIJJKFJAA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPOIJJKFJAA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopItemGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopItemGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + GPOIJJKFJAA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ShopItemGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ShopItemGroupConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GPOIJJKFJAA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};
