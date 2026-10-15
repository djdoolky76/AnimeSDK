#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define GPLNGDDJINB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B54AC0)
#define GPLNGDDJINB_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x15B54990)
#define GPLNGDDJINB_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x15B54A00)

inline static constexpr unsigned int GPLNGDDJINB_TypeDefinitionIndex = 72133;

	class GPLNGDDJINB : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* EAGKJGELBED; // 0x18
		::UnityEngine::UI::Text* CMMFIGCPDIB; // 0x20
		::UnityEngine::UI::Text* GPACJHAKGJJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLNGDDJINB_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLNGDDJINB_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLNGDDJINB_JCKGONAAIPB_OFFSET))(this);
		}

	};
