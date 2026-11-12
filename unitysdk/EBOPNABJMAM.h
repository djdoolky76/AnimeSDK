#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourTriggerEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBOPNABJMAM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF343B0)
#define EBOPNABJMAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF34980)
#define EBOPNABJMAM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF34520)
#define EBOPNABJMAM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF33E20)
#define EBOPNABJMAM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF340B0)
#define EBOPNABJMAM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF345C0)
#define EBOPNABJMAM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF34610)
#define EBOPNABJMAM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF343F0)
#define EBOPNABJMAM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF34050)
#define EBOPNABJMAM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF34220)
#define EBOPNABJMAM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF34480)
#define EBOPNABJMAM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF33DA0)

inline static constexpr unsigned int EBOPNABJMAM_TypeDefinitionIndex = 12168;

	class EBOPNABJMAM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0x34560);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>**)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0x34568);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0x34570);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0xB120);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EBOPNABJMAM")->GetStaticField(0xB121);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>*(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourTriggerEventRow*>(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourTriggerEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourTriggerEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EBOPNABJMAM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOPNABJMAM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EBOPNABJMAM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBOPNABJMAM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EBOPNABJMAM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourTriggerEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourTriggerEventRow*))((::PBYTE)hIl2Cpp + EBOPNABJMAM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
