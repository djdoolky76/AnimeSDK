#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPLFJICIMNH.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitCustomString; }

#define FOBLEKNLHAE_CTOR_OFFSET UNITYSDK_OFFSET(0x158E1270)

inline static constexpr unsigned int FOBLEKNLHAE_TypeDefinitionIndex = 58881;

	class FOBLEKNLHAE : public ::MPLFJICIMNH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitCustomString*))((::PBYTE)hIl2Cpp + FOBLEKNLHAE_CTOR_OFFSET))(this, a1, a2);
		}

	};
