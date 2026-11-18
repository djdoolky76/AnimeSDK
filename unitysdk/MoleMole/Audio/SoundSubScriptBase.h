#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

#define MOLEMOLE_AUDIO_SOUNDSUBSCRIPTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x131B7BA0)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int SoundSubScriptBase_TypeDefinitionIndex = 63126;

	class SoundSubScriptBase : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SOUNDSUBSCRIPTBASE__CTOR_OFFSET))(this);
		}
	};
}
