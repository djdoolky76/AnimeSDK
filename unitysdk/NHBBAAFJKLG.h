#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingExamCommentRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHBBAAFJKLG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D208620)
#define NHBBAAFJKLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D208BF0)
#define NHBBAAFJKLG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D208790)
#define NHBBAAFJKLG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D208090)
#define NHBBAAFJKLG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D208320)
#define NHBBAAFJKLG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D208830)
#define NHBBAAFJKLG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D208880)
#define NHBBAAFJKLG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D208660)
#define NHBBAAFJKLG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2082C0)
#define NHBBAAFJKLG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D208490)
#define NHBBAAFJKLG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2086F0)
#define NHBBAAFJKLG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D208010)

inline static constexpr unsigned int NHBBAAFJKLG_TypeDefinitionIndex = 12453;

	class NHBBAAFJKLG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamCommentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamCommentRow*>**)UnitySDK::FromName("", "NHBBAAFJKLG")->GetStaticField(0x2E480);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NHBBAAFJKLG")->GetStaticField(0x2E488);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NHBBAAFJKLG")->GetStaticField(0x2E490);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NHBBAAFJKLG")->GetStaticField(0x9840);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NHBBAAFJKLG")->GetStaticField(0x9841);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHBBAAFJKLG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamCommentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamCommentRow*>*(*)())((::PBYTE)hIl2Cpp + NHBBAAFJKLG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHBBAAFJKLG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamCommentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamCommentRow*>(*)())((::PBYTE)hIl2Cpp + NHBBAAFJKLG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingExamCommentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingExamCommentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NHBBAAFJKLG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHBBAAFJKLG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHBBAAFJKLG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHBBAAFJKLG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NHBBAAFJKLG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NHBBAAFJKLG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NHBBAAFJKLG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingExamCommentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingExamCommentRow*))((::PBYTE)hIl2Cpp + NHBBAAFJKLG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
