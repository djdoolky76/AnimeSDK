#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define AMPBHGILOFP_KJGMAALDEBG_FFKHGPLJHMP_OFFSET UNITYSDK_OFFSET(0x17008760)
#define AMPBHGILOFP_KJGMAALDEBG__CTOR_OFFSET UNITYSDK_OFFSET(0x17008750)

inline static constexpr unsigned int AMPBHGILOFP_KJGMAALDEBG_TypeDefinitionIndex = 77700;

class AMPBHGILOFP_KJGMAALDEBG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* JBDHABBECAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPBHGILOFP_KJGMAALDEBG__CTOR_OFFSET))(this);
	}

	::System::Boolean FFKHGPLJHMP(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AMPBHGILOFP_KJGMAALDEBG_FFKHGPLJHMP_OFFSET))(this, EHHHMFKHNAI);
	}
};
