#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialAnimationBinding; }

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialAnimationBindingSyncBehavior_FOKNGOAFNJH_TypeDefinitionIndex = 70293;

	struct alignas(8) MaterialAnimationBindingSyncBehavior_FOKNGOAFNJH
	{
		::UnityEngine::MaterialAnimationBinding* OFBKLIODDCP; // 0x10
		::System::Int32 MAMALDCMJDH; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* JFNEBEJFLAG; // 0x20
		::UnityEngine::Material* EJGNBFKFHGG; // 0x28
	};
}
