#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFEKGJBOPNE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ICNNNMANKEB_AKLPPFDOOKP_OFFSET UNITYSDK_OFFSET(0x16564A50)
#define ICNNNMANKEB_CBJJMMGDCKB_OFFSET UNITYSDK_OFFSET(0x16564660)
#define ICNNNMANKEB_FAMKKNANKCE_OFFSET UNITYSDK_OFFSET(0x16564930)
#define ICNNNMANKEB_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x16564680)
#define ICNNNMANKEB_PBBBEAFGFLI_OFFSET UNITYSDK_OFFSET(0x165648D0)
#define ICNNNMANKEB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x165647A0)
#define ICNNNMANKEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16564540)

inline static constexpr unsigned int ICNNNMANKEB_TypeDefinitionIndex = 50464;

class ICNNNMANKEB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HFEKGJBOPNE>* LLBCFGKNGMM; // 0x10
	::System::Collections::Generic::HashSet_1<::HFEKGJBOPNE>* EENADGHHDBL; // 0x18
	::System::Collections::Generic::Dictionary_2<::HFEKGJBOPNE, ::MoleMole::EntityHandle>* LCENBJBIEDC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNNNMANKEB__CTOR_OFFSET))(this);
	}

	::System::Int32 CBJJMMGDCKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNNNMANKEB_CBJJMMGDCKB_OFFSET))(this);
	}

	::System::Boolean KKFNPONHGEM(::HFEKGJBOPNE AFEPKCBCCAA, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean OADNJLGACNM)
	{
		return ((::System::Boolean(*)(::PVOID, ::HFEKGJBOPNE, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICNNNMANKEB_KKFNPONHGEM_OFFSET))(this, AFEPKCBCCAA, KECKGDFIALJ, OADNJLGACNM);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNNNMANKEB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean PBBBEAFGFLI(::HFEKGJBOPNE AFEPKCBCCAA)
	{
		return ((::System::Boolean(*)(::PVOID, ::HFEKGJBOPNE))((::PBYTE)hIl2Cpp + ICNNNMANKEB_PBBBEAFGFLI_OFFSET))(this, AFEPKCBCCAA);
	}

	::System::Boolean FAMKKNANKCE(::HFEKGJBOPNE AFEPKCBCCAA, ::MoleMole::EntityHandle& PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::HFEKGJBOPNE, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + ICNNNMANKEB_FAMKKNANKCE_OFFSET))(this, AFEPKCBCCAA, PHHDHIBOCKA);
	}

	::System::Boolean AKLPPFDOOKP(::HFEKGJBOPNE AFEPKCBCCAA, ::MoleMole::Battle::Entity*& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::HFEKGJBOPNE, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + ICNNNMANKEB_AKLPPFDOOKP_OFFSET))(this, AFEPKCBCCAA, KECKGDFIALJ);
	}
};
