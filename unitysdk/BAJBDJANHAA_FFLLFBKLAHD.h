#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class EADLNAAMFFE;

#define BAJBDJANHAA_FFLLFBKLAHD_CJLJHLMJCEC_OFFSET UNITYSDK_OFFSET(0x1360DC40)
#define BAJBDJANHAA_FFLLFBKLAHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1360DC30)

inline static constexpr unsigned int BAJBDJANHAA_FFLLFBKLAHD_TypeDefinitionIndex = 56310;

class BAJBDJANHAA_FFLLFBKLAHD : public ::System::Object
{
public:
	::Il2CppArray<::EADLNAAMFFE*>* BNBGIFONPGI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJBDJANHAA_FFLLFBKLAHD__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CJLJHLMJCEC(::System::Threading::CancellationToken CBJFKEAGLGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BAJBDJANHAA_FFLLFBKLAHD_CJLJHLMJCEC_OFFSET))(this, CBJFKEAGLGD);
	}
};
