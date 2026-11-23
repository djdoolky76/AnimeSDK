#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/UI/MonoUIView.h"

namespace UnityEngine { class Camera; }

#define ABC_UI_MONOUI3DVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUI3DView_TypeDefinitionIndex = 7644;

	class MonoUI3DView : public ::ABC::UI::MonoUIView
	{
	public:
		::UnityEngine::Camera* UICamera; // 0x90
		::System::UInt32 RootConfigID; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUI3DVIEW__CTOR_OFFSET))(this);
		}
	};
}
