#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class WaitForSeconds; }

#define ICEPLAICHGI_ADDCOCDDJAM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12EA2F40)
#define ICEPLAICHGI_ADDCOCDDJAM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12EA30B0)
#define ICEPLAICHGI_ADDCOCDDJAM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12EA3110)
#define ICEPLAICHGI_ADDCOCDDJAM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12EA30C0)
#define ICEPLAICHGI_ADDCOCDDJAM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12EA2F30)
#define ICEPLAICHGI_ADDCOCDDJAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA2F20)

inline static constexpr unsigned int ICEPLAICHGI_ADDCOCDDJAM_TypeDefinitionIndex = 79076;

class ICEPLAICHGI_ADDCOCDDJAM : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::UnityEngine::WaitForSeconds* NMCODLFGFED; // 0x18
	::System::Single FIFJKPNPPOB; // 0x20
	::System::Single NHDHLHIINGH; // 0x24
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICEPLAICHGI_ADDCOCDDJAM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_ADDCOCDDJAM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_ADDCOCDDJAM_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_ADDCOCDDJAM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_ADDCOCDDJAM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_ADDCOCDDJAM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
