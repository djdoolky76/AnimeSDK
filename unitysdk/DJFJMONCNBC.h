#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENHHCBBAADE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/CDLDPAPIAEB.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class PANMLGKNLIK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJFJMONCNBC_AFJIABILNJC_OFFSET UNITYSDK_OFFSET(0x18343E30)
#define DJFJMONCNBC_BBIPDKDDCFN_1_OFFSET UNITYSDK_OFFSET(0x18343A30)
#define DJFJMONCNBC_BBIPDKDDCFN_OFFSET UNITYSDK_OFFSET(0x18343E70)
#define DJFJMONCNBC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x18344350)
#define DJFJMONCNBC_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x18343810)
#define DJFJMONCNBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18343D70)
#define DJFJMONCNBC__CTOR_OFFSET UNITYSDK_OFFSET(0x18343700)

inline static constexpr unsigned int DJFJMONCNBC_TypeDefinitionIndex = 55331;

class DJFJMONCNBC : public ::ENHHCBBAADE
{
public:
	::PANMLGKNLIK* EKDBNPKAMLL; // 0x20
	::MoleMole::EntityHandle JONDJEMFHMK; // 0x28

	::System::Void _ctor(::MoleMole::EntityHandle& MDIIBHFCPGO, ::System::Collections::Generic::List_1<::System::String*>*& NINIIJAJNCA, ::System::Int32& FBNGKPGLADH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle&, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + DJFJMONCNBC__CTOR_OFFSET))(this, MDIIBHFCPGO, NINIIJAJNCA, FBNGKPGLADH);
	}

	::System::Boolean MJFHPEBFAID(::MoleMole::Battle::Entity*& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + DJFJMONCNBC_MJFHPEBFAID_OFFSET))(this, KECKGDFIALJ);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFJMONCNBC_TOSTRING_OFFSET))(this);
	}

	::System::Void AFJIABILNJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFJMONCNBC_AFJIABILNJC_OFFSET))(this);
	}

	::System::Boolean BBIPDKDDCFN(::UnityEngine::RaycastHit& OFLHPPDJLNL, ::PANMLGKNLIK*& FDGOJKAHAIF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::PANMLGKNLIK*&))((::PBYTE)hIl2Cpp + DJFJMONCNBC_BBIPDKDDCFN_OFFSET))(this, OFLHPPDJLNL, FDGOJKAHAIF);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFJMONCNBC_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean BBIPDKDDCFN_1(::CDLDPAPIAEB& LFCGMIKHGHI, ::PANMLGKNLIK*& FDGOJKAHAIF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CDLDPAPIAEB&, ::PANMLGKNLIK*&))((::PBYTE)hIl2Cpp + DJFJMONCNBC_BBIPDKDDCFN_1_OFFSET))(this, LFCGMIKHGHI, FDGOJKAHAIF);
	}
};
