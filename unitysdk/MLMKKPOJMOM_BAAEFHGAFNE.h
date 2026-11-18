#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define MLMKKPOJMOM_BAAEFHGAFNE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7FEAD0)

inline static constexpr unsigned int MLMKKPOJMOM_BAAEFHGAFNE_TypeDefinitionIndex = 61799;

struct alignas(8) MLMKKPOJMOM_BAAEFHGAFNE
{
	::System::Object* GAFENANJDNI; // 0x10
	::System::Byte _padding0[0x10];
	::UnityEngine::Vector3 FCNPOKNKMOD; // 0x28

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MLMKKPOJMOM_BAAEFHGAFNE_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
