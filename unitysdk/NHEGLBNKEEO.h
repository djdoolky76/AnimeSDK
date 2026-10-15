#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenGameGradeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHEGLBNKEEO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D20B870)
#define NHEGLBNKEEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20BE40)
#define NHEGLBNKEEO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D20B9E0)
#define NHEGLBNKEEO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D20B2E0)
#define NHEGLBNKEEO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D20B570)
#define NHEGLBNKEEO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D20BA80)
#define NHEGLBNKEEO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D20BAD0)
#define NHEGLBNKEEO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D20B8B0)
#define NHEGLBNKEEO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D20B510)
#define NHEGLBNKEEO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D20B6E0)
#define NHEGLBNKEEO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D20B940)
#define NHEGLBNKEEO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D20B260)

inline static constexpr unsigned int NHEGLBNKEEO_TypeDefinitionIndex = 11646;

	class NHEGLBNKEEO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>**)UnitySDK::FromName("", "NHEGLBNKEEO")->GetStaticField(0x2E6B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NHEGLBNKEEO")->GetStaticField(0x2E6B8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NHEGLBNKEEO")->GetStaticField(0x2E6C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NHEGLBNKEEO")->GetStaticField(0x9920);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NHEGLBNKEEO")->GetStaticField(0x9921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHEGLBNKEEO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>*(*)())((::PBYTE)hIl2Cpp + NHEGLBNKEEO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHEGLBNKEEO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>(*)())((::PBYTE)hIl2Cpp + NHEGLBNKEEO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenGameGradeRow* LMBKNCAIDLC(::RPG::GameCore::HipplenGameGradeType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenGameGradeRow*(*)(::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + NHEGLBNKEEO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHEGLBNKEEO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHEGLBNKEEO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHEGLBNKEEO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NHEGLBNKEEO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NHEGLBNKEEO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NHEGLBNKEEO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenGameGradeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenGameGradeRow*))((::PBYTE)hIl2Cpp + NHEGLBNKEEO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
