#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGKCEBCGJCP.h"

class KGMEJEFGJOK;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HKLELDDOCBE_DFPHILJHFOE_OFFSET UNITYSDK_OFFSET(0x15DC0550)
#define HKLELDDOCBE_FOEJBIHFDMG_OFFSET UNITYSDK_OFFSET(0x15DC0170)
#define HKLELDDOCBE_KEDGMMFIOBJ_OFFSET UNITYSDK_OFFSET(0x15DC04C0)
#define HKLELDDOCBE_KLOPBEHGPHH_OFFSET UNITYSDK_OFFSET(0x15DC00D0)
#define HKLELDDOCBE_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x15DBFD90)
#define HKLELDDOCBE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBFD80)

inline static constexpr unsigned int HKLELDDOCBE_TypeDefinitionIndex = 88108;

class HKLELDDOCBE : public ::BGKCEBCGJCP
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* MDJBHMHJACO; // 0x18

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF, ::Il2CppArray<::System::Int32>* NMHLMLBMCML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HKLELDDOCBE__CTOR_OFFSET))(this, MGMDLMBEDJF, NMHLMLBMCML);
	}

	::System::Void OMMICIJCCKB(::KGMEJEFGJOK* LDNCGMNHANO)
	{
		return ((::System::Void(*)(::PVOID, ::KGMEJEFGJOK*))((::PBYTE)hIl2Cpp + HKLELDDOCBE_OMMICIJCCKB_OFFSET))(this, LDNCGMNHANO);
	}

	::System::Void KLOPBEHGPHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLELDDOCBE_KLOPBEHGPHH_OFFSET))(this);
	}

	::System::Void FOEJBIHFDMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLELDDOCBE_FOEJBIHFDMG_OFFSET))(this);
	}

	::System::Void KEDGMMFIOBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLELDDOCBE_KEDGMMFIOBJ_OFFSET))(this);
	}

	::System::Void DFPHILJHFOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLELDDOCBE_DFPHILJHFOE_OFFSET))(this);
	}
};
