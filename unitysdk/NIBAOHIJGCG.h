#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EndmostChroniclePerformanceRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIBAOHIJGCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D210990)
#define NIBAOHIJGCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D210F90)
#define NIBAOHIJGCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D210B00)
#define NIBAOHIJGCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2103C0)
#define NIBAOHIJGCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D210650)
#define NIBAOHIJGCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D210BA0)
#define NIBAOHIJGCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D210BF0)
#define NIBAOHIJGCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2109D0)
#define NIBAOHIJGCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2105F0)
#define NIBAOHIJGCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2107C0)
#define NIBAOHIJGCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D210A60)
#define NIBAOHIJGCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D210340)

	class NIBAOHIJGCG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EndmostChroniclePerformanceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EndmostChroniclePerformanceRow*>**)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0x2E990);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0x2E998);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0x2E9A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0x99D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0x99D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIBAOHIJGCG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EndmostChroniclePerformanceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EndmostChroniclePerformanceRow*>*(*)())((::PBYTE)hIl2Cpp + NIBAOHIJGCG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIBAOHIJGCG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EndmostChroniclePerformanceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EndmostChroniclePerformanceRow*>(*)())((::PBYTE)hIl2Cpp + NIBAOHIJGCG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::EndmostChroniclePerformanceRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::EndmostChroniclePerformanceRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NIBAOHIJGCG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIBAOHIJGCG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIBAOHIJGCG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIBAOHIJGCG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NIBAOHIJGCG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NIBAOHIJGCG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NIBAOHIJGCG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::EndmostChroniclePerformanceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EndmostChroniclePerformanceRow*))((::PBYTE)hIl2Cpp + NIBAOHIJGCG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
