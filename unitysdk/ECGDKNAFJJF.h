#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECGDKNAFJJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD374B0)
#define ECGDKNAFJJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD37A80)
#define ECGDKNAFJJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD37620)
#define ECGDKNAFJJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD36F20)
#define ECGDKNAFJJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD371B0)
#define ECGDKNAFJJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD376C0)
#define ECGDKNAFJJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD37710)
#define ECGDKNAFJJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD374F0)
#define ECGDKNAFJJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD37150)
#define ECGDKNAFJJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD37320)
#define ECGDKNAFJJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD37580)
#define ECGDKNAFJJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD36EA0)

inline static constexpr unsigned int ECGDKNAFJJF_TypeDefinitionIndex = 11736;

	class ECGDKNAFJJF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>**)UnitySDK::FromName("", "ECGDKNAFJJF")->GetStaticField(0x4BFA0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ECGDKNAFJJF")->GetStaticField(0x4BFA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ECGDKNAFJJF")->GetStaticField(0x4BFB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ECGDKNAFJJF")->GetStaticField(0x11600);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ECGDKNAFJJF")->GetStaticField(0x11601);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECGDKNAFJJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>*(*)())((::PBYTE)hIl2Cpp + ECGDKNAFJJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECGDKNAFJJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>(*)())((::PBYTE)hIl2Cpp + ECGDKNAFJJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveCLTriggerRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveCLTriggerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ECGDKNAFJJF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECGDKNAFJJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECGDKNAFJJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECGDKNAFJJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ECGDKNAFJJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ECGDKNAFJJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ECGDKNAFJJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + ECGDKNAFJJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
