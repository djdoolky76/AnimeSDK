#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class ICEPLAICHGI;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Exception; }

#define LPIMDNFFCIM_CPDKDJHHCOB_OFFSET UNITYSDK_OFFSET(0x151B8DD0)
#define LPIMDNFFCIM_JBKFJDNHHIO_OFFSET UNITYSDK_OFFSET(0x151B8CD0)
#define LPIMDNFFCIM_KDNCAMDBOGB_OFFSET UNITYSDK_OFFSET(0x151B8BD0)
#define LPIMDNFFCIM_NBLGMPDJIIL_OFFSET UNITYSDK_OFFSET(0x151B8B60)
#define LPIMDNFFCIM_PBCFKHAPGGD_OFFSET UNITYSDK_OFFSET(0x151B8C30)
#define LPIMDNFFCIM__CTOR_OFFSET UNITYSDK_OFFSET(0x151B88B0)

inline static constexpr unsigned int LPIMDNFFCIM_TypeDefinitionIndex = 59728;

class LPIMDNFFCIM : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* PANCEDAAALF; // 0x10
	::ICEPLAICHGI* PBJGLJOKPKH; // 0x18

	::System::Void _ctor(::ICEPLAICHGI* NEELLHKBHDP)
	{
		return ((::System::Void(*)(::PVOID, ::ICEPLAICHGI*))((::PBYTE)hIl2Cpp + LPIMDNFFCIM__CTOR_OFFSET))(this, NEELLHKBHDP);
	}

	::System::Void KDNCAMDBOGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIMDNFFCIM_KDNCAMDBOGB_OFFSET))(this);
	}

	static ::LPIMDNFFCIM* PBCFKHAPGGD(::ICEPLAICHGI* NEELLHKBHDP)
	{
		return ((::LPIMDNFFCIM*(*)(::ICEPLAICHGI*))((::PBYTE)hIl2Cpp + LPIMDNFFCIM_PBCFKHAPGGD_OFFSET))(NEELLHKBHDP);
	}

	::System::Void JBKFJDNHHIO(::System::Exception* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + LPIMDNFFCIM_JBKFJDNHHIO_OFFSET))(this, NFFNEFLKPDG);
	}

	::Cysharp::Threading::Tasks::UniTask CPDKDJHHCOB()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIMDNFFCIM_CPDKDJHHCOB_OFFSET))(this);
	}

	::System::Void NBLGMPDJIIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIMDNFFCIM_NBLGMPDJIIL_OFFSET))(this);
	}
};
