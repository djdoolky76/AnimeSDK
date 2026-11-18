#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define MPPJIPPJJOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x177DB8B0)

inline static constexpr unsigned int MPPJIPPJJOJ_TypeDefinitionIndex = 44015;

class MPPJIPPJJOJ : public ::System::Object
{
public:
	::System::Action_2<::System::Int32, ::System::Boolean>* BPMHINAKHJM; // 0x10
	::System::Func_2<::System::Int32, ::System::Boolean>* JFLJKEKANND; // 0x18
	::System::Func_1<::System::Boolean>* CMDGHEMACLM; // 0x20
	::System::Func_2<::System::Int32, ::System::Int32>* IMDNFGOFMCE; // 0x28
	::System::Boolean HHBMPLLMFAL; // 0x30
	::System::Boolean JKDAICPFAHG; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPJIPPJJOJ__CTOR_OFFSET))(this);
	}
};
