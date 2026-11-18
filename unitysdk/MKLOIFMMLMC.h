#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class NPCBBDGEGPM;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKLOIFMMLMC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x18B4F290)
#define MKLOIFMMLMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B4E7B0)
#define MKLOIFMMLMC_LAMBCMLPLKF_OFFSET UNITYSDK_OFFSET(0x18B4EC10)
#define MKLOIFMMLMC_PCJJCDNFEOI_OFFSET UNITYSDK_OFFSET(0x18B4EEF0)
#define MKLOIFMMLMC_PJKGENIIILP_OFFSET UNITYSDK_OFFSET(0x18B4E9C0)
#define MKLOIFMMLMC__CTOR_OFFSET UNITYSDK_OFFSET(0x18B4EC00)

inline static constexpr unsigned int MKLOIFMMLMC_TypeDefinitionIndex = 57828;

class MKLOIFMMLMC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* GNGEPHDFDLI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>* NEOMIBCCBGN; // 0x18
	::NPCBBDGEGPM* FJGPCCDODHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOIFMMLMC__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOIFMMLMC_DISPOSE_OFFSET))(this);
	}

	::System::Void PJKGENIIILP(::System::Int32 AJJPHGLFOID, ::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*>>* GECCHCDNAHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*>>*))((::PBYTE)hIl2Cpp + MKLOIFMMLMC_PJKGENIIILP_OFFSET))(this, AJJPHGLFOID, GECCHCDNAHI);
	}

	::System::Void LAMBCMLPLKF(::System::Int32 AJJPHGLFOID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKLOIFMMLMC_LAMBCMLPLKF_OFFSET))(this, AJJPHGLFOID);
	}

	::System::Void PCJJCDNFEOI(::System::Action_1<::System::Int32>* IMCHBOJOJDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MKLOIFMMLMC_PCJJCDNFEOI_OFFSET))(this, IMCHBOJOJDI);
	}

	::System::Void BBOMJDBNHIC(::NPCBBDGEGPM* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::NPCBBDGEGPM*))((::PBYTE)hIl2Cpp + MKLOIFMMLMC_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}
};
