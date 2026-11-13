#pragma once
#include "unitysdk/unitysdk.h"
class BEHMLFENEGF;
class GOCLJECCFAK;
namespace RPG::GameCore { class TaskContext; }

#define JEBJNMEDNEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13061E50)
#define JEBJNMEDNEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13062100)
#define JEBJNMEDNEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13061E80)

inline static constexpr unsigned int JEBJNMEDNEJ_TypeDefinitionIndex = 56031;

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
