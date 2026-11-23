#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define ABC_TECHART_INTERIORPLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x28E1500)

namespace ABC::TechArt
{
	inline static constexpr unsigned int InteriorPlane_TypeDefinitionIndex = 16371;

	class InteriorPlane : public ::System::Object
	{
	public:
		::System::Single Depth; // 0x10
		::UnityEngine::Vector2 Center; // 0x14
		::UnityEngine::Vector2 Size; // 0x1C
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* Tex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_INTERIORPLANE__CTOR_OFFSET))(this);
		}
	};
}
