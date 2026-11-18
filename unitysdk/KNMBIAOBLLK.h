#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IILMGLCLKKF;
class MNGHPGONOEL;
namespace MoleMole { class ZenkovYokaiHenshinSubSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNMBIAOBLLK_ACGIECKHMMG_OFFSET UNITYSDK_OFFSET(0x199680B0)
#define KNMBIAOBLLK_EAKPAIFEABE_OFFSET UNITYSDK_OFFSET(0x19967A90)
#define KNMBIAOBLLK_GLEBNHPIFPP_OFFSET UNITYSDK_OFFSET(0x19968070)
#define KNMBIAOBLLK_KMDDLGCBGFO_OFFSET UNITYSDK_OFFSET(0x19968020)
#define KNMBIAOBLLK__CTOR_OFFSET UNITYSDK_OFFSET(0x199679F0)

inline static constexpr unsigned int KNMBIAOBLLK_TypeDefinitionIndex = 74304;

class KNMBIAOBLLK : public ::System::Object
{
public:
	// static const ::System::Int32 DOBMMCODONG = 0x4; // 0x0
	::MoleMole::ZenkovYokaiHenshinSubSystem* OINGMNOBBFF; // 0x10
	::System::Collections::Generic::List_1<::MNGHPGONOEL*>* ODMBBCPLDGE; // 0x18
	::IILMGLCLKKF* HCPLHCCLLGA; // 0x20
	::System::Boolean IANHKOLCODN; // 0x28

	::System::Void _ctor(::MoleMole::ZenkovYokaiHenshinSubSystem* AEGPAMIKIAO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ZenkovYokaiHenshinSubSystem*))((::PBYTE)hIl2Cpp + KNMBIAOBLLK__CTOR_OFFSET))(this, AEGPAMIKIAO);
	}

	::System::Void KMDDLGCBGFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMBIAOBLLK_KMDDLGCBGFO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MNGHPGONOEL*>* GLEBNHPIFPP()
	{
		return ((::System::Collections::Generic::List_1<::MNGHPGONOEL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMBIAOBLLK_GLEBNHPIFPP_OFFSET))(this);
	}

	::System::Void EAKPAIFEABE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMBIAOBLLK_EAKPAIFEABE_OFFSET))(this);
	}

	::IILMGLCLKKF* ACGIECKHMMG()
	{
		return ((::IILMGLCLKKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMBIAOBLLK_ACGIECKHMMG_OFFSET))(this);
	}
};
