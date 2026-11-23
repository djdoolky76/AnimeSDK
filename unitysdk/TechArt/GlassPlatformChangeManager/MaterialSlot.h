#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TechArt::GlassPlatformChangeManager { class GlassMaterialData; }
namespace UnityEngine { class Material; }

#define TECHART_GLASSPLATFORMCHANGEMANAGER_MATERIALSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TechArt::GlassPlatformChangeManager
{
	inline static constexpr unsigned int MaterialSlot_TypeDefinitionIndex = 16003;

	class MaterialSlot : public ::System::Object
	{
	public:
		::System::Int32 slotIndex; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* pcMaterial; // 0x18
		::UnityEngine::Material* mobileMaterial; // 0x20
		::System::Boolean pcLocked; // 0x28
		::System::Byte _padding1[0x7];
		::TechArt::GlassPlatformChangeManager::GlassMaterialData* parentData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_GLASSPLATFORMCHANGEMANAGER_MATERIALSLOT__CTOR_OFFSET))(this);
		}
	};
}
