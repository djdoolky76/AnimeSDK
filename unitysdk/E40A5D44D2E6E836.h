#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define E40A5D44D2E6E836_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1B91DD0)
#define E40A5D44D2E6E836_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1B91EE0)
#define E40A5D44D2E6E836__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E40A5D44D2E6E836_TypeDefinitionIndex = 2303;

class E40A5D44D2E6E836 : public ::System::Object
{
public:
	::UnityEngine::GameObject* B184C16C969E76FE; // 0x10
	::UnityEngine::UI::Image* F3AD4997E5CDE299; // 0x18

	::System::Void EC3033C0485522FB(::System::Boolean FC132DC38725EF0A, ::System::Boolean AFD8820BB9500C25)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + E40A5D44D2E6E836_EC3033C0485522FB_OFFSET))(this, FC132DC38725EF0A, AFD8820BB9500C25);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E40A5D44D2E6E836__CTOR_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::UnityEngine::GameObject* B7DC69C19AEDA25A)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + E40A5D44D2E6E836_A1E97155B145443C_OFFSET))(this, B7DC69C19AEDA25A);
	}
};
