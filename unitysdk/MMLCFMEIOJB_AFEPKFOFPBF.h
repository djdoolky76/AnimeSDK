#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKJMKBPMCC_LLKEPNDKGAD.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MMLCFMEIOJB_AFEPKFOFPBF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16CA5D40)
#define MMLCFMEIOJB_AFEPKFOFPBF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16CA5DD0)
#define MMLCFMEIOJB_AFEPKFOFPBF_INVOKE_OFFSET UNITYSDK_OFFSET(0x16CA5A20)
#define MMLCFMEIOJB_AFEPKFOFPBF__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA5A10)

inline static constexpr unsigned int MMLCFMEIOJB_AFEPKFOFPBF_TypeDefinitionIndex = 87277;

class MMLCFMEIOJB_AFEPKFOFPBF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_AFEPKFOFPBF__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::UnityEngine::RaycastHit& NLJNLBAMKDP, ::MCKJMKBPMCC_LLKEPNDKGAD KDJNOOIIDJG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&, ::MCKJMKBPMCC_LLKEPNDKGAD))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_AFEPKFOFPBF_INVOKE_OFFSET))(this, NLJNLBAMKDP, KDJNOOIIDJG);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::RaycastHit& NLJNLBAMKDP, ::MCKJMKBPMCC_LLKEPNDKGAD KDJNOOIIDJG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RaycastHit&, ::MCKJMKBPMCC_LLKEPNDKGAD, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_AFEPKFOFPBF_BEGININVOKE_OFFSET))(this, NLJNLBAMKDP, KDJNOOIIDJG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::UnityEngine::RaycastHit& NLJNLBAMKDP, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_AFEPKFOFPBF_ENDINVOKE_OFFSET))(this, NLJNLBAMKDP, IGAAKDOIPNN);
	}
};
