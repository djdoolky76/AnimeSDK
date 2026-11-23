#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace TA::Iris { class IrisCloud; }

#define TA_IRIS_MODIFIERBASE_APPLY_OFFSET UNITYSDK_OFFSET(0x2882920)
#define TA_IRIS_MODIFIERBASE_GET_ID_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define TA_IRIS_MODIFIERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x288F880)

namespace TA::Iris
{
	inline static constexpr unsigned int ModifierBase_TypeDefinitionIndex = 16184;

	class ModifierBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* _guid; // 0x18
		::System::Boolean isEnable; // 0x20
		::System::Boolean drawGizmos; // 0x21

		::System::String* get_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_MODIFIERBASE_GET_ID_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_MODIFIERBASE__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::TA::Iris::IrisCloud*& B8B0EF9ED37BA7F0)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*&))((::PBYTE)hIl2Cpp + TA_IRIS_MODIFIERBASE_APPLY_OFFSET))(this, B8B0EF9ED37BA7F0);
		}
	};
}
