#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PlanetFesSummaryNominateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesSummaryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKCLONGGBNE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D06CA90)
#define KKCLONGGBNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D06D060)
#define KKCLONGGBNE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D06CC00)
#define KKCLONGGBNE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D06C500)
#define KKCLONGGBNE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D06C790)
#define KKCLONGGBNE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D06CCA0)
#define KKCLONGGBNE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D06CCF0)
#define KKCLONGGBNE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D06CAD0)
#define KKCLONGGBNE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D06C730)
#define KKCLONGGBNE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D06C900)
#define KKCLONGGBNE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D06CB60)
#define KKCLONGGBNE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D06C480)

inline static constexpr unsigned int KKCLONGGBNE_TypeDefinitionIndex = 12279;

	class KKCLONGGBNE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KKCLONGGBNE")->GetStaticField(0x34D80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>**)UnitySDK::FromName("", "KKCLONGGBNE")->GetStaticField(0x34D88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KKCLONGGBNE")->GetStaticField(0x34D90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KKCLONGGBNE")->GetStaticField(0xAB20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KKCLONGGBNE")->GetStaticField(0xAB21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKCLONGGBNE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>*(*)())((::PBYTE)hIl2Cpp + KKCLONGGBNE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKCLONGGBNE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>(*)())((::PBYTE)hIl2Cpp + KKCLONGGBNE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesSummaryRow* LMBKNCAIDLC(::RPG::GameCore::PlanetFesSummaryNominateType a1)
		{
			return ((::RPG::GameCore::PlanetFesSummaryRow*(*)(::RPG::GameCore::PlanetFesSummaryNominateType))((::PBYTE)hIl2Cpp + KKCLONGGBNE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKCLONGGBNE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKCLONGGBNE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKCLONGGBNE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KKCLONGGBNE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKCLONGGBNE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KKCLONGGBNE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesSummaryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesSummaryRow*))((::PBYTE)hIl2Cpp + KKCLONGGBNE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
