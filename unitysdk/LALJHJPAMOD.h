#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesEffectRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LALJHJPAMOD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D3C00)
#define LALJHJPAMOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D4180)
#define LALJHJPAMOD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D3D70)
#define LALJHJPAMOD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D3840)
#define LALJHJPAMOD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D3710)
#define LALJHJPAMOD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D3E10)
#define LALJHJPAMOD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D3E60)
#define LALJHJPAMOD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D3C40)
#define LALJHJPAMOD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D36B0)
#define LALJHJPAMOD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D3A70)
#define LALJHJPAMOD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D3CD0)
#define LALJHJPAMOD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D3630)

inline static constexpr unsigned int LALJHJPAMOD_TypeDefinitionIndex = 12198;

	class LALJHJPAMOD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectRow*>**)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0x3AAE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0x3AAE8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0x3AAF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0xC810);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0xC811);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LALJHJPAMOD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectRow*>*(*)())((::PBYTE)hIl2Cpp + LALJHJPAMOD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LALJHJPAMOD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectRow*>(*)())((::PBYTE)hIl2Cpp + LALJHJPAMOD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LALJHJPAMOD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LALJHJPAMOD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LALJHJPAMOD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LALJHJPAMOD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LALJHJPAMOD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LALJHJPAMOD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LALJHJPAMOD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesEffectRow*))((::PBYTE)hIl2Cpp + LALJHJPAMOD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
