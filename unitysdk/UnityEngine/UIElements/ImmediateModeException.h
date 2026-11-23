#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define UNITYENGINE_UIELEMENTS_IMMEDIATEMODEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x4366860)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ImmediateModeException_TypeDefinitionIndex = 13716;

	class ImmediateModeException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::Exception* B7AF548FA9CF41FC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMMEDIATEMODEEXCEPTION__CTOR_OFFSET))(this, B7AF548FA9CF41FC);
		}
	};
}
