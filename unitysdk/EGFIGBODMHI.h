#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OKLBEPJCBJG.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class EGFIGBODMHI;
class LELCKJPOPAO;
namespace System { class Object; }

#define EGFIGBODMHI_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CD7C3E0)
#define EGFIGBODMHI_BCBJEPGIINF_OFFSET UNITYSDK_OFFSET(0x1CD7BEF0)
#define EGFIGBODMHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7C740)
#define EGFIGBODMHI_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x1CD7C1F0)
#define EGFIGBODMHI_DIMGOLFIMJA_OFFSET UNITYSDK_OFFSET(0x1CD7C6F0)
#define EGFIGBODMHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD7BED0)
#define EGFIGBODMHI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CD7C1E0)
#define EGFIGBODMHI_EHICOCENCBL_OFFSET UNITYSDK_OFFSET(0x1CD7C560)
#define EGFIGBODMHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD7C2B0)
#define EGFIGBODMHI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CD7C030)
#define EGFIGBODMHI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CD7BF00)
#define EGFIGBODMHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD7C3C0)
#define EGFIGBODMHI_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CD7BE00)
#define EGFIGBODMHI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1CD7BEB0)
#define EGFIGBODMHI_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1CD7BEC0)
#define EGFIGBODMHI_ICNGBHECJAH_OFFSET UNITYSDK_OFFSET(0x1CD7BEE0)
#define EGFIGBODMHI_INIT_OFFSET UNITYSDK_OFFSET(0x1CD7BDF0)
#define EGFIGBODMHI_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CD7C4A0)

inline static constexpr unsigned int EGFIGBODMHI_TypeDefinitionIndex = 10683;

	class EGFIGBODMHI : public ::System::Object
	{
	public:
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Boolean CLKPCMIPJOE; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_CTOR_OFFSET))(this);
		}

		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + EGFIGBODMHI_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_DISPOSE_OFFSET))(this);
		}

		::System::Boolean ICNGBHECJAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_ICNGBHECJAH_OFFSET))(this);
		}

		::System::Void BCBJEPGIINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_BCBJEPGIINF_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_FINALIZE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::EGFIGBODMHI* a1, ::EGFIGBODMHI* a2)
		{
			return ((::System::Boolean(*)(::EGFIGBODMHI*, ::EGFIGBODMHI*))((::PBYTE)hIl2Cpp + EGFIGBODMHI_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::EGFIGBODMHI* a1, ::EGFIGBODMHI* a2)
		{
			return ((::System::Boolean(*)(::EGFIGBODMHI*, ::EGFIGBODMHI*))((::PBYTE)hIl2Cpp + EGFIGBODMHI_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::Boolean DGCGLNOLDIB(::EGFIGBODMHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGFIGBODMHI*))((::PBYTE)hIl2Cpp + EGFIGBODMHI_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGFIGBODMHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean BBNJCKPKPDN(::EGFIGBODMHI* a1)
		{
			return ((::System::Boolean(*)(::EGFIGBODMHI*))((::PBYTE)hIl2Cpp + EGFIGBODMHI_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::System::Boolean NHCFLDCDLCP(::EGFIGBODMHI* a1)
		{
			return ((::System::Boolean(*)(::EGFIGBODMHI*))((::PBYTE)hIl2Cpp + EGFIGBODMHI_NHCFLDCDLCP_OFFSET))(a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::OKLBEPJCBJG> EHICOCENCBL()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::OKLBEPJCBJG>(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFIGBODMHI_EHICOCENCBL_OFFSET))(this);
		}

		::System::Void DIMGOLFIMJA(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::OKLBEPJCBJG> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::OKLBEPJCBJG>))((::PBYTE)hIl2Cpp + EGFIGBODMHI_DIMGOLFIMJA_OFFSET))(this, a1);
		}

	};
