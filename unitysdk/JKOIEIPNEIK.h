#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournPermanentTalentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKOIEIPNEIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D017300)
#define JKOIEIPNEIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D017880)
#define JKOIEIPNEIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D017470)
#define JKOIEIPNEIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D016DB0)
#define JKOIEIPNEIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D017040)
#define JKOIEIPNEIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D017510)
#define JKOIEIPNEIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D017560)
#define JKOIEIPNEIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D017340)
#define JKOIEIPNEIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D016FE0)
#define JKOIEIPNEIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0171B0)
#define JKOIEIPNEIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0173D0)
#define JKOIEIPNEIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D016D30)

inline static constexpr unsigned int JKOIEIPNEIK_TypeDefinitionIndex = 14984;

	class JKOIEIPNEIK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournPermanentTalentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournPermanentTalentRow*>**)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x2F600);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x2F608);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x2F610);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x9BF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x9BF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKOIEIPNEIK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournPermanentTalentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournPermanentTalentRow*>*(*)())((::PBYTE)hIl2Cpp + JKOIEIPNEIK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKOIEIPNEIK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournPermanentTalentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournPermanentTalentRow*>(*)())((::PBYTE)hIl2Cpp + JKOIEIPNEIK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournPermanentTalentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournPermanentTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JKOIEIPNEIK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKOIEIPNEIK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKOIEIPNEIK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKOIEIPNEIK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JKOIEIPNEIK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKOIEIPNEIK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JKOIEIPNEIK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournPermanentTalentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournPermanentTalentRow*))((::PBYTE)hIl2Cpp + JKOIEIPNEIK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
