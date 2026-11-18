#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_USESUBID_OFFSET UNITYSDK_OFFSET(0x1357E1A0)
#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1357E210)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SpeakerActionCfg_TypeDefinitionIndex = 62984;

	class SpeakerActionCfg : public ::System::Object
	{
	public:
		::System::Int32 SpeakerSubID; // 0x10
		::System::Int32 SpeakerNpcTag; // 0x14
		::System::String* SpeakerMember; // 0x18
		::System::Int32 FacialActionID; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* FacialAniKey; // 0x28
		::System::String* FacialBubbleKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG__CTOR_OFFSET))(this);
		}

		::System::Boolean UseSubID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_USESUBID_OFFSET))(this);
		}
	};
}
