#pragma once
#include "unitysdk/unitysdk.h"
class IGDMEOFGJAH;
namespace RPG::GameCore { class TaskContext; }

#define EDFCABNODNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1330F150)
#define EDFCABNODNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1330F180)

inline static constexpr unsigned int EDFCABNODNP_TypeDefinitionIndex = 57941;

	class EDFCABNODNP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IGDMEOFGJAH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IGDMEOFGJAH*))((::PBYTE)hIl2Cpp + EDFCABNODNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFCABNODNP_ONTASKBEGIN_OFFSET))(this);
		}

	};
