#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesLandRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEKOPONIEBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D151EF0)
#define MEKOPONIEBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D152470)
#define MEKOPONIEBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D152060)
#define MEKOPONIEBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1519E0)
#define MEKOPONIEBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D151C70)
#define MEKOPONIEBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D152100)
#define MEKOPONIEBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D152150)
#define MEKOPONIEBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D151F30)
#define MEKOPONIEBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D151C10)
#define MEKOPONIEBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D151DA0)
#define MEKOPONIEBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D151FC0)
#define MEKOPONIEBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D151960)

inline static constexpr unsigned int MEKOPONIEBI_TypeDefinitionIndex = 12188;

	class MEKOPONIEBI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MEKOPONIEBI")->GetStaticField(0x49850);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandRow*>**)UnitySDK::FromName("", "MEKOPONIEBI")->GetStaticField(0x49858);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MEKOPONIEBI")->GetStaticField(0x49860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MEKOPONIEBI")->GetStaticField(0x11400);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MEKOPONIEBI")->GetStaticField(0x11401);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKOPONIEBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandRow*>*(*)())((::PBYTE)hIl2Cpp + MEKOPONIEBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEKOPONIEBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandRow*>(*)())((::PBYTE)hIl2Cpp + MEKOPONIEBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesLandRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesLandRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MEKOPONIEBI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEKOPONIEBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKOPONIEBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKOPONIEBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MEKOPONIEBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MEKOPONIEBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MEKOPONIEBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesLandRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesLandRow*))((::PBYTE)hIl2Cpp + MEKOPONIEBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
