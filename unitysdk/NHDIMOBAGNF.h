#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class OKPFLOFNBJC;

#define NHDIMOBAGNF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C299410)
#define NHDIMOBAGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0426B0)

inline static constexpr unsigned int NHDIMOBAGNF_TypeDefinitionIndex = 44511;

	class NHDIMOBAGNF : public ::System::Object
	{
	public:
		::OKPFLOFNBJC* NOHENFFNEIC; // 0x10
		::System::Boolean LNBPNHNJGKG; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 CEIFACBCNKE; // 0x1C
		::UnityEngine::Vector3 MJOLHEDKMGO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIMOBAGNF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIMOBAGNF_CLEAR_OFFSET))(this);
		}

	};
