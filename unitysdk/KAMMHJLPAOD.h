#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define KAMMHJLPAOD_OOADMFBFOAD_OFFSET UNITYSDK_OFFSET(0x152B9DC0)
#define KAMMHJLPAOD_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0x152B9D60)
#define KAMMHJLPAOD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152B9AC0)
#define KAMMHJLPAOD__CTOR_OFFSET UNITYSDK_OFFSET(0x152B96C0)

inline static constexpr unsigned int KAMMHJLPAOD_TypeDefinitionIndex = 74427;

class KAMMHJLPAOD : public ::System::Object
{
public:
	::UnityEngine::UI::Text* GJCNAJOLAKA; // 0x10
	::UnityEngine::GameObject* KGFOGNGLHOC; // 0x18
	::UnityEngine::UI::Text* ACDCKJKDPGI; // 0x20

	::System::Void _ctor(::UnityEngine::GameObject* OJJMNAIJGCH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KAMMHJLPAOD__CTOR_OFFSET))(this, OJJMNAIJGCH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMMHJLPAOD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void PEDANHBGIGE(::System::Boolean IMGAGIGMPLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAMMHJLPAOD_PEDANHBGIGE_OFFSET))(this, IMGAGIGMPLI);
	}

	::System::Void OOADMFBFOAD(::System::Int32 DNNAFNDBLKC, ::System::Int32 EEKENHBPKGO, ::System::Int32 CHKILKCALHB, ::System::Boolean ILOJBJHKEKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KAMMHJLPAOD_OOADMFBFOAD_OFFSET))(this, DNNAFNDBLKC, EEKENHBPKGO, CHKILKCALHB, ILOJBJHKEKM);
	}
};
