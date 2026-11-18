#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int BIIDNMMMEAF_TypeDefinitionIndex = 69340;

struct alignas(8) BIIDNMMMEAF
{
	::UnityEngine::Vector3 MPLDDNMCECG; // 0x10
	::System::Single NCCDJLDKFGA; // 0x1C
	::System::Nullable_1<::UnityEngine::AI::NavMeshHit> OFLHPPDJLNL; // 0x20
	::System::Byte _padding0[0x20];
	::System::Boolean JINECNNDGOG; // 0x48
};
