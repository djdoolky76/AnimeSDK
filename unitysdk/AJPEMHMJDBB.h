#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleMonsterSkillConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJPEMHMJDBB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCD1090)
#define AJPEMHMJDBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD1660)
#define AJPEMHMJDBB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCD1200)
#define AJPEMHMJDBB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCD0B00)
#define AJPEMHMJDBB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCD0D90)
#define AJPEMHMJDBB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCD12A0)
#define AJPEMHMJDBB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCD12F0)
#define AJPEMHMJDBB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCD10D0)
#define AJPEMHMJDBB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCD0D30)
#define AJPEMHMJDBB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCD0F00)
#define AJPEMHMJDBB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCD1160)
#define AJPEMHMJDBB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCD0A80)

	class AJPEMHMJDBB : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AJPEMHMJDBB")->GetStaticField(0x39AC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AJPEMHMJDBB")->GetStaticField(0x39AC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*>**)UnitySDK::FromName("", "AJPEMHMJDBB")->GetStaticField(0x39AD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AJPEMHMJDBB")->GetStaticField(0xC4A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AJPEMHMJDBB")->GetStaticField(0xC4A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJPEMHMJDBB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AJPEMHMJDBB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AJPEMHMJDBB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + AJPEMHMJDBB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILBattleMonsterSkillConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ILBattleMonsterSkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AJPEMHMJDBB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AJPEMHMJDBB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJPEMHMJDBB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJPEMHMJDBB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AJPEMHMJDBB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJPEMHMJDBB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AJPEMHMJDBB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILBattleMonsterSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILBattleMonsterSkillConfigRow*))((::PBYTE)hIl2Cpp + AJPEMHMJDBB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
