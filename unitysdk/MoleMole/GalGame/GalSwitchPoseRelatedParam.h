#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1357C170)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchPoseRelatedParam_TypeDefinitionIndex = 49835;

	class GalSwitchPoseRelatedParam : public ::System::Object
	{
	public:
		::System::String* BlushTriggerKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSERELATEDPARAM__CTOR_OFFSET))(this);
		}
	};
}
