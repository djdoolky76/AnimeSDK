#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesRaiseConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MAEJDOAONCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D130E40)
#define MAEJDOAONCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D131400)
#define MAEJDOAONCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D130FB0)
#define MAEJDOAONCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1308B0)
#define MAEJDOAONCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D130B40)
#define MAEJDOAONCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D131050)
#define MAEJDOAONCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1310A0)
#define MAEJDOAONCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D130E80)
#define MAEJDOAONCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D130AE0)
#define MAEJDOAONCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D130C70)
#define MAEJDOAONCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D130F10)
#define MAEJDOAONCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D130830)

	class MAEJDOAONCG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MAEJDOAONCG")->GetStaticField(0x47030);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MAEJDOAONCG")->GetStaticField(0x47038);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRaiseConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRaiseConfigRow*>**)UnitySDK::FromName("", "MAEJDOAONCG")->GetStaticField(0x47040);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MAEJDOAONCG")->GetStaticField(0x10ED0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MAEJDOAONCG")->GetStaticField(0x10ED1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAEJDOAONCG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRaiseConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRaiseConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MAEJDOAONCG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MAEJDOAONCG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRaiseConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRaiseConfigRow*>(*)())((::PBYTE)hIl2Cpp + MAEJDOAONCG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesRaiseConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PlanetFesRaiseConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MAEJDOAONCG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MAEJDOAONCG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAEJDOAONCG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAEJDOAONCG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MAEJDOAONCG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MAEJDOAONCG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MAEJDOAONCG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesRaiseConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesRaiseConfigRow*))((::PBYTE)hIl2Cpp + MAEJDOAONCG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
