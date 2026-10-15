#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournPermanentTalentRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKOIEIPNEIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D045300)
#define JKOIEIPNEIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D045880)
#define JKOIEIPNEIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D045470)
#define JKOIEIPNEIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D044DB0)
#define JKOIEIPNEIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D045040)
#define JKOIEIPNEIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D045510)
#define JKOIEIPNEIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D045560)
#define JKOIEIPNEIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D045340)
#define JKOIEIPNEIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D044FE0)
#define JKOIEIPNEIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0451B0)
#define JKOIEIPNEIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0453D0)
#define JKOIEIPNEIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D044D30)

inline static constexpr unsigned int JKOIEIPNEIK_TypeDefinitionIndex = 14984;

	class JKOIEIPNEIK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x2F4F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournPermanentTalentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournPermanentTalentRow*>**)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x2F4F8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x2F500);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x9D30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JKOIEIPNEIK")->GetStaticField(0x9D31);
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
