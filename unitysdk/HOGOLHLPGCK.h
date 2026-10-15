#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterGuideSkillTextConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOGOLHLPGCK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CECF440)
#define HOGOLHLPGCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CECF9C0)
#define HOGOLHLPGCK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CECF5B0)
#define HOGOLHLPGCK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CECEEF0)
#define HOGOLHLPGCK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CECF180)
#define HOGOLHLPGCK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CECF650)
#define HOGOLHLPGCK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CECF6A0)
#define HOGOLHLPGCK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CECF480)
#define HOGOLHLPGCK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CECF120)
#define HOGOLHLPGCK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CECF2F0)
#define HOGOLHLPGCK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CECF510)
#define HOGOLHLPGCK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CECEE70)

inline static constexpr unsigned int HOGOLHLPGCK_TypeDefinitionIndex = 14207;

	class HOGOLHLPGCK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HOGOLHLPGCK")->GetStaticField(0x201A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HOGOLHLPGCK")->GetStaticField(0x201A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillTextConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillTextConfigRow*>**)UnitySDK::FromName("", "HOGOLHLPGCK")->GetStaticField(0x201B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HOGOLHLPGCK")->GetStaticField(0x7540);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HOGOLHLPGCK")->GetStaticField(0x7541);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOGOLHLPGCK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillTextConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillTextConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HOGOLHLPGCK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOGOLHLPGCK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillTextConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideSkillTextConfigRow*>(*)())((::PBYTE)hIl2Cpp + HOGOLHLPGCK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonsterGuideSkillTextConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterGuideSkillTextConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HOGOLHLPGCK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOGOLHLPGCK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOGOLHLPGCK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOGOLHLPGCK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOGOLHLPGCK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOGOLHLPGCK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HOGOLHLPGCK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonsterGuideSkillTextConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterGuideSkillTextConfigRow*))((::PBYTE)hIl2Cpp + HOGOLHLPGCK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
