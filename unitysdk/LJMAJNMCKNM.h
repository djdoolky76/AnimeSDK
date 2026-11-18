#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::Rendering { class Volume; }

#define LJMAJNMCKNM_AIIHKEIPBIB_OFFSET UNITYSDK_OFFSET(0x15662C00)

inline static constexpr unsigned int LJMAJNMCKNM_TypeDefinitionIndex = 85219;

class LJMAJNMCKNM : public ::System::Object
{
public:
	static ::System::Void AIIHKEIPBIB(::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::System::String* MCOHLHMKLIP, ::System::Action* LOFKGFHKCMB, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Action*, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + LJMAJNMCKNM_AIIHKEIPBIB_OFFSET))(IHIMDLELPAG, MCOHLHMKLIP, LOFKGFHKCMB, PHLFMCCNEGD);
	}
};
