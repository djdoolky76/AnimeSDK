#pragma once
#include "unitysdk/unitysdk.h"
class LODGEMFGOHI;
namespace RPG::GameCore { class TaskContext; }

#define JPLLCOBIKIB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4C600)
#define JPLLCOBIKIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB4C630)

inline static constexpr unsigned int JPLLCOBIKIB_TypeDefinitionIndex = 56778;

	class JPLLCOBIKIB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LODGEMFGOHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LODGEMFGOHI*))((::PBYTE)hIl2Cpp + JPLLCOBIKIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLLCOBIKIB_ONTASKBEGIN_OFFSET))(this);
		}

	};
