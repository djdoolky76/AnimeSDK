#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger { class OptionDefinition; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

namespace SRDebugger::Internal
{
	class SRDebuggerUtil___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::Object*, ::System::Reflection::MethodInfo*, ::SRDebugger::OptionDefinition*>** StaticGet__1___GetMethodOptionDefinition()
		{
			return (::System::Func_3<::System::Object*, ::System::Reflection::MethodInfo*, ::SRDebugger::OptionDefinition*>**)UnitySDK::FromName("SRDebugger.Internal", "<>O")->GetStaticField(0x39870);
		}

		static ::System::Func_3<::System::Object*, ::System::Reflection::PropertyInfo*, ::SRDebugger::OptionDefinition*>** StaticGet__0___GetPropertyOptionDefinition()
		{
			return (::System::Func_3<::System::Object*, ::System::Reflection::PropertyInfo*, ::SRDebugger::OptionDefinition*>**)UnitySDK::FromName("SRDebugger.Internal", "<>O")->GetStaticField(0x39878);
		}

	};
}
