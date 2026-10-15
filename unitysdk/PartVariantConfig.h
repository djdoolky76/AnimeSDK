#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }

#define PARTVARIANTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEAA30)

inline static constexpr unsigned int PartVariantConfig_TypeDefinitionIndex = 37472;

	class PartVariantConfig : public ::System::Object
	{
	public:
		::System::Int32 lod; // 0x10
		::System::Int32 partIndex; // 0x14
		::System::Int32 variantIndex; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* matOverride; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTVARIANTCONFIG_CTOR_OFFSET))(this);
		}

	};
