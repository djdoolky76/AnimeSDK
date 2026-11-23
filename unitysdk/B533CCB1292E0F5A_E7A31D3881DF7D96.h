#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class ScriptableObject; }

#define B533CCB1292E0F5A_E7A31D3881DF7D96_EFA0D834C4B1DF6D_OFFSET UNITYSDK_OFFSET(0x40E8C50)
#define B533CCB1292E0F5A_E7A31D3881DF7D96__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B533CCB1292E0F5A_E7A31D3881DF7D96_TypeDefinitionIndex = 20236;

class B533CCB1292E0F5A_E7A31D3881DF7D96 : public ::System::Object
{
public:
	::System::String* F79B4D487F303AB2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B533CCB1292E0F5A_E7A31D3881DF7D96__CTOR_OFFSET))(this);
	}

	::System::Boolean EFA0D834C4B1DF6D(::UnityEngine::ScriptableObject* BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + B533CCB1292E0F5A_E7A31D3881DF7D96_EFA0D834C4B1DF6D_OFFSET))(this, BB8C609F76620E45);
	}
};
