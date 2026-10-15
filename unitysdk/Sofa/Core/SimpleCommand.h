#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define SOFA_CORE_SIMPLECOMMAND_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EC910C0)
#define SOFA_CORE_SIMPLECOMMAND_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC910B0)
#define SOFA_CORE_SIMPLECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EC91110)

namespace Sofa::Core
{
	class SimpleCommand : public ::System::Object
	{
	public:
		::System::Action* _Action; // 0x10
		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SOFA_CORE_SIMPLECOMMAND_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CanExecute(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_CORE_SIMPLECOMMAND_CANEXECUTE_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_CORE_SIMPLECOMMAND_EXECUTE_OFFSET))(this, a1);
		}

	};
}
