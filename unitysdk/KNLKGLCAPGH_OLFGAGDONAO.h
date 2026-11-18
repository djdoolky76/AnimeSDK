#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_OLFGAGDONAO_POIGNOIDCBK_OFFSET UNITYSDK_OFFSET(0x1791A2E0)
#define KNLKGLCAPGH_OLFGAGDONAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A2D0)

inline static constexpr unsigned int KNLKGLCAPGH_OLFGAGDONAO_TypeDefinitionIndex = 41115;

class KNLKGLCAPGH_OLFGAGDONAO : public ::System::Object
{
public:
	::System::Action* NGFDBMGHFCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_OLFGAGDONAO__CTOR_OFFSET))(this);
	}

	::System::Void POIGNOIDCBK(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_OLFGAGDONAO_POIGNOIDCBK_OFFSET))(this, GLAOEHCGCFO);
	}
};
