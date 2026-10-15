#pragma once
#include "unitysdk/unitysdk.h"
class BEHMLFENEGF;
class GOCLJECCFAK;
namespace RPG::GameCore { class TaskContext; }

#define JEBJNMEDNEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x166191A0)
#define JEBJNMEDNEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16619440)
#define JEBJNMEDNEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166191D0)

inline static constexpr unsigned int JEBJNMEDNEJ_TypeDefinitionIndex = 54861;

	class JEBJNMEDNEJ
	{
	public:
		::BEHMLFENEGF* APPIHABBCGK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GOCLJECCFAK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GOCLJECCFAK*))((::PBYTE)hIl2Cpp + JEBJNMEDNEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBJNMEDNEJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBJNMEDNEJ_DISPOSE_OFFSET))(this);
		}

	};
