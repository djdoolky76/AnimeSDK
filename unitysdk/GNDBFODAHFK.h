#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }

#define GNDBFODAHFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15AF2E20)
#define GNDBFODAHFK_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x15AF2CA0)
#define GNDBFODAHFK_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x15AF2D10)

inline static constexpr unsigned int GNDBFODAHFK_TypeDefinitionIndex = 72751;

	class GNDBFODAHFK : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::InputField* FKJJFDBDKCM; // 0x18
		::UnityEngine::UI::Button* AGFFNONHCKO; // 0x20
		::UnityEngine::UI::Button* CGOOOBMPHMO; // 0x28
		::UnityEngine::UI::InputField* ONBBDMLMJGG; // 0x30
		::UnityEngine::UI::Button* FPNIIGOJKGG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDBFODAHFK_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDBFODAHFK_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDBFODAHFK_JCKGONAAIPB_OFFSET))(this);
		}

	};
