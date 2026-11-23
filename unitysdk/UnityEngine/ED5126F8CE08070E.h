#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_ED5126F8CE08070E_B8A3A3530D99EE34_OFFSET UNITYSDK_OFFSET(0x41C2ED0)
#define UNITYENGINE_ED5126F8CE08070E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int ED5126F8CE08070E_TypeDefinitionIndex = 21435;

	class ED5126F8CE08070E : public ::System::Object
	{
	public:
		::System::IntPtr F206D41EC0C50691; // 0x10

		::System::String* B8A3A3530D99EE34()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ED5126F8CE08070E_B8A3A3530D99EE34_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ED5126F8CE08070E__CTOR_OFFSET))(this);
		}
	};
}
