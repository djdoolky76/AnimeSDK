#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueShopType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueShopRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KEILCHAPOCP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D05BCD0)
#define KEILCHAPOCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D05C2D0)
#define KEILCHAPOCP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D05BE40)
#define KEILCHAPOCP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D05B6F0)
#define KEILCHAPOCP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D05B980)
#define KEILCHAPOCP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D05BEE0)
#define KEILCHAPOCP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D05BF30)
#define KEILCHAPOCP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D05BD10)
#define KEILCHAPOCP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D05B920)
#define KEILCHAPOCP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D05BAF0)
#define KEILCHAPOCP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D05BDA0)
#define KEILCHAPOCP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D05B670)

inline static constexpr unsigned int KEILCHAPOCP_TypeDefinitionIndex = 14692;

	class KEILCHAPOCP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KEILCHAPOCP")->GetStaticField(0x341B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KEILCHAPOCP")->GetStaticField(0x341B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>**)UnitySDK::FromName("", "KEILCHAPOCP")->GetStaticField(0x341C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KEILCHAPOCP")->GetStaticField(0xA960);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KEILCHAPOCP")->GetStaticField(0xA961);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEILCHAPOCP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>*(*)())((::PBYTE)hIl2Cpp + KEILCHAPOCP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KEILCHAPOCP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>(*)())((::PBYTE)hIl2Cpp + KEILCHAPOCP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueShopRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::RogueShopType a2)
		{
			return ((::RPG::GameCore::RogueShopRow*(*)(::System::UInt32, ::RPG::GameCore::RogueShopType))((::PBYTE)hIl2Cpp + KEILCHAPOCP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KEILCHAPOCP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEILCHAPOCP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEILCHAPOCP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KEILCHAPOCP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KEILCHAPOCP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KEILCHAPOCP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueShopRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueShopRow*))((::PBYTE)hIl2Cpp + KEILCHAPOCP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
