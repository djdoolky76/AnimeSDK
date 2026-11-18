#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALSWITCHPOSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x180EB610)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchPoseData_TypeDefinitionIndex = 63461;

	class GalSwitchPoseData : public ::System::Object
	{
	public:
		::System::Int32 actorId; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* avatarShowingKey; // 0x18
		::System::String* avatarPoseKey; // 0x20
		::System::String* avatarFacialKey; // 0x28
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHPOSEDATA__CTOR_OFFSET))(this);
		}
	};
}
