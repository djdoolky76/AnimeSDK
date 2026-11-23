#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class ScriptableObject; }

#define B533CCB1292E0F5A_B239D6A777AC4848_A501358B077E7D4D_OFFSET UNITYSDK_OFFSET(0x40E8C50)
#define B533CCB1292E0F5A_B239D6A777AC4848__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B533CCB1292E0F5A_B239D6A777AC4848_TypeDefinitionIndex = 20237;

class B533CCB1292E0F5A_B239D6A777AC4848 : public ::System::Object
{
public:
	::System::String* E82293C0814051A5; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B533CCB1292E0F5A_B239D6A777AC4848__CTOR_OFFSET))(this);
	}

	::System::Boolean A501358B077E7D4D(::UnityEngine::ScriptableObject* BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + B533CCB1292E0F5A_B239D6A777AC4848_A501358B077E7D4D_OFFSET))(this, BB8C609F76620E45);
	}
};
