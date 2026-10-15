#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingSkillTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOHENJEEKGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D27BE00)
#define OOHENJEEKGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D27C3D0)
#define OOHENJEEKGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D27BF70)
#define OOHENJEEKGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D27B870)
#define OOHENJEEKGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D27BB00)
#define OOHENJEEKGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D27C010)
#define OOHENJEEKGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D27C060)
#define OOHENJEEKGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D27BE40)
#define OOHENJEEKGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D27BAA0)
#define OOHENJEEKGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D27BC70)
#define OOHENJEEKGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D27BED0)
#define OOHENJEEKGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D27B7F0)

inline static constexpr unsigned int OOHENJEEKGM_TypeDefinitionIndex = 12444;

	class OOHENJEEKGM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0x4A760);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>**)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0x4A768);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0x4A770);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0x11260);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOHENJEEKGM")->GetStaticField(0x11261);
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
