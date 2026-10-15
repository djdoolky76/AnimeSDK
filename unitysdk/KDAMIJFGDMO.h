#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PlanetFesGameType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDAMIJFGDMO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D050090)
#define KDAMIJFGDMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D050610)
#define KDAMIJFGDMO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D050200)
#define KDAMIJFGDMO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D04FB80)
#define KDAMIJFGDMO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D04FE10)
#define KDAMIJFGDMO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0502A0)
#define KDAMIJFGDMO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0502F0)
#define KDAMIJFGDMO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0500D0)
#define KDAMIJFGDMO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D04FDB0)
#define KDAMIJFGDMO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D04FF40)
#define KDAMIJFGDMO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D050160)
#define KDAMIJFGDMO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D04FB00)

inline static constexpr unsigned int KDAMIJFGDMO_TypeDefinitionIndex = 12243;

	class KDAMIJFGDMO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDAMIJFGDMO")->GetStaticField(0x33AF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>**)UnitySDK::FromName("", "KDAMIJFGDMO")->GetStaticField(0x33AF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KDAMIJFGDMO")->GetStaticField(0x33B00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDAMIJFGDMO")->GetStaticField(0xA7E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDAMIJFGDMO")->GetStaticField(0xA7E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDAMIJFGDMO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KDAMIJFGDMO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDAMIJFGDMO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>(*)())((::PBYTE)hIl2Cpp + KDAMIJFGDMO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesGameConfigRow* LMBKNCAIDLC(::RPG::GameCore::PlanetFesGameType a1)
		{
			return ((::RPG::GameCore::PlanetFesGameConfigRow*(*)(::RPG::GameCore::PlanetFesGameType))((::PBYTE)hIl2Cpp + KDAMIJFGDMO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDAMIJFGDMO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDAMIJFGDMO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDAMIJFGDMO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KDAMIJFGDMO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDAMIJFGDMO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KDAMIJFGDMO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesGameConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesGameConfigRow*))((::PBYTE)hIl2Cpp + KDAMIJFGDMO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
