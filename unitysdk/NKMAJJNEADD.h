#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class ENBMOAFGKCG;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKMAJJNEADD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D202380)
#define NKMAJJNEADD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D202980)
#define NKMAJJNEADD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2024F0)
#define NKMAJJNEADD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D201DB0)
#define NKMAJJNEADD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D202040)
#define NKMAJJNEADD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D202590)
#define NKMAJJNEADD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2025E0)
#define NKMAJJNEADD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2023C0)
#define NKMAJJNEADD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D201FE0)
#define NKMAJJNEADD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2021B0)
#define NKMAJJNEADD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D202450)
#define NKMAJJNEADD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D201D30)

inline static constexpr unsigned int NKMAJJNEADD_TypeDefinitionIndex = 13923;

	class NKMAJJNEADD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ENBMOAFGKCG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ENBMOAFGKCG*>**)UnitySDK::FromName("", "NKMAJJNEADD")->GetStaticField(0x41680);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NKMAJJNEADD")->GetStaticField(0x41688);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NKMAJJNEADD")->GetStaticField(0x41690);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NKMAJJNEADD")->GetStaticField(0xF8A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NKMAJJNEADD")->GetStaticField(0xF8A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKMAJJNEADD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ENBMOAFGKCG*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ENBMOAFGKCG*>*(*)())((::PBYTE)hIl2Cpp + NKMAJJNEADD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NKMAJJNEADD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ENBMOAFGKCG*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ENBMOAFGKCG*>(*)())((::PBYTE)hIl2Cpp + NKMAJJNEADD_FPHGMAMDFHE_OFFSET))();
		}

		static ::ENBMOAFGKCG* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::ENBMOAFGKCG*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NKMAJJNEADD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NKMAJJNEADD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKMAJJNEADD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKMAJJNEADD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NKMAJJNEADD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NKMAJJNEADD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NKMAJJNEADD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::ENBMOAFGKCG* a1)
		{
			return ((::System::Void(*)(::ENBMOAFGKCG*))((::PBYTE)hIl2Cpp + NKMAJJNEADD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
