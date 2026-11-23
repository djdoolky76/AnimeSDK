#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define UNITYENGINE_EXITGUIEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x41A3860)

namespace UnityEngine
{
	inline static constexpr unsigned int ExitGUIException_TypeDefinitionIndex = 20135;

	class ExitGUIException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXITGUIEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
