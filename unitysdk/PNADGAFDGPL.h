#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarEventAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DNBDPIOLLHH;

#define PNADGAFDGPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC329560)
#define PNADGAFDGPL_CTOR_2_OFFSET UNITYSDK_OFFSET(0xC329570)
#define PNADGAFDGPL_CTOR_OFFSET UNITYSDK_OFFSET(0xC329550)

inline static constexpr unsigned int PNADGAFDGPL_TypeDefinitionIndex = 71211;

	class PNADGAFDGPL : public ::System::Object
	{
	public:
		::DNBDPIOLLHH* DEKMFELPCBO; // 0x10
		::RPG::Client::ActionBarEventAction ENGGCENAFPM; // 0x18
		::UnityEngine::Vector2 PECPBEOHOJC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNADGAFDGPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNBDPIOLLHH* a1, ::RPG::Client::ActionBarEventAction a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::DNBDPIOLLHH*, ::RPG::Client::ActionBarEventAction, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PNADGAFDGPL_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::DNBDPIOLLHH* a1, ::RPG::Client::ActionBarEventAction a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNBDPIOLLHH*, ::RPG::Client::ActionBarEventAction))((::PBYTE)hIl2Cpp + PNADGAFDGPL_CTOR_2_OFFSET))(this, a1, a2);
		}

	};
