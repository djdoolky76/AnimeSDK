#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DHAPPCLCHEJ;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAPAKLKPBLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC9FBA0)
#define DAPAKLKPBLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCA0120)
#define DAPAKLKPBLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC9FD10)
#define DAPAKLKPBLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC9F650)
#define DAPAKLKPBLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC9F8E0)
#define DAPAKLKPBLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC9FDB0)
#define DAPAKLKPBLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC9FE00)
#define DAPAKLKPBLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC9FBE0)
#define DAPAKLKPBLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC9F880)
#define DAPAKLKPBLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC9FA50)
#define DAPAKLKPBLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC9FC70)
#define DAPAKLKPBLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC9F5D0)

inline static constexpr unsigned int DAPAKLKPBLD_TypeDefinitionIndex = 12943;

	class DAPAKLKPBLD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0x40D10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0x40D18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DHAPPCLCHEJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DHAPPCLCHEJ*>**)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0x40D20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0xF730);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DAPAKLKPBLD")->GetStaticField(0xF731);
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
