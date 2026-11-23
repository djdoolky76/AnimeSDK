#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/A3BDB876410128CC.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_CALCULATEINDEXFORMAT_OFFSET UNITYSDK_OFFSET(0x37FD610)
#define HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_SETFORMATFORMESH_OFFSET UNITYSDK_OFFSET(0x37FD680)
#define HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MeshIndexFormat_TypeDefinitionIndex = 17852;

	class HEU_MeshIndexFormat : public ::System::Object
	{
	public:
		::BDC595893C6EE433::A3BDB876410128CC _indexFormat; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT__CTOR_OFFSET))(this);
		}

		::System::Void SetFormatForMesh(::UnityEngine::Mesh* FF762A0FE86505A5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_SETFORMATFORMESH_OFFSET))(this, FF762A0FE86505A5);
		}

		::System::Void CalculateIndexFormat(::System::Int32 F1AEEF53D342D1DE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_CALCULATEINDEXFORMAT_OFFSET))(this, F1AEEF53D342D1DE);
		}
	};
}
