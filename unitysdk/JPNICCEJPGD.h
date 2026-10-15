#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
class MFFLLKDNLAB;
namespace RPG::Client { class AssetOperationModel; }
namespace RPG::Client { class DesignDataMgr; }
namespace System { class String; }

#define JPNICCEJPGD_BLEEGIBMNGA_OFFSET UNITYSDK_OFFSET(0x1C47AE20)
#define JPNICCEJPGD_CCAIHMDEHHC_OFFSET UNITYSDK_OFFSET(0x1C47A4C0)
#define JPNICCEJPGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C47A490)
#define JPNICCEJPGD_DEGANOOLJME_OFFSET UNITYSDK_OFFSET(0x1C47ACD0)
#define JPNICCEJPGD_EBFBBENFJPN_OFFSET UNITYSDK_OFFSET(0x1C47A810)
#define JPNICCEJPGD_FGOFLHDMBCP_OFFSET UNITYSDK_OFFSET(0x1C47AD60)
#define JPNICCEJPGD_FPJDENCBHBP_OFFSET UNITYSDK_OFFSET(0x1C47AE90)
#define JPNICCEJPGD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C47A510)
#define JPNICCEJPGD_HOMLNOCNICB_OFFSET UNITYSDK_OFFSET(0x1C47AD10)
#define JPNICCEJPGD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C47A620)
#define JPNICCEJPGD_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1C47AC90)
#define JPNICCEJPGD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C47A4D0)
#define JPNICCEJPGD_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x1C47AAF0)
#define JPNICCEJPGD_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1C47ADC0)
#define JPNICCEJPGD_PDDMAGHDGHB_OFFSET UNITYSDK_OFFSET(0x1C47AEE0)
#define JPNICCEJPGD_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x1C47A560)
#define JPNICCEJPGD_PODLKOGHGMA_OFFSET UNITYSDK_OFFSET(0x1C47A730)

inline static constexpr unsigned int JPNICCEJPGD_TypeDefinitionIndex = 41417;

	class JPNICCEJPGD : public ::System::Object
	{
	public:
		::RPG::Client::AssetOperationModel* DBBHALJNJNJ; // 0x10
		::RPG::Client::DesignDataMgr* FAAIABAMEAM; // 0x18
		::MFFLLKDNLAB* FLOGNLHKBKE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_CTOR_OFFSET))(this);
		}

		::RPG::Client::AssetOperationModel* CCAIHMDEHHC()
		{
			return ((::RPG::Client::AssetOperationModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_CCAIHMDEHHC_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PODLKOGHGMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_PODLKOGHGMA_OFFSET))(this);
		}

		::System::Void EBFBBENFJPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_EBFBBENFJPN_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_LGAOOKPFIMF_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_PEECNCABGFD_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Int64 DEGANOOLJME()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_DEGANOOLJME_OFFSET))(this);
		}

		::System::Int64 HOMLNOCNICB(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + JPNICCEJPGD_HOMLNOCNICB_OFFSET))(this, a1);
		}

		::RPG::Client::DesignDataShortNameHash FGOFLHDMBCP()
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_FGOFLHDMBCP_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* NKCDEAAKNGO(::System::Int64 a1, ::System::Int64 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JPNICCEJPGD_NKCDEAAKNGO_OFFSET))(this, a1, a2, a3);
		}

		::System::String* BLEEGIBMNGA(::System::Int64 a1, ::System::Int64 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JPNICCEJPGD_BLEEGIBMNGA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FPJDENCBHBP(::RPG::Client::DesignDataMgr* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataMgr*))((::PBYTE)hIl2Cpp + JPNICCEJPGD_FPJDENCBHBP_OFFSET))(this, a1);
		}

		::System::Int64 PDDMAGHDGHB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNICCEJPGD_PDDMAGHDGHB_OFFSET))(this);
		}

	};
