#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define BMMIPIMDKEK_DILHADGGIKN_OFFSET UNITYSDK_OFFSET(0xFF8DFA0)

inline static constexpr unsigned int BMMIPIMDKEK_TypeDefinitionIndex = 45279;

class BMMIPIMDKEK : public ::System::Object
{
public:
	static ::System::Void DILHADGGIKN(::UnityEngine::UI::Text* FCCLIEJAKLI, ::System::String* LCEGOBBEECM)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*))((::PBYTE)hIl2Cpp + BMMIPIMDKEK_DILHADGGIKN_OFFSET))(FCCLIEJAKLI, LCEGOBBEECM);
	}
};
