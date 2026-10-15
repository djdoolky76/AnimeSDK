#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesRegionPhaseRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LENGFHAGCNA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E59C0)
#define LENGFHAGCNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E5F40)
#define LENGFHAGCNA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E5B30)
#define LENGFHAGCNA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E5470)
#define LENGFHAGCNA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E5700)
#define LENGFHAGCNA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E5BD0)
#define LENGFHAGCNA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E5C20)
#define LENGFHAGCNA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E5A00)
#define LENGFHAGCNA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E56A0)
#define LENGFHAGCNA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E5830)
#define LENGFHAGCNA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E5A90)
#define LENGFHAGCNA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E53F0)

inline static constexpr unsigned int LENGFHAGCNA_TypeDefinitionIndex = 12256;

	class LENGFHAGCNA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LENGFHAGCNA")->GetStaticField(0x3C920);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LENGFHAGCNA")->GetStaticField(0x3C928);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>**)UnitySDK::FromName("", "LENGFHAGCNA")->GetStaticField(0x3C930);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LENGFHAGCNA")->GetStaticField(0xCF80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LENGFHAGCNA")->GetStaticField(0xCF81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENGFHAGCNA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + LENGFHAGCNA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LENGFHAGCNA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>(*)())((::PBYTE)hIl2Cpp + LENGFHAGCNA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesRegionPhaseRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesRegionPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LENGFHAGCNA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LENGFHAGCNA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENGFHAGCNA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENGFHAGCNA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LENGFHAGCNA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LENGFHAGCNA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LENGFHAGCNA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesRegionPhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesRegionPhaseRow*))((::PBYTE)hIl2Cpp + LENGFHAGCNA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
