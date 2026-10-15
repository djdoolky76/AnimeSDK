#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantTradeOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDDHAJDLMHF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDAD010)
#define FDDHAJDLMHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDAD5E0)
#define FDDHAJDLMHF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDAD180)
#define FDDHAJDLMHF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDACA80)
#define FDDHAJDLMHF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDACD10)
#define FDDHAJDLMHF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDAD220)
#define FDDHAJDLMHF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDAD270)
#define FDDHAJDLMHF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDAD050)
#define FDDHAJDLMHF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDACCB0)
#define FDDHAJDLMHF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDACE80)
#define FDDHAJDLMHF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDAD0E0)
#define FDDHAJDLMHF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDACA00)

inline static constexpr unsigned int FDDHAJDLMHF_TypeDefinitionIndex = 11357;

	class FDDHAJDLMHF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FDDHAJDLMHF")->GetStaticField(0xFF30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FDDHAJDLMHF")->GetStaticField(0xFF38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantTradeOrderRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantTradeOrderRow*>**)UnitySDK::FromName("", "FDDHAJDLMHF")->GetStaticField(0xFF40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FDDHAJDLMHF")->GetStaticField(0x3390);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDDHAJDLMHF")->GetStaticField(0x3391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDDHAJDLMHF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantTradeOrderRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantTradeOrderRow*>*(*)())((::PBYTE)hIl2Cpp + FDDHAJDLMHF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDDHAJDLMHF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantTradeOrderRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantTradeOrderRow*>(*)())((::PBYTE)hIl2Cpp + FDDHAJDLMHF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantTradeOrderRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantTradeOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FDDHAJDLMHF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDDHAJDLMHF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDDHAJDLMHF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDDHAJDLMHF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FDDHAJDLMHF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDDHAJDLMHF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FDDHAJDLMHF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantTradeOrderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantTradeOrderRow*))((::PBYTE)hIl2Cpp + FDDHAJDLMHF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
