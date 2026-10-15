#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger::Services { class ConsoleEntry; }
namespace System { class Action; }
namespace System { class Object; }

#define SRDEBUG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED364C0)
#define SRDEBUG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED364F0)
#define SRDEBUG___C__GETDEFAULTCOPYCONSOLEITEMCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x1ED36500)

inline static constexpr unsigned int SRDebug___c_TypeDefinitionIndex = 37947;

	class SRDebug___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38D90);
		}

		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38D98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUG___C_CTOR_OFFSET))(this);
		}

		::System::Void _GetDefaultCopyConsoleItemCallback_b__8_0(::SRDebugger::Services::ConsoleEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleEntry*))((::PBYTE)hIl2Cpp + SRDEBUG___C__GETDEFAULTCOPYCONSOLEITEMCALLBACK_B__8_0_OFFSET))(this, a1);
		}

	};
