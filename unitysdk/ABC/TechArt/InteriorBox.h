#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ABC_TECHART_INTERIORBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x28B7DC0)

namespace ABC::TechArt
{
	inline static constexpr unsigned int InteriorBox_TypeDefinitionIndex = 16265;

	class InteriorBox : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Center; // 0x10
		::UnityEngine::Vector3 Rotation; // 0x1C
		::UnityEngine::Vector3 Size; // 0x28
		::System::Int32 AtlasID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_INTERIORBOX__CTOR_OFFSET))(this);
		}
	};
}
