#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKMDLAPFIPM__CTOR_OFFSET UNITYSDK_OFFSET(0x13269690)

inline static constexpr unsigned int CKMDLAPFIPM_TypeDefinitionIndex = 46453;

class CKMDLAPFIPM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* CMNLEILJGGE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMDLAPFIPM__CTOR_OFFSET))(this);
	}
};
