#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECALIGBJBNA.h"
#include "unitysdk/NEBMLAKOAPP.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define OBNFLGIOLNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1291D320)

inline static constexpr unsigned int OBNFLGIOLNA_TypeDefinitionIndex = 65974;

class OBNFLGIOLNA : public ::System::Object
{
public:
	::UnityEngine::GameObject* HODAIDNDKHD; // 0x10
	::UnityEngine::UI::Extension::UIButtonBase* JEPEJDNMFOK; // 0x18
	::NEBMLAKOAPP OBNIAHNMHPF; // 0x20
	::System::Boolean FEBNEKHNHHD; // 0x24
	::System::Byte _padding0[0x3];
	::ECALIGBJBNA IGAAKDOIPNN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNFLGIOLNA__CTOR_OFFSET))(this);
	}
};
