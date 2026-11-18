#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define OLLLINOPPKJ_EFMNHBKBEMD_OFFSET UNITYSDK_OFFSET(0x1844C830)
#define OLLLINOPPKJ_HLLMEGECMAD_OFFSET UNITYSDK_OFFSET(0x1844C750)
#define OLLLINOPPKJ_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1844C760)
#define OLLLINOPPKJ_KGCNFHCOLOP_OFFSET UNITYSDK_OFFSET(0x1844C7A0)
#define OLLLINOPPKJ_KPFMMIAIOCK_OFFSET UNITYSDK_OFFSET(0x1844C7F0)
#define OLLLINOPPKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1844C740)

inline static constexpr unsigned int OLLLINOPPKJ_TypeDefinitionIndex = 47392;

class OLLLINOPPKJ : public ::System::Object
{
public:
	::UnityEngine::Renderer* MJEHKAMDEEG; // 0x10
	::System::Int32 _BEFKEIOHGMF_k__BackingField; // 0x18
	::System::Int32 BELNJJKMMJP; // 0x1C

	::System::Void _ctor(::UnityEngine::Renderer* OCFHGOGFGPE, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + OLLLINOPPKJ__CTOR_OFFSET))(this, OCFHGOGFGPE, ABHBKFJKINO);
	}

	::System::Int32 HLLMEGECMAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLLINOPPKJ_HLLMEGECMAD_OFFSET))(this);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLLINOPPKJ_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Boolean KGCNFHCOLOP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLLINOPPKJ_KGCNFHCOLOP_OFFSET))(this);
	}

	::System::Void KPFMMIAIOCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLLINOPPKJ_KPFMMIAIOCK_OFFSET))(this);
	}

	::System::Void EFMNHBKBEMD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OLLLINOPPKJ_EFMNHBKBEMD_OFFSET))(this, EGEGIMGMJHN);
	}
};
