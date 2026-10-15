#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DailyMissionCountRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBMDILMLHCI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE26D50)
#define GBMDILMLHCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE27320)
#define GBMDILMLHCI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE26EC0)
#define GBMDILMLHCI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE267C0)
#define GBMDILMLHCI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE26A50)
#define GBMDILMLHCI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE26F60)
#define GBMDILMLHCI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE26FB0)
#define GBMDILMLHCI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE26D90)
#define GBMDILMLHCI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE269F0)
#define GBMDILMLHCI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE26BC0)
#define GBMDILMLHCI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE26E20)
#define GBMDILMLHCI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE26740)

inline static constexpr unsigned int GBMDILMLHCI_TypeDefinitionIndex = 13122;

	class GBMDILMLHCI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GBMDILMLHCI")->GetStaticField(0x165C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>**)UnitySDK::FromName("", "GBMDILMLHCI")->GetStaticField(0x165C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GBMDILMLHCI")->GetStaticField(0x165D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBMDILMLHCI")->GetStaticField(0x5480);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GBMDILMLHCI")->GetStaticField(0x5481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMDILMLHCI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>*(*)())((::PBYTE)hIl2Cpp + GBMDILMLHCI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBMDILMLHCI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>(*)())((::PBYTE)hIl2Cpp + GBMDILMLHCI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DailyMissionCountRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DailyMissionCountRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GBMDILMLHCI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBMDILMLHCI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMDILMLHCI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMDILMLHCI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GBMDILMLHCI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBMDILMLHCI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GBMDILMLHCI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DailyMissionCountRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DailyMissionCountRow*))((::PBYTE)hIl2Cpp + GBMDILMLHCI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
