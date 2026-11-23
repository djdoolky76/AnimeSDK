#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Button; }

#define F59B321DC83145D1_B96EE0C36485762A_OFFSET UNITYSDK_OFFSET(0x21EDD50)

inline static constexpr unsigned int F59B321DC83145D1_TypeDefinitionIndex = 9001;

class F59B321DC83145D1 : public ::System::Object
{
public:
	static ::System::Void B96EE0C36485762A(::UnityEngine::UI::Button* B59693F546157653, ::System::Boolean A3E26351629B9EF8, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Button*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + F59B321DC83145D1_B96EE0C36485762A_OFFSET))(B59693F546157653, A3E26351629B9EF8, F7C511FBCE59B4A5);
	}
};
