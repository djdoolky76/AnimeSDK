#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingSkillTypeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOHENJEEKGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2A9A00)
#define OOHENJEEKGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A9FD0)
#define OOHENJEEKGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2A9B70)
#define OOHENJEEKGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2A9470)
#define OOHENJEEKGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2A9700)
#define OOHENJEEKGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2A9C10)
#define OOHENJEEKGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2A9C60)
#define OOHENJEEKGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2A9A40)
#define OOHENJEEKGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2A96A0)
#define OOHENJEEKGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2A9870)
#define OOHENJEEKGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2A9AD0)
#define OOHENJEEKGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2A93F0)

	class OOHENJEEKGM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0x3AD80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>**)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0x3AD88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0x3AD90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0xC8A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0xC8A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOHENJEEKGM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>*(*)())((::PBYTE)hIl2Cpp + OOHENJEEKGM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOHENJEEKGM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>(*)())((::PBYTE)hIl2Cpp + OOHENJEEKGM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingSkillTypeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingSkillTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OOHENJEEKGM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOHENJEEKGM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOHENJEEKGM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOHENJEEKGM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OOHENJEEKGM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHENJEEKGM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OOHENJEEKGM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingSkillTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingSkillTypeRow*))((::PBYTE)hIl2Cpp + OOHENJEEKGM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
