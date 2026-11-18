#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_FJFKMEKHJHJ_DJCEGPGBEOJ_OFFSET UNITYSDK_OFFSET(0x1F367F50)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_FJFKMEKHJHJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1F368130)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_FJFKMEKHJHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F367F40)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UIMapSnakeBombAnimScript_FJFKMEKHJHJ_TypeDefinitionIndex = 96661;

	class UIMapSnakeBombAnimScript_FJFKMEKHJHJ : public ::System::Object
	{
	public:
		::UnityEngine::UI::Image* CGJEBPGPIHO; // 0x10
		::UnityEngine::GameObject* NJOAJLDJCCJ; // 0x18
		::UnityEngine::RectTransform* LNEEMAGIHLB; // 0x20
		::System::Boolean FIPHFGHNNBE; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 CBHLLKFPFEI; // 0x2C
		::System::Int32 LFKNNLHKMFI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_FJFKMEKHJHJ__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* DJCEGPGBEOJ()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_FJFKMEKHJHJ_DJCEGPGBEOJ_OFFSET))(this);
		}

		::System::Void NPOLNFDBOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_FJFKMEKHJHJ_NPOLNFDBOOD_OFFSET))(this);
		}
	};
}
