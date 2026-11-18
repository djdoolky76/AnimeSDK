#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class DPAFGNEEDDO;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Exception; }

#define ELIHHNOLOPH_CPDKDJHHCOB_OFFSET UNITYSDK_OFFSET(0x11CB7730)
#define ELIHHNOLOPH_JBKFJDNHHIO_OFFSET UNITYSDK_OFFSET(0x11CB7760)
#define ELIHHNOLOPH_KDNCAMDBOGB_OFFSET UNITYSDK_OFFSET(0x11CB7630)
#define ELIHHNOLOPH_NBLGMPDJIIL_OFFSET UNITYSDK_OFFSET(0x11CB75C0)
#define ELIHHNOLOPH_PBCFKHAPGGD_OFFSET UNITYSDK_OFFSET(0x11CB7690)
#define ELIHHNOLOPH__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB71A0)

inline static constexpr unsigned int ELIHHNOLOPH_TypeDefinitionIndex = 45000;

class ELIHHNOLOPH : public ::System::Object
{
public:
	::DPAFGNEEDDO* JBABMOPFPBD; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* PANCEDAAALF; // 0x18

	::System::Void _ctor(::DPAFGNEEDDO* GLLIDENNAAL)
	{
		return ((::System::Void(*)(::PVOID, ::DPAFGNEEDDO*))((::PBYTE)hIl2Cpp + ELIHHNOLOPH__CTOR_OFFSET))(this, GLLIDENNAAL);
	}

	::System::Void KDNCAMDBOGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIHHNOLOPH_KDNCAMDBOGB_OFFSET))(this);
	}

	static ::ELIHHNOLOPH* PBCFKHAPGGD(::DPAFGNEEDDO* GLLIDENNAAL)
	{
		return ((::ELIHHNOLOPH*(*)(::DPAFGNEEDDO*))((::PBYTE)hIl2Cpp + ELIHHNOLOPH_PBCFKHAPGGD_OFFSET))(GLLIDENNAAL);
	}

	::Cysharp::Threading::Tasks::UniTask CPDKDJHHCOB()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIHHNOLOPH_CPDKDJHHCOB_OFFSET))(this);
	}

	::System::Void NBLGMPDJIIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIHHNOLOPH_NBLGMPDJIIL_OFFSET))(this);
	}

	::System::Void JBKFJDNHHIO(::System::Exception* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELIHHNOLOPH_JBKFJDNHHIO_OFFSET))(this, NFFNEFLKPDG);
	}
};
