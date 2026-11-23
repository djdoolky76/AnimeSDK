#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_FONT_F93EB759F2BAECC8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define UNITYENGINE_FONT_F93EB759F2BAECC8__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace UnityEngine
{
	inline static constexpr unsigned int Font_F93EB759F2BAECC8_TypeDefinitionIndex = 21344;

	class Font_F93EB759F2BAECC8 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_F93EB759F2BAECC8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_F93EB759F2BAECC8_INVOKE_OFFSET))(this);
		}
	};
}
