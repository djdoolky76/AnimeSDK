#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
#include "unitysdk/RPG/GameCore/LevelDimensionBakedInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavGraphInfo.h"
#include "unitysdk/RPG/GameCore/LevelRotatableBakedInfo.h"
class FHNIMGBMPLN;
class LELCKJPOPAO;
namespace RPG::GameCore { class PerFloorConflictRelativeMissionBakedData; }
namespace System { class Object; }

#define FHNIMGBMPLN_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CDF1AB0)
#define FHNIMGBMPLN_BCBJEPGIINF_OFFSET UNITYSDK_OFFSET(0x1CDF15C0)
#define FHNIMGBMPLN_BJAMOCFLMCE_OFFSET UNITYSDK_OFFSET(0x1CDF2350)
#define FHNIMGBMPLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF28F0)
#define FHNIMGBMPLN_DDAJIPEPCHG_OFFSET UNITYSDK_OFFSET(0x1CDF24E0)
#define FHNIMGBMPLN_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x1CDF18C0)
#define FHNIMGBMPLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CDF15A0)
#define FHNIMGBMPLN_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CDF18B0)
#define FHNIMGBMPLN_EBHOJBEGBIH_OFFSET UNITYSDK_OFFSET(0x1CDF28A0)
#define FHNIMGBMPLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CDF1980)
#define FHNIMGBMPLN_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CDF1700)
#define FHNIMGBMPLN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CDF15D0)
#define FHNIMGBMPLN_FKIDPOJMCGO_OFFSET UNITYSDK_OFFSET(0x1CDF2530)
#define FHNIMGBMPLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CDF1A90)
#define FHNIMGBMPLN_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CDF14D0)
#define FHNIMGBMPLN_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1CDF1580)
#define FHNIMGBMPLN_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1CDF1590)
#define FHNIMGBMPLN_HCPALAIMDLN_OFFSET UNITYSDK_OFFSET(0x1CDF2170)
#define FHNIMGBMPLN_HDFJBBNEBAM_OFFSET UNITYSDK_OFFSET(0x1CDF2710)
#define FHNIMGBMPLN_ICNGBHECJAH_OFFSET UNITYSDK_OFFSET(0x1CDF15B0)
#define FHNIMGBMPLN_IDKPJEGEPJL_OFFSET UNITYSDK_OFFSET(0x1CDF1DA0)
#define FHNIMGBMPLN_INIT_OFFSET UNITYSDK_OFFSET(0x1CDF14C0)
#define FHNIMGBMPLN_JNHMGPHLCFL_OFFSET UNITYSDK_OFFSET(0x1CDF1DF0)
#define FHNIMGBMPLN_JPEDANEHPAG_OFFSET UNITYSDK_OFFSET(0x1CDF2120)
#define FHNIMGBMPLN_NGANIGFNFJH_OFFSET UNITYSDK_OFFSET(0x1CDF2300)
#define FHNIMGBMPLN_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CDF1B70)
#define FHNIMGBMPLN_OJDPDKPFOFD_OFFSET UNITYSDK_OFFSET(0x1CDF1C30)
#define FHNIMGBMPLN_OPLEDDAODKL_OFFSET UNITYSDK_OFFSET(0x1CDF26C0)

inline static constexpr unsigned int FHNIMGBMPLN_TypeDefinitionIndex = 10712;

	class FHNIMGBMPLN : public ::System::Object
	{
	public:
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::Boolean CLKPCMIPJOE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 IKKNJMJCDOJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_CTOR_OFFSET))(this);
		}

		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_DISPOSE_OFFSET))(this);
		}

		::System::Boolean ICNGBHECJAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_ICNGBHECJAH_OFFSET))(this);
		}

		::System::Void BCBJEPGIINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_BCBJEPGIINF_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_FINALIZE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::FHNIMGBMPLN* a1, ::FHNIMGBMPLN* a2)
		{
			return ((::System::Boolean(*)(::FHNIMGBMPLN*, ::FHNIMGBMPLN*))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::FHNIMGBMPLN* a1, ::FHNIMGBMPLN* a2)
		{
			return ((::System::Boolean(*)(::FHNIMGBMPLN*, ::FHNIMGBMPLN*))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::Boolean DGCGLNOLDIB(::FHNIMGBMPLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHNIMGBMPLN*))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean BBNJCKPKPDN(::FHNIMGBMPLN* a1)
		{
			return ((::System::Boolean(*)(::FHNIMGBMPLN*))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::System::Boolean NHCFLDCDLCP(::FHNIMGBMPLN* a1)
		{
			return ((::System::Boolean(*)(::FHNIMGBMPLN*))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_NHCFLDCDLCP_OFFSET))(a1);
		}

		::System::Boolean OJDPDKPFOFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_OJDPDKPFOFD_OFFSET))(this);
		}

		::System::Void IDKPJEGEPJL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_IDKPJEGEPJL_OFFSET))(this, a1);
		}

		::RPG::GameCore::PerFloorConflictRelativeMissionBakedData* JNHMGPHLCFL()
		{
			return ((::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_JNHMGPHLCFL_OFFSET))(this);
		}

		::System::Void JPEDANEHPAG(::RPG::GameCore::PerFloorConflictRelativeMissionBakedData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_JPEDANEHPAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelDimensionBakedInfo> HCPALAIMDLN()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelDimensionBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_HCPALAIMDLN_OFFSET))(this);
		}

		::System::Void NGANIGFNFJH(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelDimensionBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelDimensionBakedInfo>))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_NGANIGFNFJH_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNavGraphInfo BJAMOCFLMCE()
		{
			return ((::RPG::GameCore::LevelNavGraphInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_BJAMOCFLMCE_OFFSET))(this);
		}

		::System::Void DDAJIPEPCHG(::RPG::GameCore::LevelNavGraphInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavGraphInfo))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_DDAJIPEPCHG_OFFSET))(this, a1);
		}

		::JPCONPIKIEK FKIDPOJMCGO()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_FKIDPOJMCGO_OFFSET))(this);
		}

		::System::Void OPLEDDAODKL(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_OPLEDDAODKL_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelRotatableBakedInfo HDFJBBNEBAM()
		{
			return ((::RPG::GameCore::LevelRotatableBakedInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_HDFJBBNEBAM_OFFSET))(this);
		}

		::System::Void EBHOJBEGBIH(::RPG::GameCore::LevelRotatableBakedInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRotatableBakedInfo))((::PBYTE)hIl2Cpp + FHNIMGBMPLN_EBHOJBEGBIH_OFFSET))(this, a1);
		}

	};
