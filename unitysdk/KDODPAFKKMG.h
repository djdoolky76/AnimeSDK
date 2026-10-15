#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingSkillRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDODPAFKKMG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D086100)
#define KDODPAFKKMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0866D0)
#define KDODPAFKKMG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D086270)
#define KDODPAFKKMG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D085B70)
#define KDODPAFKKMG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D085E00)
#define KDODPAFKKMG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D086310)
#define KDODPAFKKMG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D086360)
#define KDODPAFKKMG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D086140)
#define KDODPAFKKMG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D085DA0)
#define KDODPAFKKMG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D085F70)
#define KDODPAFKKMG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0861D0)
#define KDODPAFKKMG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D085AF0)

	class KDODPAFKKMG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillRow*>**)UnitySDK::FromName("", "KDODPAFKKMG")->GetStaticField(0x34160);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KDODPAFKKMG")->GetStaticField(0x34168);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDODPAFKKMG")->GetStaticField(0x34170);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDODPAFKKMG")->GetStaticField(0xAF40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDODPAFKKMG")->GetStaticField(0xAF41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDODPAFKKMG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillRow*>*(*)())((::PBYTE)hIl2Cpp + KDODPAFKKMG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDODPAFKKMG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillRow*>(*)())((::PBYTE)hIl2Cpp + KDODPAFKKMG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingSkillRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KDODPAFKKMG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDODPAFKKMG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDODPAFKKMG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDODPAFKKMG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KDODPAFKKMG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDODPAFKKMG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KDODPAFKKMG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingSkillRow*))((::PBYTE)hIl2Cpp + KDODPAFKKMG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
