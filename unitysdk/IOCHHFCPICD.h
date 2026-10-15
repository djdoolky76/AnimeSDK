#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPGOJLCDIHD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
class MFFLLKDNLAB;
namespace RPG::Client { class AssetOperationModel; }
namespace RPG::Client { class DesignDataMgr; }
namespace System { class String; }

#define IOCHHFCPICD_BLEEGIBMNGA_OFFSET UNITYSDK_OFFSET(0x1C4A3380)
#define IOCHHFCPICD_CCAIHMDEHHC_OFFSET UNITYSDK_OFFSET(0x1C4A3590)
#define IOCHHFCPICD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3050)
#define IOCHHFCPICD_DEGANOOLJME_OFFSET UNITYSDK_OFFSET(0x1C4A3190)
#define IOCHHFCPICD_FGOFLHDMBCP_OFFSET UNITYSDK_OFFSET(0x1C4A3680)
#define IOCHHFCPICD_FPJDENCBHBP_OFFSET UNITYSDK_OFFSET(0x1C4A30F0)
#define IOCHHFCPICD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C4A30B0)
#define IOCHHFCPICD_HOMLNOCNICB_OFFSET UNITYSDK_OFFSET(0x1C4A3220)
#define IOCHHFCPICD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C4A3620)
#define IOCHHFCPICD_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1C4A3140)
#define IOCHHFCPICD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C4A3070)
#define IOCHHFCPICD_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1C4A32C0)
#define IOCHHFCPICD_PDDMAGHDGHB_OFFSET UNITYSDK_OFFSET(0x1C4A36C0)
#define IOCHHFCPICD_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x1C4A35E0)
#define IOCHHFCPICD_PODLKOGHGMA_OFFSET UNITYSDK_OFFSET(0x1C4A35A0)

inline static constexpr unsigned int IOCHHFCPICD_TypeDefinitionIndex = 41412;

	class IOCHHFCPICD : public ::System::Object
	{
	public:
		::MFFLLKDNLAB* FLOGNLHKBKE; // 0x10
		::RPG::Client::DesignDataMgr* FAAIABAMEAM; // 0x18
		::GPGOJLCDIHD NIIFNOENDFL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FPJDENCBHBP(::RPG::Client::DesignDataMgr* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataMgr*))((::PBYTE)hIl2Cpp + IOCHHFCPICD_FPJDENCBHBP_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Int64 DEGANOOLJME()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_DEGANOOLJME_OFFSET))(this);
		}

		::System::Int64 HOMLNOCNICB(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IOCHHFCPICD_HOMLNOCNICB_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* NKCDEAAKNGO(::System::Int64 a1, ::System::Int64 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IOCHHFCPICD_NKCDEAAKNGO_OFFSET))(this, a1, a2, a3);
		}

		::System::String* BLEEGIBMNGA(::System::Int64 a1, ::System::Int64 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IOCHHFCPICD_BLEEGIBMNGA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AssetOperationModel* CCAIHMDEHHC()
		{
			return ((::RPG::Client::AssetOperationModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_CCAIHMDEHHC_OFFSET))(this);
		}

		::System::Void PODLKOGHGMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_PODLKOGHGMA_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_KHGIKBFDLFB_OFFSET))(this);
		}

		::RPG::Client::DesignDataShortNameHash FGOFLHDMBCP()
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_FGOFLHDMBCP_OFFSET))(this);
		}

		::System::Int64 PDDMAGHDGHB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHHFCPICD_PDDMAGHDGHB_OFFSET))(this);
		}

	};
