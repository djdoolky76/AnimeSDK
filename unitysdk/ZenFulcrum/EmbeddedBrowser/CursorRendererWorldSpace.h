#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/CursorRendererBase.h"

namespace UnityEngine { class GameObject; }
namespace ZenFulcrum::EmbeddedBrowser { class PointerUIBase; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x44083C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_E4983C0797AE3A5D_OFFSET UNITYSDK_OFFSET(0x4407FC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x4408200)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x4407C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x4408430)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererWorldSpace_TypeDefinitionIndex = 19566;

	class CursorRendererWorldSpace : public ::ZenFulcrum::EmbeddedBrowser::CursorRendererBase
	{
	public:
		::System::Single zOffset; // 0x28
		::System::Single size; // 0x2C
		::UnityEngine::GameObject* F4E8B9C15EBEAB44; // 0x30
		::UnityEngine::GameObject* AC31B03299BB459E; // 0x38
		::ZenFulcrum::EmbeddedBrowser::PointerUIBase* EB0DD60BC8B56934; // 0x40
		::System::Boolean E555D88418DC83E3; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE__CTOR_OFFSET))(this);
		}

		::System::Void E4983C0797AE3A5D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_E4983C0797AE3A5D_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_F5E407B60CCCAC07_OFFSET))(this);
		}
	};
}
