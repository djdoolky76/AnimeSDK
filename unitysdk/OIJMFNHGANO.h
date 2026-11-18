#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNGNECAGPNE.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoGamepadBaseList; }
namespace UnityEngine { class Transform; }

#define OIJMFNHGANO_NNKNFKLDPIF_OFFSET UNITYSDK_OFFSET(0x6EA9D0)

inline static constexpr unsigned int OIJMFNHGANO_TypeDefinitionIndex = 45950;

struct alignas(8) OIJMFNHGANO
{
	::System::Int32 OJOEBEBNFCJ; // 0x10
	::UnityEngine::Vector2 PIALHKEPGNG; // 0x14
	::System::Int32 CJHKJLBCNEH; // 0x1C
	::UnityEngine::Vector2 POLHCAFOCGB; // 0x20
	::MoleMole::InputLogicEventType MBEHILFGMGI; // 0x28
	::System::Byte _padding0[0x4];
	::MoleMole::MonoGamepadBaseList* DJHFLKFLLAP; // 0x30
	::UnityEngine::Transform* NGJCOGJFIOE; // 0x38

	::HNGNECAGPNE NNKNFKLDPIF()
	{
		return ((::HNGNECAGPNE(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJMFNHGANO_NNKNFKLDPIF_OFFSET))(this);
	}
};
