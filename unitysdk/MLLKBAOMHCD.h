#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFHNCJALFJK;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }

#define MLLKBAOMHCD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13023DC0)
#define MLLKBAOMHCD__CTOR_OFFSET UNITYSDK_OFFSET(0x13023DB0)

inline static constexpr unsigned int MLLKBAOMHCD_TypeDefinitionIndex = 85075;

class MLLKBAOMHCD : public ::System::Object
{
public:
	::System::Action_6<::KFHNCJALFJK*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32>* DFPPJJPCKPA; // 0x10
	::System::Boolean DGFJJCIAGPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLKBAOMHCD__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLKBAOMHCD_NPOLNFDBOOD_OFFSET))(this);
	}
};
