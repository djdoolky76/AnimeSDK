#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpineCLTriggerRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIPOBJPPEJK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF9100)
#define FIPOBJPPEJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF96D0)
#define FIPOBJPPEJK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF9270)
#define FIPOBJPPEJK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF8B70)
#define FIPOBJPPEJK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF8E00)
#define FIPOBJPPEJK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF9310)
#define FIPOBJPPEJK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF9360)
#define FIPOBJPPEJK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF9140)
#define FIPOBJPPEJK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF8DA0)
#define FIPOBJPPEJK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF8F70)
#define FIPOBJPPEJK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF91D0)
#define FIPOBJPPEJK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF8AF0)

inline static constexpr unsigned int FIPOBJPPEJK_TypeDefinitionIndex = 11821;

	class FIPOBJPPEJK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*>**)UnitySDK::FromName("", "FIPOBJPPEJK")->GetStaticField(0x13E00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FIPOBJPPEJK")->GetStaticField(0x13E08);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FIPOBJPPEJK")->GetStaticField(0x13E10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FIPOBJPPEJK")->GetStaticField(0x4530);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FIPOBJPPEJK")->GetStaticField(0x4531);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIPOBJPPEJK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*>*(*)())((::PBYTE)hIl2Cpp + FIPOBJPPEJK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIPOBJPPEJK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*>(*)())((::PBYTE)hIl2Cpp + FIPOBJPPEJK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpineCLTriggerRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSpineCLTriggerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FIPOBJPPEJK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIPOBJPPEJK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIPOBJPPEJK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIPOBJPPEJK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FIPOBJPPEJK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIPOBJPPEJK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FIPOBJPPEJK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpineCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpineCLTriggerRow*))((::PBYTE)hIl2Cpp + FIPOBJPPEJK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
