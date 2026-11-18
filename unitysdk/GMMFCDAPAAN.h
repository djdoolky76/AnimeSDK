#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define GMMFCDAPAAN_LIEEAKBPMDO_OFFSET UNITYSDK_OFFSET(0x16CD5810)
#define GMMFCDAPAAN__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD5470)

inline static constexpr unsigned int GMMFCDAPAAN_TypeDefinitionIndex = 56232;

class GMMFCDAPAAN : public ::System::Object
{
public:
	::UnityEngine::UI::Text* BMCGENDJDHD; // 0x10
	::UnityEngine::UI::Image* AOOLNBKIHAG; // 0x18
	::UnityEngine::UI::Text* LAMIJFHPBDN; // 0x20
	::UnityEngine::UI::Extension::UIButtonEx* KDPIMFDILPG; // 0x28
	::System::Int32 OIKFFGKDHME; // 0x30

	::System::Void _ctor(::UnityEngine::Transform* LNEEMAGIHLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GMMFCDAPAAN__CTOR_OFFSET))(this, LNEEMAGIHLB);
	}

	::System::Void LIEEAKBPMDO(::System::Int32 JMCLFJCPMPB, ::System::Int32 MJDJLJMBIBF, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GMMFCDAPAAN_LIEEAKBPMDO_OFFSET))(this, JMCLFJCPMPB, MJDJLJMBIBF, MGMDLMBEDJF);
	}
};
