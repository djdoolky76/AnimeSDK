#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipSlotRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGCFKJKOAKA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEA2CF0)
#define HGCFKJKOAKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEA3270)
#define HGCFKJKOAKA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEA2E60)
#define HGCFKJKOAKA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEA27A0)
#define HGCFKJKOAKA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEA2A30)
#define HGCFKJKOAKA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEA2F00)
#define HGCFKJKOAKA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEA2F50)
#define HGCFKJKOAKA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEA2D30)
#define HGCFKJKOAKA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEA29D0)
#define HGCFKJKOAKA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEA2B60)
#define HGCFKJKOAKA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEA2DC0)
#define HGCFKJKOAKA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEA2720)

	class HGCFKJKOAKA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HGCFKJKOAKA")->GetStaticField(0x1D4A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HGCFKJKOAKA")->GetStaticField(0x1D4A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>**)UnitySDK::FromName("", "HGCFKJKOAKA")->GetStaticField(0x1D4B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HGCFKJKOAKA")->GetStaticField(0x6B00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HGCFKJKOAKA")->GetStaticField(0x6B01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCFKJKOAKA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>*(*)())((::PBYTE)hIl2Cpp + HGCFKJKOAKA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGCFKJKOAKA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>(*)())((::PBYTE)hIl2Cpp + HGCFKJKOAKA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEquipSlotRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveEquipSlotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HGCFKJKOAKA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGCFKJKOAKA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCFKJKOAKA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCFKJKOAKA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HGCFKJKOAKA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HGCFKJKOAKA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HGCFKJKOAKA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEquipSlotRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEquipSlotRow*))((::PBYTE)hIl2Cpp + HGCFKJKOAKA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
