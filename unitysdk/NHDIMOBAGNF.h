#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class OKPFLOFNBJC;

#define NHDIMOBAGNF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C962190)
#define NHDIMOBAGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C962210)

inline static constexpr unsigned int NHDIMOBAGNF_TypeDefinitionIndex = 43529;

	class NHDIMOBAGNF : public ::System::Object
	{
	public:
		::OKPFLOFNBJC* NOHENFFNEIC; // 0x10
		::System::UInt32 CEIFACBCNKE; // 0x18
		::UnityEngine::Vector3 MJOLHEDKMGO; // 0x1C
		::System::Boolean LNBPNHNJGKG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIMOBAGNF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIMOBAGNF_CLEAR_OFFSET))(this);
		}

	};
