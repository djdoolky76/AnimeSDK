#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/EA4F90BE4384F4B4.h"
#include "unitysdk/System/Object.h"

namespace TA::Iris { class IrisCloud; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define TA_IRIS_IRISRENDERINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x28E16E0)

namespace TA::Iris
{
	inline static constexpr unsigned int IrisRenderingContext_TypeDefinitionIndex = 16366;

	class IrisRenderingContext : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* Mesh; // 0x10
		::TA::Iris::IrisCloud* IrisCloud; // 0x18
		::UnityEngine::Material* Material; // 0x20
		::BDC595893C6EE433::EA4F90BE4384F4B4 CullMode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISRENDERINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
