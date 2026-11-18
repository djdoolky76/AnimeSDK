#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNFKOHJGMFM;
class NEKJAFKLINL;

#define HNFKOHJGMFM_MALEEMBPGLA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15DCA570)
#define HNFKOHJGMFM_MALEEMBPGLA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DCBEB0)
#define HNFKOHJGMFM_MALEEMBPGLA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15DCBF10)
#define HNFKOHJGMFM_MALEEMBPGLA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15DCBEC0)
#define HNFKOHJGMFM_MALEEMBPGLA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DCA560)
#define HNFKOHJGMFM_MALEEMBPGLA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCA550)

inline static constexpr unsigned int HNFKOHJGMFM_MALEEMBPGLA_TypeDefinitionIndex = 42986;

class HNFKOHJGMFM_MALEEMBPGLA : public ::System::Object
{
public:
	::HNFKOHJGMFM* KLHPEBKNIFB; // 0x10
	::NEKJAFKLINL* ADIEIFDCBGP; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20
	::System::Boolean OAEJPPCLFJC; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int64 DMGGJNECIAF; // 0x28
	::System::Single IDBEJJEKGDI; // 0x30
	::System::Byte _padding1[0x4];
	::System::Int64 CGIMCBPBNPB; // 0x38

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_MALEEMBPGLA__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_MALEEMBPGLA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_MALEEMBPGLA_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_MALEEMBPGLA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_MALEEMBPGLA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKOHJGMFM_MALEEMBPGLA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
