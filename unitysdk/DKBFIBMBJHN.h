#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraTimestamp; }

#define DKBFIBMBJHN_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x16BA4450)
#define DKBFIBMBJHN_GETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16BA4350)
#define DKBFIBMBJHN_ISTHREADSAFEINWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x16BA48D0)
#define DKBFIBMBJHN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BA4930)
#define DKBFIBMBJHN__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA4920)

inline static constexpr unsigned int DKBFIBMBJHN_TypeDefinitionIndex = 82784;

class DKBFIBMBJHN : public ::System::Object
{
public:
	static ::PipelineCamera::ICameraTimestamp** StaticGet_NJLLMPCDOEB()
	{
		return (::PipelineCamera::ICameraTimestamp**)Il2CppClass::FromTypeDefinitionIndex(DKBFIBMBJHN_TypeDefinitionIndex)->GetStaticField(0x3E6D0);
	}
	static ::PipelineCamera::ICameraTimestamp** StaticGet_AJNNPBADDDE()
	{
		return (::PipelineCamera::ICameraTimestamp**)Il2CppClass::FromTypeDefinitionIndex(DKBFIBMBJHN_TypeDefinitionIndex)->GetStaticField(0x3E6D8);
	}
	::System::Boolean LFPGBNHCLFG; // 0x10

	::System::Void _ctor(::System::Boolean EJMAJAPJMAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKBFIBMBJHN__CTOR_OFFSET))(this, EJMAJAPJMAA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKBFIBMBJHN__CCTOR_OFFSET))();
	}

	::System::Double GetTimestamp(::PipelineCamera::ICameraCommonContext* AAOCANGHBDG)
	{
		return ((::System::Double(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + DKBFIBMBJHN_GETTIMESTAMP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Single GetDeltaTime(::PipelineCamera::ICameraCommonContext* AAOCANGHBDG)
	{
		return ((::System::Single(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + DKBFIBMBJHN_GETDELTATIME_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean IsThreadSafeInWorkThread(::PipelineCamera::ICameraCommonContext* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + DKBFIBMBJHN_ISTHREADSAFEINWORKTHREAD_OFFSET))(this, AAOCANGHBDG);
	}
};
