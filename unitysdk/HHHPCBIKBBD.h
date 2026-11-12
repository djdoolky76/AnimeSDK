#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamSlotUpgradeCostRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHHPCBIKBBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E088A70)
#define HHHPCBIKBBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E088FF0)
#define HHHPCBIKBBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E088BE0)
#define HHHPCBIKBBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E088520)
#define HHHPCBIKBBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0887B0)
#define HHHPCBIKBBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E088C80)
#define HHHPCBIKBBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E088CD0)
#define HHHPCBIKBBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E088AB0)
#define HHHPCBIKBBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E088750)
#define HHHPCBIKBBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0888E0)
#define HHHPCBIKBBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E088B40)
#define HHHPCBIKBBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0884A0)

inline static constexpr unsigned int HHHPCBIKBBD_TypeDefinitionIndex = 11743;

	class HHHPCBIKBBD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x15B00);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x15B08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>**)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x15B10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x47F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HHHPCBIKBBD")->GetStaticField(0x47F1);
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
