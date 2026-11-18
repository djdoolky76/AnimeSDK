#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/InterpCurve_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KEKNIAKEJJO_EPHOFBLOEDI_BDNCOGBCPEF_OFFSET UNITYSDK_OFFSET(0x7CE1E0)
#define KEKNIAKEJJO_EPHOFBLOEDI_HMAHNIJOGIB_OFFSET UNITYSDK_OFFSET(0x7CE0F0)
#define KEKNIAKEJJO_EPHOFBLOEDI_KNGLFBEEPOC_OFFSET UNITYSDK_OFFSET(0x7CE150)
#define KEKNIAKEJJO_EPHOFBLOEDI_OGDKBIHGOGG_OFFSET UNITYSDK_OFFSET(0x7CE000)
#define KEKNIAKEJJO_EPHOFBLOEDI__CTOR_OFFSET UNITYSDK_OFFSET(0x7CDEF0)

inline static constexpr unsigned int KEKNIAKEJJO_EPHOFBLOEDI_TypeDefinitionIndex = 64485;

struct alignas(8) KEKNIAKEJJO_EPHOFBLOEDI
{
	::UnityEngine::Vector2 FCAGBNFLMGE; // 0x10
	::System::Single IDEJKHKOLIG; // 0x18
	::System::Byte _padding0[0x4];
	::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2> MBNJODGLPOB; // 0x20
	::System::Byte _padding1[0x90];
	::PipelineCamera::InterpCurve_1<::System::Single> AIBAHHCNKOF; // 0xB8

	::System::Void _ctor(::UnityEngine::Vector2 ONMOEHKOPKI, ::System::Single OMHFBOPGGBP, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2> ALMNOGIJGAP, ::PipelineCamera::InterpCurve_1<::System::Single> NEDLAFMIPAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>, ::PipelineCamera::InterpCurve_1<::System::Single>))((::PBYTE)hIl2Cpp + KEKNIAKEJJO_EPHOFBLOEDI__CTOR_OFFSET))(this, ONMOEHKOPKI, OMHFBOPGGBP, ALMNOGIJGAP, NEDLAFMIPAG);
	}

	::UnityEngine::Vector3 OGDKBIHGOGG(::System::Single EHAOLKJPKAO)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEKNIAKEJJO_EPHOFBLOEDI_OGDKBIHGOGG_OFFSET))(this, EHAOLKJPKAO);
	}

	::System::Single HMAHNIJOGIB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKNIAKEJJO_EPHOFBLOEDI_HMAHNIJOGIB_OFFSET))(this);
	}

	::UnityEngine::Vector3 KNGLFBEEPOC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKNIAKEJJO_EPHOFBLOEDI_KNGLFBEEPOC_OFFSET))(this);
	}

	::UnityEngine::Vector2 BDNCOGBCPEF(::System::Single EHAOLKJPKAO)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEKNIAKEJJO_EPHOFBLOEDI_BDNCOGBCPEF_OFFSET))(this, EHAOLKJPKAO);
	}
};
