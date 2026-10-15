#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class EGFIGBODMHI;
class LELCKJPOPAO;
class MDLBOFGMBKH;
namespace System { class Object; }

#define MDLBOFGMBKH_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D14BAC0)
#define MDLBOFGMBKH_BCBJEPGIINF_OFFSET UNITYSDK_OFFSET(0x1D14B5D0)
#define MDLBOFGMBKH_BMEMPIEMGOE_OFFSET UNITYSDK_OFFSET(0x1D14BDD0)
#define MDLBOFGMBKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D14BE20)
#define MDLBOFGMBKH_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x1D14B8D0)
#define MDLBOFGMBKH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D14B5B0)
#define MDLBOFGMBKH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D14B8C0)
#define MDLBOFGMBKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D14B990)
#define MDLBOFGMBKH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D14B710)
#define MDLBOFGMBKH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D14B5E0)
#define MDLBOFGMBKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D14BAA0)
#define MDLBOFGMBKH_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D14B4E0)
#define MDLBOFGMBKH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D14B590)
#define MDLBOFGMBKH_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D14B5A0)
#define MDLBOFGMBKH_HALCMDKGLAA_OFFSET UNITYSDK_OFFSET(0x1D14BC40)
#define MDLBOFGMBKH_ICNGBHECJAH_OFFSET UNITYSDK_OFFSET(0x1D14B5C0)
#define MDLBOFGMBKH_INIT_OFFSET UNITYSDK_OFFSET(0x1D14B4D0)
#define MDLBOFGMBKH_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D14BB80)

	class MDLBOFGMBKH : public ::System::Object
	{
	public:
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::Boolean CLKPCMIPJOE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 IKKNJMJCDOJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_CTOR_OFFSET))(this);
		}

		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_DISPOSE_OFFSET))(this);
		}

		::System::Boolean ICNGBHECJAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_ICNGBHECJAH_OFFSET))(this);
		}

		::System::Void BCBJEPGIINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_BCBJEPGIINF_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_FINALIZE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::MDLBOFGMBKH* a1, ::MDLBOFGMBKH* a2)
		{
			return ((::System::Boolean(*)(::MDLBOFGMBKH*, ::MDLBOFGMBKH*))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::MDLBOFGMBKH* a1, ::MDLBOFGMBKH* a2)
		{
			return ((::System::Boolean(*)(::MDLBOFGMBKH*, ::MDLBOFGMBKH*))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::Boolean DGCGLNOLDIB(::MDLBOFGMBKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDLBOFGMBKH*))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean BBNJCKPKPDN(::MDLBOFGMBKH* a1)
		{
			return ((::System::Boolean(*)(::MDLBOFGMBKH*))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::System::Boolean NHCFLDCDLCP(::MDLBOFGMBKH* a1)
		{
			return ((::System::Boolean(*)(::MDLBOFGMBKH*))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_NHCFLDCDLCP_OFFSET))(a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::EGFIGBODMHI*> HALCMDKGLAA()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::EGFIGBODMHI*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_HALCMDKGLAA_OFFSET))(this);
		}

		::System::Void BMEMPIEMGOE(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::EGFIGBODMHI*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::EGFIGBODMHI*>))((::PBYTE)hIl2Cpp + MDLBOFGMBKH_BMEMPIEMGOE_OFFSET))(this, a1);
		}

	};
