#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBPODLFHCBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE29A00)
#define GBPODLFHCBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE29F80)
#define GBPODLFHCBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE29B70)
#define GBPODLFHCBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE294B0)
#define GBPODLFHCBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE29740)
#define GBPODLFHCBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE29C10)
#define GBPODLFHCBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE29C60)
#define GBPODLFHCBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE29A40)
#define GBPODLFHCBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE296E0)
#define GBPODLFHCBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE298B0)
#define GBPODLFHCBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE29AD0)
#define GBPODLFHCBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE29430)

inline static constexpr unsigned int GBPODLFHCBI_TypeDefinitionIndex = 12974;

	class GBPODLFHCBI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GBPODLFHCBI")->GetStaticField(0x16760);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>**)UnitySDK::FromName("", "GBPODLFHCBI")->GetStaticField(0x16768);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GBPODLFHCBI")->GetStaticField(0x16770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GBPODLFHCBI")->GetStaticField(0x54D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBPODLFHCBI")->GetStaticField(0x54D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPODLFHCBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GBPODLFHCBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBPODLFHCBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeTargetConfigRow*>(*)())((::PBYTE)hIl2Cpp + GBPODLFHCBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeTargetConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengeTargetConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GBPODLFHCBI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBPODLFHCBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPODLFHCBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPODLFHCBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GBPODLFHCBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBPODLFHCBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GBPODLFHCBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + GBPODLFHCBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
