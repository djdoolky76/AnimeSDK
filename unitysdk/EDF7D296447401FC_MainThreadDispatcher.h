#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDF7D296447401FC_MAINTHREADDISPATCHER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x39D4B40)
#define EDF7D296447401FC_MAINTHREADDISPATCHER_BA194D35984743BC_OFFSET UNITYSDK_OFFSET(0x39D4A90)
#define EDF7D296447401FC_MAINTHREADDISPATCHER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x39D4B90)
#define EDF7D296447401FC_MAINTHREADDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x39D4DC0)

inline static constexpr unsigned int EDF7D296447401FC_MainThreadDispatcher_TypeDefinitionIndex = 12694;

class EDF7D296447401FC_MainThreadDispatcher : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Object* A141051298FB79F4; // 0x20
	::System::Collections::Generic::List_1<::System::Action*>* A0B3C309F726525D; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDF7D296447401FC_MAINTHREADDISPATCHER__CTOR_OFFSET))(this);
	}

	::System::Void BA194D35984743BC(::System::Action* BC288918C940C7A6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EDF7D296447401FC_MAINTHREADDISPATCHER_BA194D35984743BC_OFFSET))(this, BC288918C940C7A6);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDF7D296447401FC_MAINTHREADDISPATCHER_E02954280801633F_OFFSET))(this);
	}

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDF7D296447401FC_MAINTHREADDISPATCHER_AB36E0EE549986E5_OFFSET))(this);
	}
};
