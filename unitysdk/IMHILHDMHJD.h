#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CreateAirline; }
namespace RPG::GameCore { class TaskContext; }

#define IMHILHDMHJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D32B0)
#define IMHILHDMHJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5D32E0)

inline static constexpr unsigned int IMHILHDMHJD_TypeDefinitionIndex = 59276;

	class IMHILHDMHJD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateAirline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateAirline*))((::PBYTE)hIl2Cpp + IMHILHDMHJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHILHDMHJD_ONTASKBEGIN_OFFSET))(this);
		}

	};
