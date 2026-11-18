#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHCAHMCCPML.h"
#include "unitysdk/System/Object.h"

class OINGKLAHGOI;
namespace System { class String; }
namespace UnityEngine { class Ping; }

#define OINGKLAHGOI_JCIIDJCHMNM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14F86040)
#define OINGKLAHGOI_JCIIDJCHMNM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14F86780)
#define OINGKLAHGOI_JCIIDJCHMNM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14F867E0)
#define OINGKLAHGOI_JCIIDJCHMNM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14F86790)
#define OINGKLAHGOI_JCIIDJCHMNM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14F86030)
#define OINGKLAHGOI_JCIIDJCHMNM__CTOR_OFFSET UNITYSDK_OFFSET(0x14F86020)

inline static constexpr unsigned int OINGKLAHGOI_JCIIDJCHMNM_TypeDefinitionIndex = 65245;

class OINGKLAHGOI_JCIIDJCHMNM : public ::System::Object
{
public:
	::System::String* ACDJGNECLAK; // 0x10
	::UnityEngine::Ping* JOCLBCJADHP; // 0x18
	::OINGKLAHGOI* KLHPEBKNIFB; // 0x20
	::System::Single AOODHDPEKKO; // 0x28
	::System::Boolean HAGNKMPCJNF; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Single DHDPBMGCPPE; // 0x30
	::System::Single IDBEJJEKGDI; // 0x34
	::System::Int32 NDKGGMFDFKP; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C
	::GHCAHMCCPML FKMHMOELCIO; // 0x40

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OINGKLAHGOI_JCIIDJCHMNM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_JCIIDJCHMNM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_JCIIDJCHMNM_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_JCIIDJCHMNM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_JCIIDJCHMNM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGKLAHGOI_JCIIDJCHMNM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
