#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameGachaSymbolRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCLJOAMNHEL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCDAB40)
#define DCLJOAMNHEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCDB110)
#define DCLJOAMNHEL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCDACB0)
#define DCLJOAMNHEL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCDA5B0)
#define DCLJOAMNHEL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCDA840)
#define DCLJOAMNHEL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCDAD50)
#define DCLJOAMNHEL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCDADA0)
#define DCLJOAMNHEL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCDAB80)
#define DCLJOAMNHEL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCDA7E0)
#define DCLJOAMNHEL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCDA9B0)
#define DCLJOAMNHEL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCDAC10)
#define DCLJOAMNHEL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCDA530)

inline static constexpr unsigned int DCLJOAMNHEL_TypeDefinitionIndex = 12258;

	class DCLJOAMNHEL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DCLJOAMNHEL")->GetStaticField(0x48210);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameGachaSymbolRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameGachaSymbolRow*>**)UnitySDK::FromName("", "DCLJOAMNHEL")->GetStaticField(0x48218);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DCLJOAMNHEL")->GetStaticField(0x48220);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DCLJOAMNHEL")->GetStaticField(0x11150);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DCLJOAMNHEL")->GetStaticField(0x11151);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCLJOAMNHEL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameGachaSymbolRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameGachaSymbolRow*>*(*)())((::PBYTE)hIl2Cpp + DCLJOAMNHEL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCLJOAMNHEL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameGachaSymbolRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameGachaSymbolRow*>(*)())((::PBYTE)hIl2Cpp + DCLJOAMNHEL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesGameGachaSymbolRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesGameGachaSymbolRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DCLJOAMNHEL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCLJOAMNHEL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCLJOAMNHEL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCLJOAMNHEL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DCLJOAMNHEL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCLJOAMNHEL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DCLJOAMNHEL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesGameGachaSymbolRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesGameGachaSymbolRow*))((::PBYTE)hIl2Cpp + DCLJOAMNHEL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
