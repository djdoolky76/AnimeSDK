#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SHAPEUTIL_GENERATESPHERE_OFFSET UNITYSDK_OFFSET(0x1ED87E40)
#define UNITYENGINE_NAPRENDERPIPELINE0_SHAPEUTIL_GENERATESPOTSHAPE_OFFSET UNITYSDK_OFFSET(0x1ED87DA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SHAPEUTIL_REGENERATESPOTSHAPE_OFFSET UNITYSDK_OFFSET(0x1ED87480)
#define UNITYENGINE_NAPRENDERPIPELINE0_SHAPEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED88720)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ShapeUtil_TypeDefinitionIndex = 6001;

	class ShapeUtil : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHAPEUTIL__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* ReGenerateSpotShape(::UnityEngine::Mesh* mesh, ::System::Single outAngle, ::System::Int32 segment)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHAPEUTIL_REGENERATESPOTSHAPE_OFFSET))(mesh, outAngle, segment);
		}

		static ::UnityEngine::Mesh* GenerateSpotShape(::System::Single outAngle, ::System::Int32 segment)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHAPEUTIL_GENERATESPOTSHAPE_OFFSET))(outAngle, segment);
		}

		static ::UnityEngine::Mesh* GenerateSphere(::System::Int32 segment)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SHAPEUTIL_GENERATESPHERE_OFFSET))(segment);
		}
	};
}
