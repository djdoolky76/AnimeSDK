#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAchievementRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGKKNMDHKCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDBFD70)
#define FGKKNMDHKCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDC02F0)
#define FGKKNMDHKCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDBFEE0)
#define FGKKNMDHKCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDBF820)
#define FGKKNMDHKCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDBFAB0)
#define FGKKNMDHKCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDBFF80)
#define FGKKNMDHKCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDBFFD0)
#define FGKKNMDHKCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDBFDB0)
#define FGKKNMDHKCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDBFA50)
#define FGKKNMDHKCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDBFC20)
#define FGKKNMDHKCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDBFE40)
#define FGKKNMDHKCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDBF7A0)

inline static constexpr unsigned int FGKKNMDHKCG_TypeDefinitionIndex = 12883;

	class FGKKNMDHKCG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FGKKNMDHKCG")->GetStaticField(0x11630);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FGKKNMDHKCG")->GetStaticField(0x11638);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>**)UnitySDK::FromName("", "FGKKNMDHKCG")->GetStaticField(0x11640);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FGKKNMDHKCG")->GetStaticField(0x3890);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FGKKNMDHKCG")->GetStaticField(0x3891);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGKKNMDHKCG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>*(*)())((::PBYTE)hIl2Cpp + FGKKNMDHKCG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGKKNMDHKCG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>(*)())((::PBYTE)hIl2Cpp + FGKKNMDHKCG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleAchievementRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleAchievementRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FGKKNMDHKCG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGKKNMDHKCG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGKKNMDHKCG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGKKNMDHKCG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FGKKNMDHKCG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGKKNMDHKCG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FGKKNMDHKCG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleAchievementRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleAchievementRow*))((::PBYTE)hIl2Cpp + FGKKNMDHKCG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
