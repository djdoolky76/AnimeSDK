#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PlanetFesEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesEffectTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLNBAPPEFCE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E1DB0)
#define LLNBAPPEFCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E2330)
#define LLNBAPPEFCE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E1F20)
#define LLNBAPPEFCE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E1860)
#define LLNBAPPEFCE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E1AF0)
#define LLNBAPPEFCE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E1FC0)
#define LLNBAPPEFCE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E2010)
#define LLNBAPPEFCE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E1DF0)
#define LLNBAPPEFCE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E1A90)
#define LLNBAPPEFCE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E1C60)
#define LLNBAPPEFCE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E1E80)
#define LLNBAPPEFCE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E17E0)

inline static constexpr unsigned int LLNBAPPEFCE_TypeDefinitionIndex = 12202;

	class LLNBAPPEFCE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LLNBAPPEFCE")->GetStaticField(0x3E250);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LLNBAPPEFCE")->GetStaticField(0x3E258);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>**)UnitySDK::FromName("", "LLNBAPPEFCE")->GetStaticField(0x3E260);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LLNBAPPEFCE")->GetStaticField(0xEA90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LLNBAPPEFCE")->GetStaticField(0xEA91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLNBAPPEFCE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LLNBAPPEFCE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLNBAPPEFCE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + LLNBAPPEFCE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesEffectTypeConfigRow* LMBKNCAIDLC(::RPG::GameCore::PlanetFesEffectType a1)
		{
			return ((::RPG::GameCore::PlanetFesEffectTypeConfigRow*(*)(::RPG::GameCore::PlanetFesEffectType))((::PBYTE)hIl2Cpp + LLNBAPPEFCE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLNBAPPEFCE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLNBAPPEFCE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLNBAPPEFCE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LLNBAPPEFCE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LLNBAPPEFCE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LLNBAPPEFCE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesEffectTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesEffectTypeConfigRow*))((::PBYTE)hIl2Cpp + LLNBAPPEFCE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
