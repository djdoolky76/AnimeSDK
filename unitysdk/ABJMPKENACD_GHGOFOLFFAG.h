#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABJMPKENACD_JHLFACFNHCA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class ABJMPKENACD;
class HAMJECLNFDC;

#define ABJMPKENACD_GHGOFOLFFAG_OCLALIDCJGE_OFFSET UNITYSDK_OFFSET(0x12CD3230)
#define ABJMPKENACD_GHGOFOLFFAG__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD3220)

inline static constexpr unsigned int ABJMPKENACD_GHGOFOLFFAG_TypeDefinitionIndex = 88625;

class ABJMPKENACD_GHGOFOLFFAG : public ::System::Object
{
public:
	::ABJMPKENACD* KLHPEBKNIFB; // 0x10
	::HAMJECLNFDC* EMIENCHHEKK; // 0x18
	::System::Int32 IBBFNAGKMFM; // 0x20
	::System::Int32 OECEGBNCLAA; // 0x24
	::System::Single BCIJJFIHCNC; // 0x28
	::System::Int32 OLBCPACPNGO; // 0x2C
	::System::Int32 PGMKKGGOFJM; // 0x30
	::System::Single IBOBEMIFHEF; // 0x34
	::System::Int32 LMIOAKNOIDO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_GHGOFOLFFAG__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask OCLALIDCJGE(::ABJMPKENACD_JHLFACFNHCA IGAAKDOIPNN)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::ABJMPKENACD_JHLFACFNHCA))((::PBYTE)hIl2Cpp + ABJMPKENACD_GHGOFOLFFAG_OCLALIDCJGE_OFFSET))(this, IGAAKDOIPNN);
	}
};
