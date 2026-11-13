#pragma once
#include "unitysdk/unitysdk.h"
class LODGEMFGOHI;
namespace RPG::GameCore { class TaskContext; }

#define JPLLCOBIKIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5059B0)
#define JPLLCOBIKIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B5059E0)

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
