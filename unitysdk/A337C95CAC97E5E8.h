#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueHandle.h"

namespace System { class String; }
namespace UnityEngine::UIElements { class StyleSheet; }

#define A337C95CAC97E5E8_B0A49257B8B2A815_OFFSET UNITYSDK_OFFSET(0x42C3100)
#define A337C95CAC97E5E8_B1D153906E04A37B_OFFSET UNITYSDK_OFFSET(0x42C30D0)

inline static constexpr unsigned int A337C95CAC97E5E8_TypeDefinitionIndex = 14134;

class A337C95CAC97E5E8 : public ::System::Object
{
public:
	static ::System::Boolean B1D153906E04A37B(::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
	{
		return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + A337C95CAC97E5E8_B1D153906E04A37B_OFFSET))(E38FD399E4DFEF27);
	}

	static ::System::String* B0A49257B8B2A815(::UnityEngine::UIElements::StyleSheet* A3240E0B408E3C48, ::UnityEngine::UIElements::StyleValueHandle E38FD399E4DFEF27)
	{
		return ((::System::String*(*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleValueHandle))((::PBYTE)hIl2Cpp + A337C95CAC97E5E8_B0A49257B8B2A815_OFFSET))(A3240E0B408E3C48, E38FD399E4DFEF27);
	}
};
