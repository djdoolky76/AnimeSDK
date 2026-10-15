#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
class ADCHCEGJPFN;
class AENGOKAEEOA;
class GJEMBJDCAPG;
class JEFCCHAPOLA;
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIMCAOLPLDG_AGLGIOIIMJO_OFFSET UNITYSDK_OFFSET(0x1644A6B0)
#define IIMCAOLPLDG_AKMDBELINKJ_OFFSET UNITYSDK_OFFSET(0x1644BA30)
#define IIMCAOLPLDG_BBPICLJKMEB_OFFSET UNITYSDK_OFFSET(0x1644C840)
#define IIMCAOLPLDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1644DAA0)
#define IIMCAOLPLDG_GFPMJDDHHII_OFFSET UNITYSDK_OFFSET(0x1644CBF0)
#define IIMCAOLPLDG_HLHCPLLOFFB_OFFSET UNITYSDK_OFFSET(0x1644D890)
#define IIMCAOLPLDG_KLAOMAIDAMI_OFFSET UNITYSDK_OFFSET(0x1644A7B0)
#define IIMCAOLPLDG_KNIOFJKLDCF_OFFSET UNITYSDK_OFFSET(0x1644D980)
#define IIMCAOLPLDG_LDMGJDBIHPE_OFFSET UNITYSDK_OFFSET(0x1644A950)
#define IIMCAOLPLDG_MKHOKILACGF_OFFSET UNITYSDK_OFFSET(0x1644CAF0)
#define IIMCAOLPLDG_MMOBBCKANEI_OFFSET UNITYSDK_OFFSET(0x1644B4F0)
#define IIMCAOLPLDG_MNFOAMPMJIL_OFFSET UNITYSDK_OFFSET(0x1644B420)
#define IIMCAOLPLDG_MPIEJDOMCKM_OFFSET UNITYSDK_OFFSET(0x1644D1E0)
#define IIMCAOLPLDG_NKEAFKIJDLH_OFFSET UNITYSDK_OFFSET(0x1644A910)
#define IIMCAOLPLDG_PMPGLJADDNB_OFFSET UNITYSDK_OFFSET(0x1644BE10)

	class IIMCAOLPLDG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMCAOLPLDG_CTOR_OFFSET))(this);
		}

		static ::System::Boolean AGLGIOIIMJO()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG_AGLGIOIIMJO_OFFSET))();
		}

		static ::System::UInt32 KLAOMAIDAMI()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG_KLAOMAIDAMI_OFFSET))();
		}

		static ::System::UInt64 NKEAFKIJDLH()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG_NKEAFKIJDLH_OFFSET))();
		}

		static ::Il2CppArray<::AENGOKAEEOA*>* LDMGJDBIHPE()
		{
			return ((::Il2CppArray<::AENGOKAEEOA*>*(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG_LDMGJDBIHPE_OFFSET))();
		}

		static ::System::Void MMOBBCKANEI(::AENGOKAEEOA* a1, ::Il2CppArray<::JEFCCHAPOLA*>* a2, ::Il2CppArray<::GJEMBJDCAPG*>* a3)
		{
			return ((::System::Void(*)(::AENGOKAEEOA*, ::Il2CppArray<::JEFCCHAPOLA*>*, ::Il2CppArray<::GJEMBJDCAPG*>*))((::PBYTE)hIl2Cpp + IIMCAOLPLDG_MMOBBCKANEI_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::ADCHCEGJPFN*>* AKMDBELINKJ(::Il2CppArray<::AENGOKAEEOA*>* a1)
		{
			return ((::Il2CppArray<::ADCHCEGJPFN*>*(*)(::Il2CppArray<::AENGOKAEEOA*>*))((::PBYTE)hIl2Cpp + IIMCAOLPLDG_AKMDBELINKJ_OFFSET))(a1);
		}

		static ::Il2CppArray<::GJEMBJDCAPG*>* PMPGLJADDNB()
		{
			return ((::Il2CppArray<::GJEMBJDCAPG*>*(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG_PMPGLJADDNB_OFFSET))();
		}

		static ::Il2CppArray<::JEFCCHAPOLA*>* BBPICLJKMEB()
		{
			return ((::Il2CppArray<::JEFCCHAPOLA*>*(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG_BBPICLJKMEB_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* MKHOKILACGF(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*(*)(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + IIMCAOLPLDG_MKHOKILACGF_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* GFPMJDDHHII(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + IIMCAOLPLDG_GFPMJDDHHII_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* MPIEJDOMCKM()
		{
			return ((::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG_MPIEJDOMCKM_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* HLHCPLLOFFB()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG_HLHCPLLOFFB_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* KNIOFJKLDCF()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG_KNIOFJKLDCF_OFFSET))();
		}

		static ::RPG::GameCore::RtAbilityProperty MNFOAMPMJIL(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::RPG::GameCore::RtAbilityProperty(*)(::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + IIMCAOLPLDG_MNFOAMPMJIL_OFFSET))(a1);
		}

	};
