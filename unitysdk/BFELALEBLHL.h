#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGachaAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFELALEBLHL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D671590)
#define BFELALEBLHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D671B60)
#define BFELALEBLHL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D671700)
#define BFELALEBLHL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D671000)
#define BFELALEBLHL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D671290)
#define BFELALEBLHL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D6717A0)
#define BFELALEBLHL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D6717F0)
#define BFELALEBLHL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D6715D0)
#define BFELALEBLHL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D671230)
#define BFELALEBLHL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D671400)
#define BFELALEBLHL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D671660)
#define BFELALEBLHL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D670F80)

inline static constexpr unsigned int BFELALEBLHL_TypeDefinitionIndex = 12217;

	class BFELALEBLHL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BFELALEBLHL")->GetStaticField(0x33CA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaAvatarRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaAvatarRow*>**)UnitySDK::FromName("", "BFELALEBLHL")->GetStaticField(0x33CA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BFELALEBLHL")->GetStaticField(0x33CB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BFELALEBLHL")->GetStaticField(0xAE10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BFELALEBLHL")->GetStaticField(0xAE11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFELALEBLHL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaAvatarRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + BFELALEBLHL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFELALEBLHL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaAvatarRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaAvatarRow*>(*)())((::PBYTE)hIl2Cpp + BFELALEBLHL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesGachaAvatarRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesGachaAvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BFELALEBLHL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFELALEBLHL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFELALEBLHL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFELALEBLHL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BFELALEBLHL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BFELALEBLHL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BFELALEBLHL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesGachaAvatarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesGachaAvatarRow*))((::PBYTE)hIl2Cpp + BFELALEBLHL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
