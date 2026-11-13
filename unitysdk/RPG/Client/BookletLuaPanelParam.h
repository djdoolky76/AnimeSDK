#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETLUAPANELPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57C780)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletLuaPanelParam_TypeDefinitionIndex = 74469;

	class BookletLuaPanelParam : public ::System::Object
	{
	public:
		::System::String* BinderClassPath; // 0x10
		::System::String* PanelClassPath; // 0x18
		::UnityEngine::Transform* Root; // 0x20
		::System::UInt32 ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETLUAPANELPARAM_CTOR_OFFSET))(this);
		}

	};
}
