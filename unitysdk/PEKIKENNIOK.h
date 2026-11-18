#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEKIKENNIOK_MFJKCJJDLFE_OFFSET UNITYSDK_OFFSET(0x11975440)
#define PEKIKENNIOK_PODBAENEKKP_OFFSET UNITYSDK_OFFSET(0x119752A0)
#define PEKIKENNIOK__CTOR_OFFSET UNITYSDK_OFFSET(0x11975220)

inline static constexpr unsigned int PEKIKENNIOK_TypeDefinitionIndex = 38886;

class PEKIKENNIOK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Action_1<::System::Single>*>* GJEFGEMPPKF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKIKENNIOK__CTOR_OFFSET))(this);
	}

	::System::Boolean PODBAENEKKP(::System::Single BEMODPLCCGM, ::System::Single NGNPAOLIJCM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PEKIKENNIOK_PODBAENEKKP_OFFSET))(this, BEMODPLCCGM, NGNPAOLIJCM);
	}

	::System::Void MFJKCJJDLFE(::System::Action_1<::System::Single>* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + PEKIKENNIOK_MFJKCJJDLFE_OFFSET))(this, DMPEOJCCCLO);
	}
};
