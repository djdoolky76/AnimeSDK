#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Threading { class Thread; }

#define PARADOXNOTION_SERVICES_THREADER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1D5EDE40)
#define PARADOXNOTION_SERVICES_THREADER_GET_APPLICATIONISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D5EDB40)
#define PARADOXNOTION_SERVICES_THREADER_GET_ISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1D5EDC00)
#define PARADOXNOTION_SERVICES_THREADER_SET_APPLICATIONISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D5EDBA0)
#define PARADOXNOTION_SERVICES_THREADER_STARTACTION_OFFSET UNITYSDK_OFFSET(0x1D5EDCC0)
#define PARADOXNOTION_SERVICES_THREADER_THREADMONITOR_OFFSET UNITYSDK_OFFSET(0x1D5EDF80)
#define PARADOXNOTION_SERVICES_THREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5EDAE0)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader_TypeDefinitionIndex = 29284;

	class Threader : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__applicationIsPlaying_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Threader_TypeDefinitionIndex)->GetStaticField(0x7E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_applicationIsPlaying()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER_GET_APPLICATIONISPLAYING_OFFSET))();
		}

		static ::System::Void set_applicationIsPlaying(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER_SET_APPLICATIONISPLAYING_OFFSET))(value);
		}

		static ::System::Boolean get_isMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER_GET_ISMAINTHREAD_OFFSET))();
		}

		static ::System::Threading::Thread* StartAction(::System::Threading::Thread* thread, ::System::Action* function, ::System::Action* callback)
		{
			return ((::System::Threading::Thread*(*)(::System::Threading::Thread*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER_STARTACTION_OFFSET))(thread, function, callback);
		}

		static ::System::Void Begin(::System::Threading::Thread* thread, ::System::Action* callback)
		{
			return ((::System::Void(*)(::System::Threading::Thread*, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER_BEGIN_OFFSET))(thread, callback);
		}

		static ::System::Collections::IEnumerator* ThreadMonitor(::System::Threading::Thread* thread, ::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Threading::Thread*, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER_THREADMONITOR_OFFSET))(thread, callback);
		}
	};
}
