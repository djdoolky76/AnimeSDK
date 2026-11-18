#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGCPMGNHCNN_ABHKCBLDILM_OMNIBPJPFEP_OFFSET UNITYSDK_OFFSET(0x179080C0)
#define KGCPMGNHCNN_ABHKCBLDILM__CTOR_OFFSET UNITYSDK_OFFSET(0x179080B0)

inline static constexpr unsigned int KGCPMGNHCNN_ABHKCBLDILM_TypeDefinitionIndex = 72614;

class KGCPMGNHCNN_ABHKCBLDILM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OEGEAFMAFBI; // 0x10
	::System::String* NFLDEIEOEOB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BPGPPMDMKEK; // 0x20
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_ABHKCBLDILM__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::String*>> OMNIBPJPFEP()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::String*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_ABHKCBLDILM_OMNIBPJPFEP_OFFSET))(this);
	}
};
