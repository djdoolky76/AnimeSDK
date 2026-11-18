#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::EffectSimulate { class NESUIDataCache; }
namespace System { class String; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Material; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIMatAnimBehavior_2_TypeDefinitionIndex = 78734;

	template <typename T1, typename T2>
	class ESUIMatAnimBehavior_2
	{
	public:
		::UnityEngine::CanvasRenderer* m_stCanvasRenderer; // 0x0
		::UnityEngine::Material* m_stMat; // 0x0
		::MoleMole::EffectSimulate::NESUIDataCache* m_stUIDataCache; // 0x0
		::System::String* propertyName; // 0x0
		::System::Boolean overrideMatBase; // 0x0
	};
}
