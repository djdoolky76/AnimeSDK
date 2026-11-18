#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define FMPEMEANLPJ_ONJCBLAMHJF_DNLDFDOKKLK_OFFSET UNITYSDK_OFFSET(0x156CCCC0)
#define FMPEMEANLPJ_ONJCBLAMHJF__CTOR_OFFSET UNITYSDK_OFFSET(0x156CCCB0)

inline static constexpr unsigned int FMPEMEANLPJ_ONJCBLAMHJF_TypeDefinitionIndex = 62190;

class FMPEMEANLPJ_ONJCBLAMHJF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* NEHIDKKIDGL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPEMEANLPJ_ONJCBLAMHJF__CTOR_OFFSET))(this);
	}

	::System::Boolean DNLDFDOKKLK(::UnityEngine::Collider* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FMPEMEANLPJ_ONJCBLAMHJF_DNLDFDOKKLK_OFFSET))(this, CBLGCIFLMKL);
	}
};
