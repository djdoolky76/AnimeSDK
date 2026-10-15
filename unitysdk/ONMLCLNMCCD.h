#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookEnergyRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONMLCLNMCCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2A36D0)
#define ONMLCLNMCCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A42B0)
#define ONMLCLNMCCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2A3A70)
#define ONMLCLNMCCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2A3710)
#define ONMLCLNMCCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2A3FB0)
#define ONMLCLNMCCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2A3B10)
#define ONMLCLNMCCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2A3B60)
#define ONMLCLNMCCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2A3940)
#define ONMLCLNMCCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2A3F50)
#define ONMLCLNMCCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2A4120)
#define ONMLCLNMCCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2A39D0)
#define ONMLCLNMCCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2A3ED0)

	class ONMLCLNMCCD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0x3A580);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0x3A588);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>**)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0x3A590);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0xC6F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0xC6F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookEnergyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookEnergyRow*))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>*(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookEnergyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookEnergyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
