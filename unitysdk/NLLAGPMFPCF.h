#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRacePerformanceRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLLAGPMFPCF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D234420)
#define NLLAGPMFPCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2349A0)
#define NLLAGPMFPCF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D234590)
#define NLLAGPMFPCF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D233F10)
#define NLLAGPMFPCF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2341A0)
#define NLLAGPMFPCF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D234630)
#define NLLAGPMFPCF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D234680)
#define NLLAGPMFPCF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D234460)
#define NLLAGPMFPCF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D234140)
#define NLLAGPMFPCF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2342D0)
#define NLLAGPMFPCF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2344F0)
#define NLLAGPMFPCF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D233E90)

	class NLLAGPMFPCF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRacePerformanceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRacePerformanceRow*>**)UnitySDK::FromName("", "NLLAGPMFPCF")->GetStaticField(0x304D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NLLAGPMFPCF")->GetStaticField(0x304D8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NLLAGPMFPCF")->GetStaticField(0x304E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NLLAGPMFPCF")->GetStaticField(0xA3B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NLLAGPMFPCF")->GetStaticField(0xA3B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLLAGPMFPCF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRacePerformanceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRacePerformanceRow*>*(*)())((::PBYTE)hIl2Cpp + NLLAGPMFPCF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLLAGPMFPCF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRacePerformanceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRacePerformanceRow*>(*)())((::PBYTE)hIl2Cpp + NLLAGPMFPCF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRacePerformanceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRacePerformanceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLLAGPMFPCF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLLAGPMFPCF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLLAGPMFPCF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLLAGPMFPCF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NLLAGPMFPCF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLLAGPMFPCF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NLLAGPMFPCF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRacePerformanceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRacePerformanceRow*))((::PBYTE)hIl2Cpp + NLLAGPMFPCF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
