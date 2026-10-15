#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBuffDescOverrideRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHNCFJKGHCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC13620)
#define CHNCFJKGHCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC13BF0)
#define CHNCFJKGHCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC13790)
#define CHNCFJKGHCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC13090)
#define CHNCFJKGHCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC13320)
#define CHNCFJKGHCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC13830)
#define CHNCFJKGHCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC13880)
#define CHNCFJKGHCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC13660)
#define CHNCFJKGHCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC132C0)
#define CHNCFJKGHCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC13490)
#define CHNCFJKGHCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC136F0)
#define CHNCFJKGHCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC13010)

inline static constexpr unsigned int CHNCFJKGHCG_TypeDefinitionIndex = 12281;

	class CHNCFJKGHCG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0x42F70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>**)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0x42F78);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0x42F80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0x101F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0x101F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHNCFJKGHCG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + CHNCFJKGHCG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHNCFJKGHCG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>(*)())((::PBYTE)hIl2Cpp + CHNCFJKGHCG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesBuffDescOverrideRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesBuffDescOverrideRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CHNCFJKGHCG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHNCFJKGHCG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHNCFJKGHCG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHNCFJKGHCG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CHNCFJKGHCG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHNCFJKGHCG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CHNCFJKGHCG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesBuffDescOverrideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesBuffDescOverrideRow*))((::PBYTE)hIl2Cpp + CHNCFJKGHCG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
