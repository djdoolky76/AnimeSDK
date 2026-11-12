#pragma once
#include "unitysdk/unitysdk.h"
class PEGCILIIKEE;
namespace RPG::GameCore { class TaskContext; }

#define OEJJBMLPKCL_CTOR_OFFSET UNITYSDK_OFFSET(0xC6E7B30)
#define OEJJBMLPKCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6E7B60)
#define OEJJBMLPKCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC6E7BA0)

inline static constexpr unsigned int OEJJBMLPKCL_TypeDefinitionIndex = 56376;

	class OEJJBMLPKCL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PEGCILIIKEE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PEGCILIIKEE*))((::PBYTE)hIl2Cpp + OEJJBMLPKCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJJBMLPKCL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJJBMLPKCL_ONTASKBEGIN_OFFSET))(this);
		}

	};
