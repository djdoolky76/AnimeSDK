#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class GameObject; }

#define ALHNDPMOFNF_OGGDBJGOLDG__CTOR_OFFSET UNITYSDK_OFFSET(0x135F60D0)

inline static constexpr unsigned int ALHNDPMOFNF_OGGDBJGOLDG_TypeDefinitionIndex = 86728;

class ALHNDPMOFNF_OGGDBJGOLDG : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*>>* KKPAJNGHFJC; // 0x10
	::System::Threading::CancellationTokenSource* HKBMJFIFPDG; // 0x18
	::System::Boolean NAIJMICLJJP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_OGGDBJGOLDG__CTOR_OFFSET))(this);
	}
};
