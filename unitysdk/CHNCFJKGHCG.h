#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBuffDescOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHNCFJKGHCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DBE5D70)
#define CHNCFJKGHCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBE6340)
#define CHNCFJKGHCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DBE5EE0)
#define CHNCFJKGHCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DBE57E0)
#define CHNCFJKGHCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DBE5A70)
#define CHNCFJKGHCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DBE5F80)
#define CHNCFJKGHCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DBE5FD0)
#define CHNCFJKGHCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DBE5DB0)
#define CHNCFJKGHCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DBE5A10)
#define CHNCFJKGHCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DBE5BE0)
#define CHNCFJKGHCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DBE5E40)
#define CHNCFJKGHCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DBE5760)

inline static constexpr unsigned int CHNCFJKGHCG_TypeDefinitionIndex = 12281;

	class CHNCFJKGHCG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>**)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0x3D040);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0x3D048);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0x3D050);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0xC360);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CHNCFJKGHCG")->GetStaticField(0xC361);
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
