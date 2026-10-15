#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingChallengeCarRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CIMBMMEAEKH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC17E20)
#define CIMBMMEAEKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC183F0)
#define CIMBMMEAEKH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC17F90)
#define CIMBMMEAEKH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC17890)
#define CIMBMMEAEKH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC17B20)
#define CIMBMMEAEKH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC18030)
#define CIMBMMEAEKH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC18080)
#define CIMBMMEAEKH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC17E60)
#define CIMBMMEAEKH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC17AC0)
#define CIMBMMEAEKH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC17C90)
#define CIMBMMEAEKH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC17EF0)
#define CIMBMMEAEKH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC17810)

	class CIMBMMEAEKH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingChallengeCarRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingChallengeCarRow*>**)UnitySDK::FromName("", "CIMBMMEAEKH")->GetStaticField(0x430C0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CIMBMMEAEKH")->GetStaticField(0x430C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CIMBMMEAEKH")->GetStaticField(0x430D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CIMBMMEAEKH")->GetStaticField(0x10260);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CIMBMMEAEKH")->GetStaticField(0x10261);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIMBMMEAEKH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingChallengeCarRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingChallengeCarRow*>*(*)())((::PBYTE)hIl2Cpp + CIMBMMEAEKH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CIMBMMEAEKH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingChallengeCarRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingChallengeCarRow*>(*)())((::PBYTE)hIl2Cpp + CIMBMMEAEKH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingChallengeCarRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingChallengeCarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CIMBMMEAEKH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CIMBMMEAEKH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIMBMMEAEKH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIMBMMEAEKH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CIMBMMEAEKH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CIMBMMEAEKH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CIMBMMEAEKH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingChallengeCarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingChallengeCarRow*))((::PBYTE)hIl2Cpp + CIMBMMEAEKH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
