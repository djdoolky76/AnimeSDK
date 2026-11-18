#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BHGCFCKEDAP.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace UnityEngine { class AnimationCurve; }

#define BNLPMBPLHFO_BOBJBPEFLND_OFFSET UNITYSDK_OFFSET(0x14C53480)
#define BNLPMBPLHFO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14C527A0)

inline static constexpr unsigned int BNLPMBPLHFO_TypeDefinitionIndex = 82737;

class BNLPMBPLHFO : public ::System::Object
{
public:
	// static const ::System::Int32 JMGPJPBMFKD = 0x0; // 0x0
	// static const ::System::Int32 BODJJGONIJK = 0x1; // 0x0
	// static const ::System::Int32 KJOBNNJNFJM = 0x2; // 0x0

	static ::BHGCFCKEDAP COKNIICCODC(::UnityEngine::AnimationCurve* OMPHGGCEIBD, ::Foundation::NativeMemory* HOMNNKAIOHF, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> BBCMGINHDNK)
	{
		return ((::BHGCFCKEDAP(*)(::UnityEngine::AnimationCurve*, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + BNLPMBPLHFO_COKNIICCODC_OFFSET))(OMPHGGCEIBD, HOMNNKAIOHF, BBCMGINHDNK);
	}

	static ::System::Void BOBJBPEFLND(::UnityEngine::AnimationCurve* OMPHGGCEIBD, ::Foundation::NativeMemoryBuilder* JCJGGPJCPJK, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> AJMCCOEAIFE)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + BNLPMBPLHFO_BOBJBPEFLND_OFFSET))(OMPHGGCEIBD, JCJGGPJCPJK, AJMCCOEAIFE);
	}
};
