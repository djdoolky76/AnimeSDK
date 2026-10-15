#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonEnemyConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGCMEDMGCGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCBA950)
#define AGCMEDMGCGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBAF20)
#define AGCMEDMGCGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCBAAC0)
#define AGCMEDMGCGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCBA3C0)
#define AGCMEDMGCGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCBA650)
#define AGCMEDMGCGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCBAB60)
#define AGCMEDMGCGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCBABB0)
#define AGCMEDMGCGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCBA990)
#define AGCMEDMGCGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCBA5F0)
#define AGCMEDMGCGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCBA7C0)
#define AGCMEDMGCGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCBAA20)
#define AGCMEDMGCGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCBA340)

inline static constexpr unsigned int AGCMEDMGCGM_TypeDefinitionIndex = 12533;

	class AGCMEDMGCGM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AGCMEDMGCGM")->GetStaticField(0x37EF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGCMEDMGCGM")->GetStaticField(0x37EF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonEnemyConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonEnemyConfigRow*>**)UnitySDK::FromName("", "AGCMEDMGCGM")->GetStaticField(0x37F00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGCMEDMGCGM")->GetStaticField(0xBE90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGCMEDMGCGM")->GetStaticField(0xBE91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGCMEDMGCGM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonEnemyConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonEnemyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AGCMEDMGCGM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGCMEDMGCGM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonEnemyConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonEnemyConfigRow*>(*)())((::PBYTE)hIl2Cpp + AGCMEDMGCGM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonEnemyConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TreasureDungeonEnemyConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AGCMEDMGCGM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGCMEDMGCGM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGCMEDMGCGM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGCMEDMGCGM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGCMEDMGCGM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGCMEDMGCGM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGCMEDMGCGM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TreasureDungeonEnemyConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonEnemyConfigRow*))((::PBYTE)hIl2Cpp + AGCMEDMGCGM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
