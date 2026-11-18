#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNJDDELLIAH_OCBLKAGGDDF;
namespace System { class Action; }

#define JNJDDELLIAH_MHGHMGFLHFN_KGCLKONINPA_OFFSET UNITYSDK_OFFSET(0x1874FBF0)
#define JNJDDELLIAH_MHGHMGFLHFN_PPJGODPPNAM_OFFSET UNITYSDK_OFFSET(0x1874FC00)
#define JNJDDELLIAH_MHGHMGFLHFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1874FBE0)

inline static constexpr unsigned int JNJDDELLIAH_MHGHMGFLHFN_TypeDefinitionIndex = 52352;

class JNJDDELLIAH_MHGHMGFLHFN : public ::System::Object
{
public:
	::JNJDDELLIAH_OCBLKAGGDDF* FGBNBFHOKAA; // 0x10
	::System::Int32 KPBHHCDEKHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_MHGHMGFLHFN__CTOR_OFFSET))(this);
	}

	::System::Void KGCLKONINPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_MHGHMGFLHFN_KGCLKONINPA_OFFSET))(this);
	}

	::System::Void PPJGODPPNAM(::System::Action* IIFJEHPIMNA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JNJDDELLIAH_MHGHMGFLHFN_PPJGODPPNAM_OFFSET))(this, IIFJEHPIMNA);
	}
};
