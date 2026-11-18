#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JCJHGBANDKO_OOMEJDFCLKP__CTOR_OFFSET UNITYSDK_OFFSET(0x160D9000)

inline static constexpr unsigned int JCJHGBANDKO_OOMEJDFCLKP_TypeDefinitionIndex = 85313;

class JCJHGBANDKO_OOMEJDFCLKP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::Vector2Int>* HEICNPAAFCM; // 0x10
	::UnityEngine::Vector2 ILOJFPNKJII; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJHGBANDKO_OOMEJDFCLKP__CTOR_OFFSET))(this);
	}
};
