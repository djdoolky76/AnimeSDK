#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityActiveBenefitConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELACHMEOMHK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD988E0)
#define ELACHMEOMHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD98EB0)
#define ELACHMEOMHK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD98A50)
#define ELACHMEOMHK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD98350)
#define ELACHMEOMHK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD985E0)
#define ELACHMEOMHK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD98AF0)
#define ELACHMEOMHK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD98B40)
#define ELACHMEOMHK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD98920)
#define ELACHMEOMHK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD98580)
#define ELACHMEOMHK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD98750)
#define ELACHMEOMHK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD989B0)
#define ELACHMEOMHK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD982D0)

inline static constexpr unsigned int ELACHMEOMHK_TypeDefinitionIndex = 10899;

	class ELACHMEOMHK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>**)UnitySDK::FromName("", "ELACHMEOMHK")->GetStaticField(0x2640);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ELACHMEOMHK")->GetStaticField(0x2648);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ELACHMEOMHK")->GetStaticField(0x2650);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ELACHMEOMHK")->GetStaticField(0x1E30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ELACHMEOMHK")->GetStaticField(0x1E31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELACHMEOMHK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ELACHMEOMHK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELACHMEOMHK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveBenefitConfigRow*>(*)())((::PBYTE)hIl2Cpp + ELACHMEOMHK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityActiveBenefitConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityActiveBenefitConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ELACHMEOMHK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELACHMEOMHK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELACHMEOMHK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELACHMEOMHK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ELACHMEOMHK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELACHMEOMHK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ELACHMEOMHK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityActiveBenefitConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityActiveBenefitConfigRow*))((::PBYTE)hIl2Cpp + ELACHMEOMHK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
