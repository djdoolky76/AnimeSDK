#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EGKDMJGMIFC;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

#define JBJAKFHKJEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15C36590)

inline static constexpr unsigned int JBJAKFHKJEJ_TypeDefinitionIndex = 75773;

class JBJAKFHKJEJ : public ::System::Object
{
public:
	::EGKDMJGMIFC* HFPLICABNOE; // 0x10
	::System::Func_3<::System::Int32, ::UnityEngine::Vector3, ::System::Boolean>* INACNIFNOEI; // 0x18
	::System::Action_1<::System::Int32>* JKNEMBABIKL; // 0x20
	::System::Int32 CFPJGKEKCMN; // 0x28
	::System::Int32 PMCFPJNEKNK; // 0x2C
	::System::Boolean AMGBGFDJNFG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJAKFHKJEJ__CTOR_OFFSET))(this);
	}
};
