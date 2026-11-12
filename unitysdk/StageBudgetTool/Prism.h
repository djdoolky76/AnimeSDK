#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define STAGEBUDGETTOOL_PRISM_COGBHPKMPJN_OFFSET UNITYSDK_OFFSET(0xF49FC90)
#define STAGEBUDGETTOOL_PRISM_CTOR_OFFSET UNITYSDK_OFFSET(0xF4A0200)
#define STAGEBUDGETTOOL_PRISM_HIMEMEDHMIP_OFFSET UNITYSDK_OFFSET(0xF49FB20)
#define STAGEBUDGETTOOL_PRISM_LLLMAKKABLA_OFFSET UNITYSDK_OFFSET(0xF49FAF0)

namespace StageBudgetTool
{
	inline static constexpr unsigned int Prism_TypeDefinitionIndex = 48747;

	class Prism : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* PrismPointList; // 0x10
		::System::Single PrismHeight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PRISM_CTOR_OFFSET))(this);
		}

		::System::Single LLLMAKKABLA(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PRISM_LLLMAKKABLA_OFFSET))(this, a1, a2);
		}

		::System::Boolean HIMEMEDHMIP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PRISM_HIMEMEDHMIP_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* COGBHPKMPJN()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PRISM_COGBHPKMPJN_OFFSET))(this);
		}

	};
}
