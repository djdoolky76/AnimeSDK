#pragma once
#include "unitysdk/unitysdk.h"
class AEACMGNBAAP;
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OOGKJMFLNPO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF7CA10)
#define OOGKJMFLNPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF7CB50)
#define OOGKJMFLNPO_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0xBF7CD10)
#define OOGKJMFLNPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF7CC10)
#define OOGKJMFLNPO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF7CAA0)
#define OOGKJMFLNPO_TICK_OFFSET UNITYSDK_OFFSET(0xBF7CAF0)

inline static constexpr unsigned int OOGKJMFLNPO_TypeDefinitionIndex = 52939;

	class OOGKJMFLNPO
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsWindowService* MPFFGNPIDOA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AEACMGNBAAP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AEACMGNBAAP*))((::PBYTE)hIl2Cpp + OOGKJMFLNPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGKJMFLNPO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOGKJMFLNPO_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGKJMFLNPO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOGKJMFLNPO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOGKJMFLNPO_FEIHGKFLMGL_OFFSET))(this, a1);
		}

	};
