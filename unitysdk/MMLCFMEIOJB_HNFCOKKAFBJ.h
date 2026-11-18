#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKJMKBPMCC_LLKEPNDKGAD.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MMLCFMEIOJB_HNFCOKKAFBJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12179240)
#define MMLCFMEIOJB_HNFCOKKAFBJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x121792B0)
#define MMLCFMEIOJB_HNFCOKKAFBJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x12178F50)
#define MMLCFMEIOJB_HNFCOKKAFBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12178F40)

inline static constexpr unsigned int MMLCFMEIOJB_HNFCOKKAFBJ_TypeDefinitionIndex = 87275;

class MMLCFMEIOJB_HNFCOKKAFBJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_HNFCOKKAFBJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::MCKJMKBPMCC_LLKEPNDKGAD Invoke(::UnityEngine::RaycastHit& NLJNLBAMKDP)
	{
		return ((::MCKJMKBPMCC_LLKEPNDKGAD(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_HNFCOKKAFBJ_INVOKE_OFFSET))(this, NLJNLBAMKDP);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::RaycastHit& NLJNLBAMKDP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_HNFCOKKAFBJ_BEGININVOKE_OFFSET))(this, NLJNLBAMKDP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::MCKJMKBPMCC_LLKEPNDKGAD EndInvoke(::UnityEngine::RaycastHit& NLJNLBAMKDP, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::MCKJMKBPMCC_LLKEPNDKGAD(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MMLCFMEIOJB_HNFCOKKAFBJ_ENDINVOKE_OFFSET))(this, NLJNLBAMKDP, IGAAKDOIPNN);
	}
};
