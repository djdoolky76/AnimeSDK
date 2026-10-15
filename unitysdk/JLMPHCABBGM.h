#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleMonsterConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JLMPHCABBGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D047E80)
#define JLMPHCABBGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D048450)
#define JLMPHCABBGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D047FF0)
#define JLMPHCABBGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0478F0)
#define JLMPHCABBGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D047B80)
#define JLMPHCABBGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D048090)
#define JLMPHCABBGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0480E0)
#define JLMPHCABBGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D047EC0)
#define JLMPHCABBGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D047B20)
#define JLMPHCABBGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D047CF0)
#define JLMPHCABBGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D047F50)
#define JLMPHCABBGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D047870)

inline static constexpr unsigned int JLMPHCABBGM_TypeDefinitionIndex = 13794;

	class JLMPHCABBGM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JLMPHCABBGM")->GetStaticField(0x2F630);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JLMPHCABBGM")->GetStaticField(0x2F638);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>**)UnitySDK::FromName("", "JLMPHCABBGM")->GetStaticField(0x2F640);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JLMPHCABBGM")->GetStaticField(0x9D90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JLMPHCABBGM")->GetStaticField(0x9D91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLMPHCABBGM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JLMPHCABBGM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JLMPHCABBGM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleMonsterConfigRow*>(*)())((::PBYTE)hIl2Cpp + JLMPHCABBGM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILBattleMonsterConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ILBattleMonsterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JLMPHCABBGM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JLMPHCABBGM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLMPHCABBGM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLMPHCABBGM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JLMPHCABBGM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLMPHCABBGM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JLMPHCABBGM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILBattleMonsterConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILBattleMonsterConfigRow*))((::PBYTE)hIl2Cpp + JLMPHCABBGM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
