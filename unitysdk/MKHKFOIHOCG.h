#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFinalityBattleRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKHKFOIHOCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1BB010)
#define MKHKFOIHOCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1BB590)
#define MKHKFOIHOCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1BB180)
#define MKHKFOIHOCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1BAAC0)
#define MKHKFOIHOCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1BAD50)
#define MKHKFOIHOCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1BB220)
#define MKHKFOIHOCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1BB270)
#define MKHKFOIHOCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1BB050)
#define MKHKFOIHOCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1BACF0)
#define MKHKFOIHOCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1BAE80)
#define MKHKFOIHOCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1BB0E0)
#define MKHKFOIHOCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1BAA40)

inline static constexpr unsigned int MKHKFOIHOCG_TypeDefinitionIndex = 11605;

	class MKHKFOIHOCG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MKHKFOIHOCG")->GetStaticField(0x4DEF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MKHKFOIHOCG")->GetStaticField(0x4DEF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRow*>**)UnitySDK::FromName("", "MKHKFOIHOCG")->GetStaticField(0x4DF00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MKHKFOIHOCG")->GetStaticField(0x11F00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MKHKFOIHOCG")->GetStaticField(0x11F01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKHKFOIHOCG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRow*>*(*)())((::PBYTE)hIl2Cpp + MKHKFOIHOCG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKHKFOIHOCG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRow*>(*)())((::PBYTE)hIl2Cpp + MKHKFOIHOCG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFinalityBattleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFinalityBattleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MKHKFOIHOCG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKHKFOIHOCG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKHKFOIHOCG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKHKFOIHOCG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MKHKFOIHOCG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MKHKFOIHOCG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MKHKFOIHOCG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityFinalityBattleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFinalityBattleRow*))((::PBYTE)hIl2Cpp + MKHKFOIHOCG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
