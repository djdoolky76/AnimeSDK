#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingConquerLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGIIMOCLBCL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDBF0D0)
#define FGIIMOCLBCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDBF650)
#define FGIIMOCLBCL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDBF240)
#define FGIIMOCLBCL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDBEBC0)
#define FGIIMOCLBCL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDBEE50)
#define FGIIMOCLBCL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDBF2E0)
#define FGIIMOCLBCL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDBF330)
#define FGIIMOCLBCL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDBF110)
#define FGIIMOCLBCL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDBEDF0)
#define FGIIMOCLBCL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDBEF80)
#define FGIIMOCLBCL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDBF1A0)
#define FGIIMOCLBCL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDBEB40)

inline static constexpr unsigned int FGIIMOCLBCL_TypeDefinitionIndex = 11089;

	class FGIIMOCLBCL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FGIIMOCLBCL")->GetStaticField(0x115C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConquerLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConquerLevelRow*>**)UnitySDK::FromName("", "FGIIMOCLBCL")->GetStaticField(0x115C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FGIIMOCLBCL")->GetStaticField(0x115D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FGIIMOCLBCL")->GetStaticField(0x3870);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FGIIMOCLBCL")->GetStaticField(0x3871);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGIIMOCLBCL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConquerLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConquerLevelRow*>*(*)())((::PBYTE)hIl2Cpp + FGIIMOCLBCL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGIIMOCLBCL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConquerLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConquerLevelRow*>(*)())((::PBYTE)hIl2Cpp + FGIIMOCLBCL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingConquerLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingConquerLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FGIIMOCLBCL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGIIMOCLBCL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGIIMOCLBCL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGIIMOCLBCL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FGIIMOCLBCL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGIIMOCLBCL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FGIIMOCLBCL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingConquerLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingConquerLevelRow*))((::PBYTE)hIl2Cpp + FGIIMOCLBCL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
