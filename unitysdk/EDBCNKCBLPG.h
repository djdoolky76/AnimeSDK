#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleAvatarPromotionConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDBCNKCBLPG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD70430)
#define EDBCNKCBLPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD709B0)
#define EDBCNKCBLPG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD705A0)
#define EDBCNKCBLPG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD6FEE0)
#define EDBCNKCBLPG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD70170)
#define EDBCNKCBLPG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD70640)
#define EDBCNKCBLPG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD70690)
#define EDBCNKCBLPG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD70470)
#define EDBCNKCBLPG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD70110)
#define EDBCNKCBLPG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD702A0)
#define EDBCNKCBLPG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD70500)
#define EDBCNKCBLPG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD6FE60)

	class EDBCNKCBLPG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EDBCNKCBLPG")->GetStaticField(0x538C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>**)UnitySDK::FromName("", "EDBCNKCBLPG")->GetStaticField(0x538C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EDBCNKCBLPG")->GetStaticField(0x538D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EDBCNKCBLPG")->GetStaticField(0x12860);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EDBCNKCBLPG")->GetStaticField(0x12861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDBCNKCBLPG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EDBCNKCBLPG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDBCNKCBLPG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*>(*)())((::PBYTE)hIl2Cpp + EDBCNKCBLPG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILBattleAvatarPromotionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ILBattleAvatarPromotionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EDBCNKCBLPG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDBCNKCBLPG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDBCNKCBLPG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDBCNKCBLPG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EDBCNKCBLPG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDBCNKCBLPG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EDBCNKCBLPG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILBattleAvatarPromotionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILBattleAvatarPromotionConfigRow*))((::PBYTE)hIl2Cpp + EDBCNKCBLPG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
