#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeRoyaleBattleItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKPKJBBJNAD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D075950)
#define KKPKJBBJNAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D075F20)
#define KKPKJBBJNAD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D075AC0)
#define KKPKJBBJNAD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0753C0)
#define KKPKJBBJNAD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D075650)
#define KKPKJBBJNAD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D075B60)
#define KKPKJBBJNAD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D075BB0)
#define KKPKJBBJNAD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D075990)
#define KKPKJBBJNAD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0755F0)
#define KKPKJBBJNAD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0757C0)
#define KKPKJBBJNAD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D075A20)
#define KKPKJBBJNAD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D075340)

inline static constexpr unsigned int KKPKJBBJNAD_TypeDefinitionIndex = 12092;

	class KKPKJBBJNAD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow*>**)UnitySDK::FromName("", "KKPKJBBJNAD")->GetStaticField(0x35470);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KKPKJBBJNAD")->GetStaticField(0x35478);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KKPKJBBJNAD")->GetStaticField(0x35480);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KKPKJBBJNAD")->GetStaticField(0xAC20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KKPKJBBJNAD")->GetStaticField(0xAC21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKPKJBBJNAD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow*>*(*)())((::PBYTE)hIl2Cpp + KKPKJBBJNAD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKPKJBBJNAD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeRoyaleBattleItemRow*>(*)())((::PBYTE)hIl2Cpp + KKPKJBBJNAD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeRoyaleBattleItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeRoyaleBattleItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KKPKJBBJNAD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKPKJBBJNAD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKPKJBBJNAD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKPKJBBJNAD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KKPKJBBJNAD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKPKJBBJNAD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KKPKJBBJNAD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeRoyaleBattleItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeRoyaleBattleItemRow*))((::PBYTE)hIl2Cpp + KKPKJBBJNAD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
