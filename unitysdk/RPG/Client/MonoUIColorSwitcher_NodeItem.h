#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Object; }

#define RPG_CLIENT_MONOUICOLORSWITCHER_NODEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D292170)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIColorSwitcher_NodeItem_TypeDefinitionIndex = 70930;

	class MonoUIColorSwitcher_NodeItem : public ::System::Object
	{
	public:
		::UnityEngine::Object* Component; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_NODEITEM_CTOR_OFFSET))(this);
		}

	};
}
