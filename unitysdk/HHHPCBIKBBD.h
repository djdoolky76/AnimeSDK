#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotUpgradeCostRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHHPCBIKBBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEA9B20)
#define HHHPCBIKBBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEAA0A0)
#define HHHPCBIKBBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEA9C90)
#define HHHPCBIKBBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEA95D0)
#define HHHPCBIKBBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEA9860)
#define HHHPCBIKBBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEA9D30)
#define HHHPCBIKBBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEA9D80)
#define HHHPCBIKBBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEA9B60)
#define HHHPCBIKBBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEA9800)
#define HHHPCBIKBBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEA9990)
#define HHHPCBIKBBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEA9BF0)
#define HHHPCBIKBBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEA9550)

inline static constexpr unsigned int HHHPCBIKBBD_TypeDefinitionIndex = 11686;

	class HHHPCBIKBBD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>**)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x1DBC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x1DBC8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x1DBD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x6C70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x6C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHHPCBIKBBD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>*(*)())((::PBYTE)hIl2Cpp + HHHPCBIKBBD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHHPCBIKBBD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>(*)())((::PBYTE)hIl2Cpp + HHHPCBIKBBD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HHHPCBIKBBD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHHPCBIKBBD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHHPCBIKBBD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHHPCBIKBBD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HHHPCBIKBBD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHHPCBIKBBD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HHHPCBIKBBD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*))((::PBYTE)hIl2Cpp + HHHPCBIKBBD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
