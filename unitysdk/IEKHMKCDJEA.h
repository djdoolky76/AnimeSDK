#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeActivityConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEKHMKCDJEA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEEC950)
#define IEKHMKCDJEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEECF20)
#define IEKHMKCDJEA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEECAC0)
#define IEKHMKCDJEA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEEC3C0)
#define IEKHMKCDJEA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEEC650)
#define IEKHMKCDJEA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEECB60)
#define IEKHMKCDJEA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEECBB0)
#define IEKHMKCDJEA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEEC990)
#define IEKHMKCDJEA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEEC5F0)
#define IEKHMKCDJEA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEEC7C0)
#define IEKHMKCDJEA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEECA20)
#define IEKHMKCDJEA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEEC340)

inline static constexpr unsigned int IEKHMKCDJEA_TypeDefinitionIndex = 12947;

	class IEKHMKCDJEA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IEKHMKCDJEA")->GetStaticField(0x21700);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IEKHMKCDJEA")->GetStaticField(0x21708);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>**)UnitySDK::FromName("", "IEKHMKCDJEA")->GetStaticField(0x21710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IEKHMKCDJEA")->GetStaticField(0x7970);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IEKHMKCDJEA")->GetStaticField(0x7971);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEKHMKCDJEA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IEKHMKCDJEA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEKHMKCDJEA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>(*)())((::PBYTE)hIl2Cpp + IEKHMKCDJEA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeActivityConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengeActivityConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IEKHMKCDJEA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEKHMKCDJEA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEKHMKCDJEA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEKHMKCDJEA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IEKHMKCDJEA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IEKHMKCDJEA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IEKHMKCDJEA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengeActivityConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeActivityConfigRow*))((::PBYTE)hIl2Cpp + IEKHMKCDJEA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
