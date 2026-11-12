#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x2068E9E0)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2068E940)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2068E950)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_RESET_OFFSET UNITYSDK_OFFSET(0x2068E9D0)

namespace UnityEngine
{
	inline static constexpr unsigned int CustomYieldInstruction_TypeDefinitionIndex = 4323;

	class CustomYieldInstruction : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_CTOR_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_RESET_OFFSET))(this);
		}

	};
}
