#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGameBoyChallengeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCGPKDBHLLJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D10EFF0)
#define MCGPKDBHLLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D10F5C0)
#define MCGPKDBHLLJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D10F160)
#define MCGPKDBHLLJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D10EA60)
#define MCGPKDBHLLJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D10ECF0)
#define MCGPKDBHLLJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D10F200)
#define MCGPKDBHLLJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D10F250)
#define MCGPKDBHLLJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D10F030)
#define MCGPKDBHLLJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D10EC90)
#define MCGPKDBHLLJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D10EE60)
#define MCGPKDBHLLJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D10F0C0)
#define MCGPKDBHLLJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D10E9E0)

inline static constexpr unsigned int MCGPKDBHLLJ_TypeDefinitionIndex = 14102;

	class MCGPKDBHLLJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>**)UnitySDK::FromName("", "MCGPKDBHLLJ")->GetStaticField(0x40DD0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MCGPKDBHLLJ")->GetStaticField(0x40DD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MCGPKDBHLLJ")->GetStaticField(0x40DE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MCGPKDBHLLJ")->GetStaticField(0xF770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MCGPKDBHLLJ")->GetStaticField(0xF771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>*(*)())((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>(*)())((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingGameBoyChallengeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingGameBoyChallengeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingGameBoyChallengeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingGameBoyChallengeRow*))((::PBYTE)hIl2Cpp + MCGPKDBHLLJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
