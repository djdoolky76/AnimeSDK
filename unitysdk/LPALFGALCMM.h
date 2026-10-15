#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeStoryThemeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPALFGALCMM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F6490)
#define LPALFGALCMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F6A10)
#define LPALFGALCMM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F6600)
#define LPALFGALCMM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F5F40)
#define LPALFGALCMM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F61D0)
#define LPALFGALCMM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F66A0)
#define LPALFGALCMM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F66F0)
#define LPALFGALCMM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F64D0)
#define LPALFGALCMM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F6170)
#define LPALFGALCMM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F6340)
#define LPALFGALCMM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F6560)
#define LPALFGALCMM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F5EC0)

inline static constexpr unsigned int LPALFGALCMM_TypeDefinitionIndex = 12998;

	class LPALFGALCMM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LPALFGALCMM")->GetStaticField(0x3F720);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LPALFGALCMM")->GetStaticField(0x3F728);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryThemeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryThemeConfigRow*>**)UnitySDK::FromName("", "LPALFGALCMM")->GetStaticField(0x3F730);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LPALFGALCMM")->GetStaticField(0xF000);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LPALFGALCMM")->GetStaticField(0xF001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPALFGALCMM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryThemeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryThemeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LPALFGALCMM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPALFGALCMM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryThemeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryThemeConfigRow*>(*)())((::PBYTE)hIl2Cpp + LPALFGALCMM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeStoryThemeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengeStoryThemeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LPALFGALCMM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPALFGALCMM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPALFGALCMM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPALFGALCMM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LPALFGALCMM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPALFGALCMM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LPALFGALCMM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengeStoryThemeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeStoryThemeConfigRow*))((::PBYTE)hIl2Cpp + LPALFGALCMM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
