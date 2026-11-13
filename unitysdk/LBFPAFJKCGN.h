#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollShopRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBFPAFJKCGN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E93DF50)
#define LBFPAFJKCGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93E510)
#define LBFPAFJKCGN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E93E0C0)
#define LBFPAFJKCGN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E93D9C0)
#define LBFPAFJKCGN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E93DC50)
#define LBFPAFJKCGN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E93E160)
#define LBFPAFJKCGN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E93E1B0)
#define LBFPAFJKCGN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E93DF90)
#define LBFPAFJKCGN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E93DBF0)
#define LBFPAFJKCGN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E93DD80)
#define LBFPAFJKCGN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E93E020)
#define LBFPAFJKCGN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E93D940)

inline static constexpr unsigned int LBFPAFJKCGN_TypeDefinitionIndex = 15237;

	class LBFPAFJKCGN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopRewardRow*>**)UnitySDK::FromName("", "LBFPAFJKCGN")->GetStaticField(0x37990);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LBFPAFJKCGN")->GetStaticField(0x37998);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LBFPAFJKCGN")->GetStaticField(0x379A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LBFPAFJKCGN")->GetStaticField(0xAEC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LBFPAFJKCGN")->GetStaticField(0xAEC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBFPAFJKCGN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopRewardRow*>*(*)())((::PBYTE)hIl2Cpp + LBFPAFJKCGN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LBFPAFJKCGN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RollShopRewardRow*>(*)())((::PBYTE)hIl2Cpp + LBFPAFJKCGN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RollShopRewardRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RollShopRewardRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LBFPAFJKCGN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LBFPAFJKCGN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBFPAFJKCGN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBFPAFJKCGN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LBFPAFJKCGN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LBFPAFJKCGN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LBFPAFJKCGN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RollShopRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RollShopRewardRow*))((::PBYTE)hIl2Cpp + LBFPAFJKCGN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
