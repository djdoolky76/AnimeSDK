#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooCustomizedCatRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLCDONOEKMO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2970C0)
#define OLCDONOEKMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D297690)
#define OLCDONOEKMO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D297230)
#define OLCDONOEKMO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D296B30)
#define OLCDONOEKMO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D296DC0)
#define OLCDONOEKMO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2972D0)
#define OLCDONOEKMO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D297320)
#define OLCDONOEKMO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D297100)
#define OLCDONOEKMO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D296D60)
#define OLCDONOEKMO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D296F30)
#define OLCDONOEKMO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D297190)
#define OLCDONOEKMO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D296AB0)

	class OLCDONOEKMO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>**)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0x38FB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0x38FB8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0x38FC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0xC2A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0xC2A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>*(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooCustomizedCatRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooCustomizedCatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OLCDONOEKMO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OLCDONOEKMO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLCDONOEKMO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OLCDONOEKMO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SpaceZooCustomizedCatRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooCustomizedCatRow*))((::PBYTE)hIl2Cpp + OLCDONOEKMO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
