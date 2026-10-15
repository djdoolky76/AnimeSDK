#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JPCONPIKIEK.h"
class HFBBHPCFNOA;
class LELCKJPOPAO;
namespace RPG::GameCore { class MeshBound; }
namespace System { class Object; }

#define HFBBHPCFNOA_AECLJDFMIGG_OFFSET UNITYSDK_OFFSET(0x1CE9D000)
#define HFBBHPCFNOA_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CE9CB40)
#define HFBBHPCFNOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9D840)
#define HFBBHPCFNOA_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x1CE9C950)
#define HFBBHPCFNOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE9C780)
#define HFBBHPCFNOA_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CE9C940)
#define HFBBHPCFNOA_DPBJECFPPKO_OFFSET UNITYSDK_OFFSET(0x1CE9D480)
#define HFBBHPCFNOA_EFDEKBBHBJH_OFFSET UNITYSDK_OFFSET(0x1CE9D050)
#define HFBBHPCFNOA_EIAACBNMJNN_OFFSET UNITYSDK_OFFSET(0x1CE9D610)
#define HFBBHPCFNOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE9CA10)
#define HFBBHPCFNOA_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CE9C790)
#define HFBBHPCFNOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE9CB20)
#define HFBBHPCFNOA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CE9C6B0)
#define HFBBHPCFNOA_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1CE9C760)
#define HFBBHPCFNOA_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1CE9C770)
#define HFBBHPCFNOA_INIT_OFFSET UNITYSDK_OFFSET(0x1CE9C6A0)
#define HFBBHPCFNOA_JJHEGNEJACO_OFFSET UNITYSDK_OFFSET(0x1CE9CE80)
#define HFBBHPCFNOA_JOCIMKJAMLC_OFFSET UNITYSDK_OFFSET(0x1CE9D7F0)
#define HFBBHPCFNOA_KJHDIEKGDNO_OFFSET UNITYSDK_OFFSET(0x1CE9D430)
#define HFBBHPCFNOA_MCOOBPAJKHD_OFFSET UNITYSDK_OFFSET(0x1CE9CCC0)
#define HFBBHPCFNOA_NBIHODEBNOB_OFFSET UNITYSDK_OFFSET(0x1CE9D660)
#define HFBBHPCFNOA_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CE9CC00)
#define HFBBHPCFNOA_PHACMMEBHLB_OFFSET UNITYSDK_OFFSET(0x1CE9CE30)

inline static constexpr unsigned int HFBBHPCFNOA_TypeDefinitionIndex = 10648;

	class HFBBHPCFNOA : public ::System::Object
	{
	public:
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_CTOR_OFFSET))(this);
		}

		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::HFBBHPCFNOA* a1, ::HFBBHPCFNOA* a2)
		{
			return ((::System::Boolean(*)(::HFBBHPCFNOA*, ::HFBBHPCFNOA*))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::HFBBHPCFNOA* a1, ::HFBBHPCFNOA* a2)
		{
			return ((::System::Boolean(*)(::HFBBHPCFNOA*, ::HFBBHPCFNOA*))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::Boolean DGCGLNOLDIB(::HFBBHPCFNOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFBBHPCFNOA*))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean BBNJCKPKPDN(::HFBBHPCFNOA* a1)
		{
			return ((::System::Boolean(*)(::HFBBHPCFNOA*))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::System::Boolean NHCFLDCDLCP(::HFBBHPCFNOA* a1)
		{
			return ((::System::Boolean(*)(::HFBBHPCFNOA*))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_NHCFLDCDLCP_OFFSET))(a1);
		}

		::System::Single MCOOBPAJKHD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_MCOOBPAJKHD_OFFSET))(this);
		}

		::System::Void PHACMMEBHLB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_PHACMMEBHLB_OFFSET))(this, a1);
		}

		::System::Single JJHEGNEJACO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_JJHEGNEJACO_OFFSET))(this);
		}

		::System::Void AECLJDFMIGG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_AECLJDFMIGG_OFFSET))(this, a1);
		}

		::RPG::GameCore::MeshBound* EFDEKBBHBJH()
		{
			return ((::RPG::GameCore::MeshBound*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_EFDEKBBHBJH_OFFSET))(this);
		}

		::System::Void KJHDIEKGDNO(::RPG::GameCore::MeshBound* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_KJHDIEKGDNO_OFFSET))(this, a1);
		}

		::JPCONPIKIEK DPBJECFPPKO()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_DPBJECFPPKO_OFFSET))(this);
		}

		::System::Void EIAACBNMJNN(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_EIAACBNMJNN_OFFSET))(this, a1);
		}

		::JPCONPIKIEK NBIHODEBNOB()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_NBIHODEBNOB_OFFSET))(this);
		}

		::System::Void JOCIMKJAMLC(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + HFBBHPCFNOA_JOCIMKJAMLC_OFFSET))(this, a1);
		}

	};
