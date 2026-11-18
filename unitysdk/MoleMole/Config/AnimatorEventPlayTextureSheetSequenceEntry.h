#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTPLAYTEXTURESHEETSEQUENCEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x131CAFB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPLAYTEXTURESHEETSEQUENCEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x131CB030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventPlayTextureSheetSequenceEntry_TypeDefinitionIndex = 88845;

	class AnimatorEventPlayTextureSheetSequenceEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* MeshPath; // 0x58
		::System::String* TextureSheetKey; // 0x60
		::System::Boolean IsKeepLastFrame; // 0x68
		::System::Byte _padding0[0x3];
		::MoleMole::Config::TextureSheetInterruptType InterruptType; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPLAYTEXTURESHEETSEQUENCEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPLAYTEXTURESHEETSEQUENCEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
