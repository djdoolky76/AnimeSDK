#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitGameRefConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGIPPDEEFGK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCBECC0)
#define AGIPPDEEFGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBF290)
#define AGIPPDEEFGK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCBEE30)
#define AGIPPDEEFGK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCBE730)
#define AGIPPDEEFGK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCBE9C0)
#define AGIPPDEEFGK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCBEED0)
#define AGIPPDEEFGK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCBEF20)
#define AGIPPDEEFGK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCBED00)
#define AGIPPDEEFGK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCBE960)
#define AGIPPDEEFGK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCBEB30)
#define AGIPPDEEFGK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCBED90)
#define AGIPPDEEFGK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCBE6B0)

inline static constexpr unsigned int AGIPPDEEFGK_TypeDefinitionIndex = 13698;

	class AGIPPDEEFGK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>**)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0x38450);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0x38458);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0x38460);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0xC050);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGIPPDEEFGK")->GetStaticField(0xC051);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitGameRefConfigRow*>(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitGameRefConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitGameRefConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGIPPDEEFGK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitGameRefConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitGameRefConfigRow*))((::PBYTE)hIl2Cpp + AGIPPDEEFGK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
