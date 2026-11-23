#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AADD5B52CC71298E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E2974D7451932257__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2974D7451932257_TypeDefinitionIndex = 1919;

class E2974D7451932257 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AB642D1382756991*>* B1DF549D286AB9FD; // 0x10
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::AADD5B52CC71298E>* AFF083B1B28237B5; // 0x28
	::System::Boolean BA95BFABF4E0A476; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2974D7451932257__CTOR_OFFSET))(this);
	}
};
