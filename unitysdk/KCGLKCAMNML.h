#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceTriggerEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCGLKCAMNML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D07BFA0)
#define KCGLKCAMNML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D07C520)
#define KCGLKCAMNML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D07C110)
#define KCGLKCAMNML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D07BA50)
#define KCGLKCAMNML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D07BCE0)
#define KCGLKCAMNML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D07C1B0)
#define KCGLKCAMNML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D07C200)
#define KCGLKCAMNML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D07BFE0)
#define KCGLKCAMNML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D07BC80)
#define KCGLKCAMNML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D07BE10)
#define KCGLKCAMNML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D07C070)
#define KCGLKCAMNML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D07B9D0)

inline static constexpr unsigned int KCGLKCAMNML_TypeDefinitionIndex = 11018;

	class KCGLKCAMNML : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KCGLKCAMNML")->GetStaticField(0x33D10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KCGLKCAMNML")->GetStaticField(0x33D18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerEventRow*>**)UnitySDK::FromName("", "KCGLKCAMNML")->GetStaticField(0x33D20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KCGLKCAMNML")->GetStaticField(0xAE30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KCGLKCAMNML")->GetStaticField(0xAE31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCGLKCAMNML_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerEventRow*>*(*)())((::PBYTE)hIl2Cpp + KCGLKCAMNML_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KCGLKCAMNML_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerEventRow*>(*)())((::PBYTE)hIl2Cpp + KCGLKCAMNML_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceTriggerEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceTriggerEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KCGLKCAMNML_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KCGLKCAMNML_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCGLKCAMNML_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCGLKCAMNML_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KCGLKCAMNML_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KCGLKCAMNML_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KCGLKCAMNML_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceTriggerEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceTriggerEventRow*))((::PBYTE)hIl2Cpp + KCGLKCAMNML_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
