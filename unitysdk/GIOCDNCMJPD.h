#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/System/Object.h"
class MFFLLKDNLAB;
namespace RPG::Client { class AssetOperationModel; }
namespace RPG::Client { class DesignDataMgr; }
namespace System { class String; }

#define GIOCDNCMJPD_BLEEGIBMNGA_OFFSET UNITYSDK_OFFSET(0x1C479E60)
#define GIOCDNCMJPD_CCAIHMDEHHC_OFFSET UNITYSDK_OFFSET(0x1C47A070)
#define GIOCDNCMJPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C479B40)
#define GIOCDNCMJPD_DEGANOOLJME_OFFSET UNITYSDK_OFFSET(0x1C479C70)
#define GIOCDNCMJPD_FGOFLHDMBCP_OFFSET UNITYSDK_OFFSET(0x1C47A140)
#define GIOCDNCMJPD_FPJDENCBHBP_OFFSET UNITYSDK_OFFSET(0x1C479BD0)
#define GIOCDNCMJPD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C479B90)
#define GIOCDNCMJPD_HOMLNOCNICB_OFFSET UNITYSDK_OFFSET(0x1C479D00)
#define GIOCDNCMJPD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C47A100)
#define GIOCDNCMJPD_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1C479C20)
#define GIOCDNCMJPD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C479B50)
#define GIOCDNCMJPD_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1C479DA0)
#define GIOCDNCMJPD_PDDMAGHDGHB_OFFSET UNITYSDK_OFFSET(0x1C47A180)
#define GIOCDNCMJPD_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x1C47A0C0)
#define GIOCDNCMJPD_PODLKOGHGMA_OFFSET UNITYSDK_OFFSET(0x1C47A080)

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
