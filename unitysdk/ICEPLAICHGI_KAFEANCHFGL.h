#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AsyncOperation; }

#define ICEPLAICHGI_KAFEANCHFGL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16F587B0)
#define ICEPLAICHGI_KAFEANCHFGL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16F58800)
#define ICEPLAICHGI_KAFEANCHFGL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16F58860)
#define ICEPLAICHGI_KAFEANCHFGL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16F58810)
#define ICEPLAICHGI_KAFEANCHFGL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F587A0)
#define ICEPLAICHGI_KAFEANCHFGL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F58790)

inline static constexpr unsigned int ICEPLAICHGI_KAFEANCHFGL_TypeDefinitionIndex = 79075;

class ICEPLAICHGI_KAFEANCHFGL : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::UnityEngine::AsyncOperation* OPNHFPJHINB; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICEPLAICHGI_KAFEANCHFGL__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_KAFEANCHFGL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_KAFEANCHFGL_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_KAFEANCHFGL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_KAFEANCHFGL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_KAFEANCHFGL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
