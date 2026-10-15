#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournWeeklyChallengeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEDKPGIINOI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEE8F20)
#define IEDKPGIINOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE94A0)
#define IEDKPGIINOI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEE9090)
#define IEDKPGIINOI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEE89D0)
#define IEDKPGIINOI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEE8C60)
#define IEDKPGIINOI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEE9130)
#define IEDKPGIINOI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEE9180)
#define IEDKPGIINOI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEE8F60)
#define IEDKPGIINOI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEE8C00)
#define IEDKPGIINOI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEE8DD0)
#define IEDKPGIINOI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEE8FF0)
#define IEDKPGIINOI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEE8950)

inline static constexpr unsigned int IEDKPGIINOI_TypeDefinitionIndex = 14980;

	class IEDKPGIINOI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IEDKPGIINOI")->GetStaticField(0x21530);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyChallengeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyChallengeRow*>**)UnitySDK::FromName("", "IEDKPGIINOI")->GetStaticField(0x21538);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IEDKPGIINOI")->GetStaticField(0x21540);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IEDKPGIINOI")->GetStaticField(0x78B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IEDKPGIINOI")->GetStaticField(0x78B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDKPGIINOI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyChallengeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyChallengeRow*>*(*)())((::PBYTE)hIl2Cpp + IEDKPGIINOI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEDKPGIINOI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyChallengeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyChallengeRow*>(*)())((::PBYTE)hIl2Cpp + IEDKPGIINOI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournWeeklyChallengeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournWeeklyChallengeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IEDKPGIINOI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEDKPGIINOI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDKPGIINOI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDKPGIINOI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IEDKPGIINOI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IEDKPGIINOI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IEDKPGIINOI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournWeeklyChallengeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournWeeklyChallengeRow*))((::PBYTE)hIl2Cpp + IEDKPGIINOI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
