#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EndmostChroniclePerformanceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIBAOHIJGCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1E2D70)
#define NIBAOHIJGCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3370)
#define NIBAOHIJGCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1E2EE0)
#define NIBAOHIJGCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E27A0)
#define NIBAOHIJGCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1E2A30)
#define NIBAOHIJGCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1E2F80)
#define NIBAOHIJGCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1E2FD0)
#define NIBAOHIJGCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1E2DB0)
#define NIBAOHIJGCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1E29D0)
#define NIBAOHIJGCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1E2BA0)
#define NIBAOHIJGCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1E2E40)
#define NIBAOHIJGCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1E2720)

inline static constexpr unsigned int NIBAOHIJGCG_TypeDefinitionIndex = 14132;

	class NIBAOHIJGCG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0x40C30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EndmostChroniclePerformanceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EndmostChroniclePerformanceRow*>**)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0x40C38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0x40C40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0xF6D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NIBAOHIJGCG")->GetStaticField(0xF6D1);
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
