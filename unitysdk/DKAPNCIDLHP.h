#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/HipplenStatGradeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenPhaseGradeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKAPNCIDLHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD334A0)
#define DKAPNCIDLHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD33A70)
#define DKAPNCIDLHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD33610)
#define DKAPNCIDLHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD32F10)
#define DKAPNCIDLHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD331A0)
#define DKAPNCIDLHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD336B0)
#define DKAPNCIDLHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD33700)
#define DKAPNCIDLHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD334E0)
#define DKAPNCIDLHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD33140)
#define DKAPNCIDLHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD33310)
#define DKAPNCIDLHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD33570)
#define DKAPNCIDLHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD32E90)

inline static constexpr unsigned int DKAPNCIDLHP_TypeDefinitionIndex = 11636;

	class DKAPNCIDLHP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DKAPNCIDLHP")->GetStaticField(0x4DDF0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DKAPNCIDLHP")->GetStaticField(0x4DDF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseGradeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseGradeRow*>**)UnitySDK::FromName("", "DKAPNCIDLHP")->GetStaticField(0x4DE00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DKAPNCIDLHP")->GetStaticField(0x11ED0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DKAPNCIDLHP")->GetStaticField(0x11ED1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKAPNCIDLHP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseGradeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseGradeRow*>*(*)())((::PBYTE)hIl2Cpp + DKAPNCIDLHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKAPNCIDLHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseGradeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenPhaseGradeRow*>(*)())((::PBYTE)hIl2Cpp + DKAPNCIDLHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenPhaseGradeRow* LMBKNCAIDLC(::RPG::GameCore::HipplenStatGradeType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenPhaseGradeRow*(*)(::RPG::GameCore::HipplenStatGradeType))((::PBYTE)hIl2Cpp + DKAPNCIDLHP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKAPNCIDLHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKAPNCIDLHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKAPNCIDLHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DKAPNCIDLHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKAPNCIDLHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DKAPNCIDLHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenPhaseGradeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenPhaseGradeRow*))((::PBYTE)hIl2Cpp + DKAPNCIDLHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
