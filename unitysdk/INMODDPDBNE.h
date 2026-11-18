#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

inline static constexpr unsigned int INMODDPDBNE_TypeDefinitionIndex = 82844;

struct alignas(8) INMODDPDBNE
{
	::System::String* KIHGNGKBADE; // 0x10
	::MoleMole::EntityHandle ABICNIDFMGP; // 0x18
	::System::String* PLEPAELDGBN; // 0x28
	::UnityEngine::Vector3 BHMFODBLJGH; // 0x30
	::System::Single IHHGEGIKNHM; // 0x3C
	::System::Single NHNEPJIDFBF; // 0x40
};
