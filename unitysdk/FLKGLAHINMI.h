#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"
class CBNNMKNBLDI;
class JEHJILAJKAC;
class PLLPNJOEDHF;
namespace RPG::Client::ActivityIdleLive { class PendingEquipData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }

#define FLKGLAHINMI_AHMDGKINKML_OFFSET UNITYSDK_OFFSET(0x1582B9A0)
#define FLKGLAHINMI_AJBDGGAMLAD_OFFSET UNITYSDK_OFFSET(0x1582C0B0)
#define FLKGLAHINMI_AKECELEOPJN_OFFSET UNITYSDK_OFFSET(0x1582BDC0)
#define FLKGLAHINMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1582D1B0)
#define FLKGLAHINMI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1582B870)
#define FLKGLAHINMI_FFGDBABMLNF_OFFSET UNITYSDK_OFFSET(0x1582C780)
#define FLKGLAHINMI_FNAJAPKANDN_OFFSET UNITYSDK_OFFSET(0x1582CEB0)
#define FLKGLAHINMI_HKAEPGLCJOB_OFFSET UNITYSDK_OFFSET(0x1582CB90)
#define FLKGLAHINMI_KIMBMNLKJKF_OFFSET UNITYSDK_OFFSET(0x1582C1D0)
#define FLKGLAHINMI_KLFGLGNFIIN_OFFSET UNITYSDK_OFFSET(0x1582C530)
#define FLKGLAHINMI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1582B780)
#define FLKGLAHINMI_MLEDHFKIFIG_OFFSET UNITYSDK_OFFSET(0x1582BAA0)
#define FLKGLAHINMI_NPNGECDNMML_OFFSET UNITYSDK_OFFSET(0x1582CCB0)
#define FLKGLAHINMI_OBJFMAOOMHP_OFFSET UNITYSDK_OFFSET(0x1582C8A0)
#define FLKGLAHINMI_OMFHPPGDBEF_OFFSET UNITYSDK_OFFSET(0x1582C4E0)
#define FLKGLAHINMI_PCBILOLFONI_OFFSET UNITYSDK_OFFSET(0x1582C220)
#define FLKGLAHINMI_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1582B930)
#define FLKGLAHINMI__REQUESTKEEPOLDEQUIP_B__18_0_OFFSET UNITYSDK_OFFSET(0x1582D280)
#define FLKGLAHINMI__REQUESTREPLACEOLDEQUIP_B__25_0_OFFSET UNITYSDK_OFFSET(0x1582D490)
#define FLKGLAHINMI___DOKEEPOLDEQUIP_B__20_0_OFFSET UNITYSDK_OFFSET(0x1582D2E0)
#define FLKGLAHINMI___REQUESTDISCARDNEWEQUIP_B__28_0_OFFSET UNITYSDK_OFFSET(0x1582D4F0)

inline static constexpr unsigned int FLKGLAHINMI_TypeDefinitionIndex = 75315;

	class FLKGLAHINMI : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>* KLGMDEBCFIL; // 0x10
		::CBNNMKNBLDI* CAAKPOLLAHI; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal OMMLIKIKGDF; // 0x20
		::JEHJILAJKAC* COOFMBLDBHM; // 0x38
		::RPG::Client::Promises::Promise* FNDDOLJANFF; // 0x40
		::PLLPNJOEDHF* HEMMHLHDGBO; // 0x48
		::RPG::Client::ActivityIdleLive::PendingEquipData* BCOOHEGFGJA; // 0x50
		::RPG::Client::ActivityIdleLive::PendingEquipData* MOOMGCPHJNJ; // 0x58
		::JEHJILAJKAC* JLEFHBGCHCE; // 0x60
		::JEHJILAJKAC* DLDIPJMHJJJ; // 0x68
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal MLPODLMJAHB; // 0x70
		::System::Boolean LAJOMDINKMO; // 0x88
		::System::Boolean KDHHECNDEAI; // 0x89
		::System::Boolean LKPOADAAPIN; // 0x8A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI_DISPOSE_OFFSET))(this);
		}

		::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + FLKGLAHINMI_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* AHMDGKINKML(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + FLKGLAHINMI_AHMDGKINKML_OFFSET))(this, a1);
		}

		::System::Void AKECELEOPJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI_AKECELEOPJN_OFFSET))(this);
		}

		::System::Void KIMBMNLKJKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI_KIMBMNLKJKF_OFFSET))(this);
		}

		::System::Void AJBDGGAMLAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI_AJBDGGAMLAD_OFFSET))(this);
		}

		::System::Void OMFHPPGDBEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI_OMFHPPGDBEF_OFFSET))(this);
		}

		::System::Void MLEDHFKIFIG(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + FLKGLAHINMI_MLEDHFKIFIG_OFFSET))(this, a1);
		}

		::System::Void FFGDBABMLNF(::CBNNMKNBLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBNNMKNBLDI*))((::PBYTE)hIl2Cpp + FLKGLAHINMI_FFGDBABMLNF_OFFSET))(this, a1);
		}

		::System::Void KLFGLGNFIIN(::CBNNMKNBLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBNNMKNBLDI*))((::PBYTE)hIl2Cpp + FLKGLAHINMI_KLFGLGNFIIN_OFFSET))(this, a1);
		}

		::System::Void OBJFMAOOMHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI_OBJFMAOOMHP_OFFSET))(this);
		}

		::System::Void HKAEPGLCJOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI_HKAEPGLCJOB_OFFSET))(this);
		}

		::System::Void NPNGECDNMML(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + FLKGLAHINMI_NPNGECDNMML_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>* PCBILOLFONI(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLKGLAHINMI_PCBILOLFONI_OFFSET))(this, a1);
		}

		::System::Void FNAJAPKANDN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FLKGLAHINMI_FNAJAPKANDN_OFFSET))(this, a1, a2);
		}

		::System::Void _RequestKeepOldEquip_b__18_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLKGLAHINMI__REQUESTKEEPOLDEQUIP_B__18_0_OFFSET))(this, a1);
		}

		::System::Void __DoKeepOldEquip_b__20_0(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + FLKGLAHINMI___DOKEEPOLDEQUIP_B__20_0_OFFSET))(this, a1);
		}

		::System::Void _RequestReplaceOldEquip_b__25_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLKGLAHINMI__REQUESTREPLACEOLDEQUIP_B__25_0_OFFSET))(this, a1);
		}

		::System::Void __RequestDiscardNewEquip_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKGLAHINMI___REQUESTDISCARDNEWEQUIP_B__28_0_OFFSET))(this);
		}

	};
