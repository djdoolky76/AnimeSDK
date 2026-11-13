#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFinalityBattleLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHGIJEODCCC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E5A5A30)
#define JHGIJEODCCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A5FB0)
#define JHGIJEODCCC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E5A5BA0)
#define JHGIJEODCCC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E5A54E0)
#define JHGIJEODCCC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E5A5770)
#define JHGIJEODCCC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E5A5C40)
#define JHGIJEODCCC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E5A5C90)
#define JHGIJEODCCC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E5A5A70)
#define JHGIJEODCCC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E5A5710)
#define JHGIJEODCCC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E5A58A0)
#define JHGIJEODCCC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E5A5B00)
#define JHGIJEODCCC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E5A5460)

inline static constexpr unsigned int JHGIJEODCCC_TypeDefinitionIndex = 11661;

	class JHGIJEODCCC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JHGIJEODCCC")->GetStaticField(0x34F70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JHGIJEODCCC")->GetStaticField(0x34F78);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleLevelRow*>**)UnitySDK::FromName("", "JHGIJEODCCC")->GetStaticField(0x34F80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JHGIJEODCCC")->GetStaticField(0xA510);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JHGIJEODCCC")->GetStaticField(0xA511);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHGIJEODCCC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleLevelRow*>*(*)())((::PBYTE)hIl2Cpp + JHGIJEODCCC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHGIJEODCCC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleLevelRow*>(*)())((::PBYTE)hIl2Cpp + JHGIJEODCCC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFinalityBattleLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFinalityBattleLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JHGIJEODCCC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHGIJEODCCC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHGIJEODCCC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHGIJEODCCC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JHGIJEODCCC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JHGIJEODCCC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JHGIJEODCCC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityFinalityBattleLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFinalityBattleLevelRow*))((::PBYTE)hIl2Cpp + JHGIJEODCCC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
