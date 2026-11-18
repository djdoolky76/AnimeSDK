#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMNHEJENAHA.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/BMKHHMCEBFA.h"

class KGBFLHNJHHN;

#define MEKACGJBPGE_DKMCJDJEMCD_OFFSET UNITYSDK_OFFSET(0x1C177820)
#define MEKACGJBPGE_DPIKODBJEBA_OFFSET UNITYSDK_OFFSET(0x1C177860)
#define MEKACGJBPGE_EDCHHGIPABE_OFFSET UNITYSDK_OFFSET(0x1C177B60)
#define MEKACGJBPGE_ENCAFIAMHII_OFFSET UNITYSDK_OFFSET(0x1C177990)
#define MEKACGJBPGE_EPLPIGGEACB_OFFSET UNITYSDK_OFFSET(0x1C177A00)
#define MEKACGJBPGE_GPEPEOHEDBI_OFFSET UNITYSDK_OFFSET(0x1C177850)
#define MEKACGJBPGE_JKFOGDAFION_OFFSET UNITYSDK_OFFSET(0x1C177770)
#define MEKACGJBPGE_MLKPODCFMPI_OFFSET UNITYSDK_OFFSET(0x1C177B90)
#define MEKACGJBPGE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C177AB0)
#define MEKACGJBPGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C177810)
#define MEKACGJBPGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C177780)

inline static constexpr unsigned int MEKACGJBPGE_TypeDefinitionIndex = 16415;

class MEKACGJBPGE : public ::BMNHEJENAHA
{
public:
	static ::System::Int32* StaticGet_JHBEJMEGLNJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MEKACGJBPGE_TypeDefinitionIndex)->GetStaticField(0x3E60);
	}
	::Il2CppArray<::System::Int32>* _GADIBNOADAE_k__BackingField; // 0x190

	::System::Void _ctor(::BMKHHMCEBFA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BMKHHMCEBFA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MEKACGJBPGE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKACGJBPGE__CCTOR_OFFSET))();
	}

	::Il2CppArray<::System::Int32>* JKFOGDAFION()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKACGJBPGE_JKFOGDAFION_OFFSET))(this);
	}

	::System::Boolean DKMCJDJEMCD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKACGJBPGE_DKMCJDJEMCD_OFFSET))(this);
	}

	::System::Boolean DPIKODBJEBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKACGJBPGE_DPIKODBJEBA_OFFSET))(this);
	}

	::System::Int32 ENCAFIAMHII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKACGJBPGE_ENCAFIAMHII_OFFSET))(this);
	}

	::System::Boolean EPLPIGGEACB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKACGJBPGE_EPLPIGGEACB_OFFSET))(this);
	}

	::Share::EHollowQuestType GPEPEOHEDBI()
	{
		return ((::Share::EHollowQuestType(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKACGJBPGE_GPEPEOHEDBI_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKACGJBPGE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Boolean EDCHHGIPABE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKACGJBPGE_EDCHHGIPABE_OFFSET))(this);
	}

	::System::Boolean MLKPODCFMPI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKACGJBPGE_MLKPODCFMPI_OFFSET))(this);
	}
};
