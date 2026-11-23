#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class A1762F3593A255C7;
namespace System::Collections { class IEnumerator; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_A7FAEED9D65B9195_OFFSET UNITYSDK_OFFSET(0x4407BB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x4407B30)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererBase_TypeDefinitionIndex = 19461;

	class CursorRendererBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::A1762F3593A255C7* A22AAAB5601EEDBA; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE__CTOR_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Collections::IEnumerator* A7FAEED9D65B9195()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERBASE_A7FAEED9D65B9195_OFFSET))(this);
		}
	};
}
