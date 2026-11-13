#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLIECFICBEN;
namespace UnityEngine { class GameObject; }

#define LADDMABGGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D638210)

inline static constexpr unsigned int LADDMABGGBP_TypeDefinitionIndex = 44729;

	class LADDMABGGBP : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* NOAKFGCHOOA; // 0x10
		::CLIECFICBEN* MMMNJAKEPML; // 0x18
		::System::Int32 EPFGEICIJEB; // 0x20
		::System::Int32 CJKCEGKGGCL; // 0x24
		::System::Boolean DMBNLMEKBJA; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 INHFPIMOJEP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LADDMABGGBP_CTOR_OFFSET))(this);
		}

	};
