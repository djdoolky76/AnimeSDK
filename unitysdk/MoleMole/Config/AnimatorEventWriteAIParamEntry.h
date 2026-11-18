#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/AnimatorEventWriteAIParamEntry_ParaType.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAMENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1BA1B240)
#define MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAMENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1B2C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventWriteAIParamEntry_TypeDefinitionIndex = 57542;

	class AnimatorEventWriteAIParamEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* paramName; // 0x58
		::System::String* stringParamValue; // 0x60
		::System::Int32 intParamValue; // 0x68
		::System::Boolean boolParamValue; // 0x6C
		::System::Byte _padding0[0x3];
		::System::Single floatParamValue; // 0x70
		::MoleMole::Config::AnimatorEventWriteAIParamEntry_ParaType paraType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAMENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTWRITEAIPARAMENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
