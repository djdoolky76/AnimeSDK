#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEPFGCNCGKD.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ServerListInfo; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define HEKOPGNBKHF_KPBAIGPCIPD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14D22F10)
#define HEKOPGNBKHF_KPBAIGPCIPD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14D23390)
#define HEKOPGNBKHF_KPBAIGPCIPD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14D233F0)
#define HEKOPGNBKHF_KPBAIGPCIPD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14D233A0)
#define HEKOPGNBKHF_KPBAIGPCIPD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D22F00)
#define HEKOPGNBKHF_KPBAIGPCIPD__CTOR_OFFSET UNITYSDK_OFFSET(0x14D22EF0)

inline static constexpr unsigned int HEKOPGNBKHF_KPBAIGPCIPD_TypeDefinitionIndex = 85179;

class HEKOPGNBKHF_KPBAIGPCIPD : public ::System::Object
{
public:
	::UnityEngine::Networking::UnityWebRequestAsyncOperation* DOFLOJLFCLK; // 0x10
	::OEPFGCNCGKD FGOLMIJFHIO; // 0x18
	::System::Object* IDBEJJEKGDI; // 0x30
	::System::Diagnostics::Stopwatch* ANBCIOCMHKF; // 0x38
	::MoleMole::ServerListInfo* GFEHDJEOEIA; // 0x40
	::UnityEngine::Networking::UnityWebRequest* LMCHILLMMDL; // 0x48
	::System::Int32 ABHBKFJKINO; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_KPBAIGPCIPD__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_KPBAIGPCIPD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_KPBAIGPCIPD_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_KPBAIGPCIPD_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_KPBAIGPCIPD_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_KPBAIGPCIPD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
