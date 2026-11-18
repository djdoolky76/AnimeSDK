#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class JIJIOFBMFAJ;
class POIIFHGGGLB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DNIEKELALEM_KONFICAKCPK_OFFSET UNITYSDK_OFFSET(0x12092D20)
#define DNIEKELALEM_MIKNHBIEDMG_OFFSET UNITYSDK_OFFSET(0x120933C0)
#define DNIEKELALEM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12092E70)
#define DNIEKELALEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12092D10)

inline static constexpr unsigned int DNIEKELALEM_TypeDefinitionIndex = 68399;

class DNIEKELALEM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JIJIOFBMFAJ*>* LBJAHHEBFKG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIEKELALEM__CTOR_OFFSET))(this);
	}

	::System::Void KONFICAKCPK(::System::Int32 HBJOLKHGGDD, ::JIJIOFBMFAJ* FDHBKELHABH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::JIJIOFBMFAJ*))((::PBYTE)hIl2Cpp + DNIEKELALEM_KONFICAKCPK_OFFSET))(this, HBJOLKHGGDD, FDHBKELHABH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIEKELALEM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MIKNHBIEDMG(::MoleMole::Vector2Int IKNOCMOCLIL, ::POIIFHGGGLB*& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int, ::POIIFHGGGLB*&))((::PBYTE)hIl2Cpp + DNIEKELALEM_MIKNHBIEDMG_OFFSET))(this, IKNOCMOCLIL, HMMMOCJAEOA);
	}
};
