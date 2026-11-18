#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AAAPLPDBHPL_DHBAKIEKJIJ_OFFSET UNITYSDK_OFFSET(0x12CCEE60)
#define AAAPLPDBHPL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12CCF220)
#define AAAPLPDBHPL__CTOR_OFFSET UNITYSDK_OFFSET(0x12CCEDD0)

inline static constexpr unsigned int AAAPLPDBHPL_TypeDefinitionIndex = 90280;

class AAAPLPDBHPL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::HashSet_1<::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*>*>* EPALOMBLPOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAPLPDBHPL__CTOR_OFFSET))(this);
	}

	::System::Void DHBAKIEKJIJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AAAPLPDBHPL_DHBAKIEKJIJ_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAAPLPDBHPL_PHOADBJGFBE_OFFSET))(this);
	}
};
