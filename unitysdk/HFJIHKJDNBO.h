#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureCameraToOrthographic; }
namespace RPG::GameCore { class TaskContext; }

#define HFJIHKJDNBO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C704F0)
#define HFJIHKJDNBO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C70520)

inline static constexpr unsigned int HFJIHKJDNBO_TypeDefinitionIndex = 54833;

	class HFJIHKJDNBO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraToOrthographic* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraToOrthographic*))((::PBYTE)hIl2Cpp + HFJIHKJDNBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJIHKJDNBO_ONTASKBEGIN_OFFSET))(this);
		}

	};
