#pragma once
#include "unitysdk/unitysdk.h"
class LICPPNHKHGD;
namespace RPG::GameCore { class TaskContext; }

#define JDDLMAELNGH_CTOR_OFFSET UNITYSDK_OFFSET(0x165BF890)
#define JDDLMAELNGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165BF8C0)

inline static constexpr unsigned int JDDLMAELNGH_TypeDefinitionIndex = 52476;

	class JDDLMAELNGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LICPPNHKHGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LICPPNHKHGD*))((::PBYTE)hIl2Cpp + JDDLMAELNGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDLMAELNGH_ONTASKBEGIN_OFFSET))(this);
		}

	};
