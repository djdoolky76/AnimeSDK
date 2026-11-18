#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHJGMDOABJE.h"
#include "unitysdk/BGDCIMONJIP.h"
#include "unitysdk/OCNLBFOPMEK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class OGADKOBJHJL;
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCHBIKAMIMC_DNAKEIJEHJO_OFFSET UNITYSDK_OFFSET(0x17E34F90)
#define HCHBIKAMIMC_HKGNEFLBHNM_OFFSET UNITYSDK_OFFSET(0x17E34F40)
#define HCHBIKAMIMC_INOKFEPEEDJ_OFFSET UNITYSDK_OFFSET(0x17E35170)
#define HCHBIKAMIMC_NPMOACHJNBM_OFFSET UNITYSDK_OFFSET(0x17E35210)
#define HCHBIKAMIMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E358C0)
#define HCHBIKAMIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x17E34F50)

inline static constexpr unsigned int HCHBIKAMIMC_TypeDefinitionIndex = 41692;

class HCHBIKAMIMC : public ::BGDCIMONJIP
{
public:
	static ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>** StaticGet_HAFDIMGJBHC()
	{
		return (::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(HCHBIKAMIMC_TypeDefinitionIndex)->GetStaticField(0x46420);
	}
	::OGADKOBJHJL* FGLPLDCILIK; // 0x50
	::AHJGMDOABJE GBBGOPBGONM; // 0x58
	::System::Int32 HEINEACGCAF; // 0x5C

	::System::Void _ctor(::System::UInt32 DPNKDGJLKFC, ::System::UInt32 DBNFCLEJONF, ::System::Int32 LNJFKBBFABK, ::AHJGMDOABJE BHKMKKIKFEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::AHJGMDOABJE))((::PBYTE)hIl2Cpp + HCHBIKAMIMC__CTOR_OFFSET))(this, DPNKDGJLKFC, DBNFCLEJONF, LNJFKBBFABK, BHKMKKIKFEK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCHBIKAMIMC__CCTOR_OFFSET))();
	}

	::OCNLBFOPMEK HKGNEFLBHNM()
	{
		return ((::OCNLBFOPMEK(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHBIKAMIMC_HKGNEFLBHNM_OFFSET))(this);
	}

	::System::Void DNAKEIJEHJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHBIKAMIMC_DNAKEIJEHJO_OFFSET))(this);
	}

	::System::Void INOKFEPEEDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHBIKAMIMC_INOKFEPEEDJ_OFFSET))(this);
	}

	::System::Void NPMOACHJNBM(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& GGPMCEEHFOH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&))((::PBYTE)hIl2Cpp + HCHBIKAMIMC_NPMOACHJNBM_OFFSET))(this, GGPMCEEHFOH);
	}
};
