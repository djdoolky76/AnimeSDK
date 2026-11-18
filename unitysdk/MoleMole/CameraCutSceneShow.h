#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFEIPKBDEMM_MKBEAGOEMBN.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class String; }

#define MOLEMOLE_CAMERACUTSCENESHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1219F8A0)
#define MOLEMOLE_CAMERACUTSCENESHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1219F980)
#define MOLEMOLE_CAMERACUTSCENESHOW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1219F900)
#define MOLEMOLE_CAMERACUTSCENESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1219F8B0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraCutSceneShow_TypeDefinitionIndex = 50230;

	class CameraCutSceneShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::CFEIPKBDEMM_MKBEAGOEMBN _ccsParam; // 0x28

		::System::Void _ctor(::CFEIPKBDEMM_MKBEAGOEMBN ccsParam, ::FAKODLEPJOA matchPage)
		{
			return ((::System::Void(*)(::PVOID, ::CFEIPKBDEMM_MKBEAGOEMBN, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW__CTOR_OFFSET))(this, ccsParam, matchPage);
		}

		::System::Void _ctor_1(::System::String* cutSceneName, ::FAKODLEPJOA matchPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW__CTOR_1_OFFSET))(this, cutSceneName, matchPage);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACUTSCENESHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
