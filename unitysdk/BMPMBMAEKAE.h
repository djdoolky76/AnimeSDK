#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Text; }

#define BMPMBMAEKAE_GLDHGBBEFNF_OFFSET UNITYSDK_OFFSET(0x185809C0)

inline static constexpr unsigned int BMPMBMAEKAE_TypeDefinitionIndex = 42825;

class BMPMBMAEKAE : public ::System::Object
{
public:
	static ::System::Void GLDHGBBEFNF(::UnityEngine::UI::Text* NIKJAJPOBBH, ::UnityEngine::UI::Text* OJNGHNLCBFO)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Text*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + BMPMBMAEKAE_GLDHGBBEFNF_OFFSET))(NIKJAJPOBBH, OJNGHNLCBFO);
	}
};
