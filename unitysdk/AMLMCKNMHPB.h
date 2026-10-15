#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpEquipSlotRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMLMCKNMHPB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE0AE0)
#define AMLMCKNMHPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE1060)
#define AMLMCKNMHPB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE0C50)
#define AMLMCKNMHPB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE0590)
#define AMLMCKNMHPB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE0820)
#define AMLMCKNMHPB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE0CF0)
#define AMLMCKNMHPB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE0D40)
#define AMLMCKNMHPB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE0B20)
#define AMLMCKNMHPB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE07C0)
#define AMLMCKNMHPB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE0950)
#define AMLMCKNMHPB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE0BB0)
#define AMLMCKNMHPB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE0510)

inline static constexpr unsigned int AMLMCKNMHPB_TypeDefinitionIndex = 11767;

	class AMLMCKNMHPB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>**)UnitySDK::FromName("", "AMLMCKNMHPB")->GetStaticField(0x3BF40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AMLMCKNMHPB")->GetStaticField(0x3BF48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AMLMCKNMHPB")->GetStaticField(0x3BF50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AMLMCKNMHPB")->GetStaticField(0xCC30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AMLMCKNMHPB")->GetStaticField(0xCC31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMLMCKNMHPB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>*(*)())((::PBYTE)hIl2Cpp + AMLMCKNMHPB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMLMCKNMHPB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>(*)())((::PBYTE)hIl2Cpp + AMLMCKNMHPB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpEquipSlotRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSpEquipSlotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AMLMCKNMHPB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMLMCKNMHPB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMLMCKNMHPB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMLMCKNMHPB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AMLMCKNMHPB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLMCKNMHPB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AMLMCKNMHPB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpEquipSlotRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpEquipSlotRow*))((::PBYTE)hIl2Cpp + AMLMCKNMHPB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
