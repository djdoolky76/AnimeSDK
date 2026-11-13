#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }

#define DFPILEHIJHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A85B0)
#define DFPILEHIJHA_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x1B3A8450)
#define DFPILEHIJHA_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x1B3A84C0)

inline static constexpr unsigned int DFPILEHIJHA_TypeDefinitionIndex = 74828;

	class DFPILEHIJHA : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::UI::Button* GNJPAOBJGGA; // 0x18
		::UnityEngine::UI::Button* FPNIIGOJKGG; // 0x20
		::UnityEngine::UI::Dropdown* NIAFKHGAIKI; // 0x28
		::UnityEngine::UI::Dropdown* FKGDPKLFDHK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPILEHIJHA_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPILEHIJHA_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPILEHIJHA_JCKGONAAIPB_OFFSET))(this);
		}

	};
