#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/System/Object.h"
class MFFLLKDNLAB;
namespace RPG::Client { class AssetOperationModel; }
namespace RPG::Client { class DesignDataMgr; }
namespace System { class String; }

#define GIOCDNCMJPD_BLEEGIBMNGA_OFFSET UNITYSDK_OFFSET(0x1D5FDDD0)
#define GIOCDNCMJPD_CCAIHMDEHHC_OFFSET UNITYSDK_OFFSET(0x1D5FDFE0)
#define GIOCDNCMJPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FDAB0)
#define GIOCDNCMJPD_DEGANOOLJME_OFFSET UNITYSDK_OFFSET(0x1D5FDBE0)
#define GIOCDNCMJPD_FGOFLHDMBCP_OFFSET UNITYSDK_OFFSET(0x1D5FE0B0)
#define GIOCDNCMJPD_FPJDENCBHBP_OFFSET UNITYSDK_OFFSET(0x1D5FDB40)
#define GIOCDNCMJPD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1D5FDB00)
#define GIOCDNCMJPD_HOMLNOCNICB_OFFSET UNITYSDK_OFFSET(0x1D5FDC70)
#define GIOCDNCMJPD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1D5FE070)
#define GIOCDNCMJPD_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1D5FDB90)
#define GIOCDNCMJPD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1D5FDAC0)
#define GIOCDNCMJPD_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1D5FDD10)
#define GIOCDNCMJPD_PDDMAGHDGHB_OFFSET UNITYSDK_OFFSET(0x1D5FE0F0)
#define GIOCDNCMJPD_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x1D5FE030)
#define GIOCDNCMJPD_PODLKOGHGMA_OFFSET UNITYSDK_OFFSET(0x1D5FDFF0)

inline static constexpr unsigned int GIOCDNCMJPD_TypeDefinitionIndex = 42391;

	class GIOCDNCMJPD : public ::System::Object
	{
	public:
		::RPG::Client::DesignDataMgr* FAAIABAMEAM; // 0x10
		::MFFLLKDNLAB* FLOGNLHKBKE; // 0x18
		::RPG::Client::DesignDataShortNameHash JKBOFDEJEEP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FPJDENCBHBP(::RPG::Client::DesignDataMgr* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataMgr*))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_FPJDENCBHBP_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Int64 DEGANOOLJME()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_DEGANOOLJME_OFFSET))(this);
		}

		::System::Int64 HOMLNOCNICB(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_HOMLNOCNICB_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* NKCDEAAKNGO(::System::Int64 a1, ::System::Int64 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_NKCDEAAKNGO_OFFSET))(this, a1, a2, a3);
		}

		::System::String* BLEEGIBMNGA(::System::Int64 a1, ::System::Int64 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_BLEEGIBMNGA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AssetOperationModel* CCAIHMDEHHC()
		{
			return ((::RPG::Client::AssetOperationModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_CCAIHMDEHHC_OFFSET))(this);
		}

		::System::Void PODLKOGHGMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_PODLKOGHGMA_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_KHGIKBFDLFB_OFFSET))(this);
		}

		::RPG::Client::DesignDataShortNameHash FGOFLHDMBCP()
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_FGOFLHDMBCP_OFFSET))(this);
		}

		::System::Int64 PDDMAGHDGHB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOCDNCMJPD_PDDMAGHDGHB_OFFSET))(this);
		}

	};
