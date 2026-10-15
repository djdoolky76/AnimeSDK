#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DHAPPCLCHEJ;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAPAKLKPBLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCCD410)
#define DAPAKLKPBLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCCD990)
#define DAPAKLKPBLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCCD580)
#define DAPAKLKPBLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCCCEC0)
#define DAPAKLKPBLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCCD150)
#define DAPAKLKPBLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCCD620)
#define DAPAKLKPBLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCCD670)
#define DAPAKLKPBLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCCD450)
#define DAPAKLKPBLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCCD0F0)
#define DAPAKLKPBLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCCD2C0)
#define DAPAKLKPBLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCCD4E0)
#define DAPAKLKPBLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCCCE40)

	class DAPAKLKPBLD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0x46DF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0x46DF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DHAPPCLCHEJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DHAPPCLCHEJ*>**)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0x46E00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0x10E60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0x10E61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAPAKLKPBLD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DHAPPCLCHEJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DHAPPCLCHEJ*>*(*)())((::PBYTE)hIl2Cpp + DAPAKLKPBLD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAPAKLKPBLD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DHAPPCLCHEJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DHAPPCLCHEJ*>(*)())((::PBYTE)hIl2Cpp + DAPAKLKPBLD_FPHGMAMDFHE_OFFSET))();
		}

		static ::DHAPPCLCHEJ* LMBKNCAIDLC(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::DHAPPCLCHEJ*(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + DAPAKLKPBLD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAPAKLKPBLD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAPAKLKPBLD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAPAKLKPBLD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DAPAKLKPBLD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAPAKLKPBLD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DAPAKLKPBLD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DHAPPCLCHEJ* a1)
		{
			return ((::System::Void(*)(::DHAPPCLCHEJ*))((::PBYTE)hIl2Cpp + DAPAKLKPBLD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
