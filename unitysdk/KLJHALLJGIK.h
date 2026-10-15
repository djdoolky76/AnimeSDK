#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2ChallengerRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLJHALLJGIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0A8CD0)
#define KLJHALLJGIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A9250)
#define KLJHALLJGIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0A8E40)
#define KLJHALLJGIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0A87C0)
#define KLJHALLJGIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0A8A50)
#define KLJHALLJGIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0A8EE0)
#define KLJHALLJGIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0A8F30)
#define KLJHALLJGIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0A8D10)
#define KLJHALLJGIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0A89F0)
#define KLJHALLJGIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0A8B80)
#define KLJHALLJGIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0A8DA0)
#define KLJHALLJGIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0A8740)

inline static constexpr unsigned int KLJHALLJGIK_TypeDefinitionIndex = 11945;

	class KLJHALLJGIK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLJHALLJGIK")->GetStaticField(0x377D0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KLJHALLJGIK")->GetStaticField(0x377D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>**)UnitySDK::FromName("", "KLJHALLJGIK")->GetStaticField(0x377E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLJHALLJGIK")->GetStaticField(0xBD00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLJHALLJGIK")->GetStaticField(0xBD01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJHALLJGIK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>*(*)())((::PBYTE)hIl2Cpp + KLJHALLJGIK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLJHALLJGIK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>(*)())((::PBYTE)hIl2Cpp + KLJHALLJGIK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2ChallengerRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2ChallengerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KLJHALLJGIK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLJHALLJGIK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJHALLJGIK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJHALLJGIK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLJHALLJGIK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLJHALLJGIK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLJHALLJGIK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2ChallengerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2ChallengerRow*))((::PBYTE)hIl2Cpp + KLJHALLJGIK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
