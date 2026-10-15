#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LALJHJPAMOD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0A5D30)
#define LALJHJPAMOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A62B0)
#define LALJHJPAMOD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0A5EA0)
#define LALJHJPAMOD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0A5970)
#define LALJHJPAMOD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0A5840)
#define LALJHJPAMOD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0A5F40)
#define LALJHJPAMOD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0A5F90)
#define LALJHJPAMOD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0A5D70)
#define LALJHJPAMOD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0A57E0)
#define LALJHJPAMOD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0A5BA0)
#define LALJHJPAMOD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0A5E00)
#define LALJHJPAMOD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0A5760)

inline static constexpr unsigned int LALJHJPAMOD_TypeDefinitionIndex = 12198;

	class LALJHJPAMOD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0x37D70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectRow*>**)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0x37D78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0x37D80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0xB4D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LALJHJPAMOD")->GetStaticField(0xB4D1);
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
