#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define NPCCROWD_AVATAR_AVATARSLOTNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x14F31CD0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int AvatarSlotNameAttribute_TypeDefinitionIndex = 43082;

	class AvatarSlotNameAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_AVATARSLOTNAMEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
