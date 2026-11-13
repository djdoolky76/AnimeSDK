#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPESCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C9E70)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoBlendShapesConfig_BlendShapesConfig_TypeDefinitionIndex = 61321;

	class EmoBlendShapesConfig_BlendShapesConfig : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Object*>* paramList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPESCONFIG_CTOR_OFFSET))(this);
		}

	};
}
