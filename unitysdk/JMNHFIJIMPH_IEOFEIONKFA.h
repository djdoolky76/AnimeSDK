#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMNHFIJIMPH;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define JMNHFIJIMPH_IEOFEIONKFA_GMECMNIEHGF_OFFSET UNITYSDK_OFFSET(0x157D1A20)
#define JMNHFIJIMPH_IEOFEIONKFA__CTOR_OFFSET UNITYSDK_OFFSET(0x157D1A10)

inline static constexpr unsigned int JMNHFIJIMPH_IEOFEIONKFA_TypeDefinitionIndex = 60019;

class JMNHFIJIMPH_IEOFEIONKFA : public ::System::Object
{
public:
	::System::Action_1<::OAEFGCLEHHO*>* JDDPNNOLFBF; // 0x10
	::System::Action_1<::System::Action*>* MIAJMBPCOMB; // 0x18
	::JMNHFIJIMPH* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_IEOFEIONKFA__CTOR_OFFSET))(this);
	}

	::System::Void GMECMNIEHGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_IEOFEIONKFA_GMECMNIEHGF_OFFSET))(this);
	}
};
