#pragma once
#include "unitysdk/unitysdk.h"
class AKBGJCOALME;
namespace RPG::GameCore { class TaskContext; }

#define AJDHLABPKHP_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB3470)
#define AJDHLABPKHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CB34A0)
#define AJDHLABPKHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CB34E0)

inline static constexpr unsigned int AJDHLABPKHP_TypeDefinitionIndex = 53928;

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
