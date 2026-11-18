#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NECFCJGAJML.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class IAEOCKOHIMH;
namespace System { class Action; }

#define FGHCEPIOEHM_IEBEAFMEJLH_NAKPBEDNCFL_OFFSET UNITYSDK_OFFSET(0x156B9700)
#define FGHCEPIOEHM_IEBEAFMEJLH_NDMGOMOLIEJ_OFFSET UNITYSDK_OFFSET(0x156B96D0)
#define FGHCEPIOEHM_IEBEAFMEJLH__CTOR_OFFSET UNITYSDK_OFFSET(0x156B96C0)

inline static constexpr unsigned int FGHCEPIOEHM_IEBEAFMEJLH_TypeDefinitionIndex = 69820;

class FGHCEPIOEHM_IEBEAFMEJLH : public ::System::Object
{
public:
	::IAEOCKOHIMH* HHIJHDFHPOI; // 0x10
	::System::Action* KINMLAJFLLF; // 0x18
	::System::Single AMDBMGPGOBF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCEPIOEHM_IEBEAFMEJLH__CTOR_OFFSET))(this);
	}

	::System::Void NDMGOMOLIEJ(::NECFCJGAJML PIIPCLCCOIG, ::NECFCJGAJML HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::NECFCJGAJML, ::NECFCJGAJML))((::PBYTE)hIl2Cpp + FGHCEPIOEHM_IEBEAFMEJLH_NDMGOMOLIEJ_OFFSET))(this, PIIPCLCCOIG, HODAIDNDKHD);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid NAKPBEDNCFL()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCEPIOEHM_IEBEAFMEJLH_NAKPBEDNCFL_OFFSET))(this);
	}
};
