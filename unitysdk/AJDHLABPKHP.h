#pragma once
#include "unitysdk/unitysdk.h"
class AKBGJCOALME;
namespace RPG::GameCore { class TaskContext; }

#define AJDHLABPKHP_CTOR_OFFSET UNITYSDK_OFFSET(0x12D96A20)
#define AJDHLABPKHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D96A50)
#define AJDHLABPKHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D96A90)

inline static constexpr unsigned int AJDHLABPKHP_TypeDefinitionIndex = 55092;

	class AJDHLABPKHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AKBGJCOALME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AKBGJCOALME*))((::PBYTE)hIl2Cpp + AJDHLABPKHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDHLABPKHP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDHLABPKHP_ONTASKBEGIN_OFFSET))(this);
		}

	};
