#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define BBFE873529437213_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1F7B990)
#define BBFE873529437213__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int BBFE873529437213_TypeDefinitionIndex = 7857;

class BBFE873529437213 : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::GameObject* BFF8EEF5AFFB3E45; // 0x80
	::UnityEngine::GameObject* F50CCD4BCE340A57; // 0x88
	::UnityEngine::Animation* B9F01DAFAA0245A1; // 0x90

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BBFE873529437213_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFE873529437213__CTOR_OFFSET))(this);
	}
};
