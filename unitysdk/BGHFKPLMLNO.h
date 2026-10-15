#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define BGHFKPLMLNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB188C70)

inline static constexpr unsigned int BGHFKPLMLNO_TypeDefinitionIndex = 47436;

	class BGHFKPLMLNO : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Single PJKFLONMKED; // 0x10
		::System::Single ENMIPOPKOOL; // 0x14
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGHFKPLMLNO_CTOR_OFFSET))(this, a1, a2);
		}

	};
