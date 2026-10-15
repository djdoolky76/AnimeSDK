#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersPerformanceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKIPMONBNCP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0DD170)
#define LKIPMONBNCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0DD740)
#define LKIPMONBNCP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0DD2E0)
#define LKIPMONBNCP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0DCBE0)
#define LKIPMONBNCP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0DCE70)
#define LKIPMONBNCP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0DD380)
#define LKIPMONBNCP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0DD3D0)
#define LKIPMONBNCP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0DD1B0)
#define LKIPMONBNCP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0DCE10)
#define LKIPMONBNCP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0DCFE0)
#define LKIPMONBNCP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0DD240)
#define LKIPMONBNCP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0DCB60)

inline static constexpr unsigned int LKIPMONBNCP_TypeDefinitionIndex = 13212;

	class LKIPMONBNCP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LKIPMONBNCP")->GetStaticField(0x3D4E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*>**)UnitySDK::FromName("", "LKIPMONBNCP")->GetStaticField(0x3D4E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LKIPMONBNCP")->GetStaticField(0x3D4F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LKIPMONBNCP")->GetStaticField(0xC480);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LKIPMONBNCP")->GetStaticField(0xC481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKIPMONBNCP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*>*(*)())((::PBYTE)hIl2Cpp + LKIPMONBNCP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKIPMONBNCP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*>(*)())((::PBYTE)hIl2Cpp + LKIPMONBNCP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCheersPerformanceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerCheersPerformanceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LKIPMONBNCP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKIPMONBNCP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKIPMONBNCP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKIPMONBNCP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LKIPMONBNCP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKIPMONBNCP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LKIPMONBNCP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCheersPerformanceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersPerformanceRow*))((::PBYTE)hIl2Cpp + LKIPMONBNCP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
