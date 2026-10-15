#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define DBLCHICFCLA_IOMEFFKGEGD_CTOR_OFFSET UNITYSDK_OFFSET(0xE22E730)

	class DBLCHICFCLA_IOMEFFKGEGD : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* KBEPAIAFLHL; // 0x10
		::UnityEngine::CanvasGroup* OCPOBLJMBNF; // 0x18
		::UnityEngine::Transform* DHIPFJBEJPI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCHICFCLA_IOMEFFKGEGD_CTOR_OFFSET))(this);
		}

	};
