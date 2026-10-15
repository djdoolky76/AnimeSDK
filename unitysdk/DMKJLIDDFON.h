#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameBingoSymbolRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMKJLIDDFON_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD18B00)
#define DMKJLIDDFON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD190D0)
#define DMKJLIDDFON_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD18C70)
#define DMKJLIDDFON_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD18570)
#define DMKJLIDDFON_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD18800)
#define DMKJLIDDFON_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD18D10)
#define DMKJLIDDFON_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD18D60)
#define DMKJLIDDFON_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD18B40)
#define DMKJLIDDFON_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD187A0)
#define DMKJLIDDFON_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD18970)
#define DMKJLIDDFON_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD18BD0)
#define DMKJLIDDFON_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD184F0)

inline static constexpr unsigned int DMKJLIDDFON_TypeDefinitionIndex = 12249;

	class DMKJLIDDFON : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameBingoSymbolRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameBingoSymbolRow*>**)UnitySDK::FromName("", "DMKJLIDDFON")->GetStaticField(0x49AA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMKJLIDDFON")->GetStaticField(0x49AA8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DMKJLIDDFON")->GetStaticField(0x49AB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMKJLIDDFON")->GetStaticField(0x10FE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMKJLIDDFON")->GetStaticField(0x10FE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMKJLIDDFON_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameBingoSymbolRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameBingoSymbolRow*>*(*)())((::PBYTE)hIl2Cpp + DMKJLIDDFON_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMKJLIDDFON_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameBingoSymbolRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameBingoSymbolRow*>(*)())((::PBYTE)hIl2Cpp + DMKJLIDDFON_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesGameBingoSymbolRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesGameBingoSymbolRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DMKJLIDDFON_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMKJLIDDFON_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMKJLIDDFON_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMKJLIDDFON_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DMKJLIDDFON_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMKJLIDDFON_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DMKJLIDDFON_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesGameBingoSymbolRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesGameBingoSymbolRow*))((::PBYTE)hIl2Cpp + DMKJLIDDFON_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
