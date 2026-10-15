#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableRootMotion; }
namespace RPG::GameCore { class TaskContext; }

#define GNKJANAAHKB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B09680)
#define GNKJANAAHKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B096B0)

inline static constexpr unsigned int GNKJANAAHKB_TypeDefinitionIndex = 55877;

	class GNKJANAAHKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableRootMotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableRootMotion*))((::PBYTE)hIl2Cpp + GNKJANAAHKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKJANAAHKB_ONTASKBEGIN_OFFSET))(this);
		}

	};
