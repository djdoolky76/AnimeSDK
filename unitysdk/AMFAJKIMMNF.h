#pragma once
#include "unitysdk/unitysdk.h"
class MMFMAIKPPDO;
namespace RPG::GameCore { class TaskContext; }

#define AMFAJKIMMNF_CTOR_OFFSET UNITYSDK_OFFSET(0x155710A0)
#define AMFAJKIMMNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155710D0)

inline static constexpr unsigned int AMFAJKIMMNF_TypeDefinitionIndex = 55049;

	class AMFAJKIMMNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MMFMAIKPPDO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MMFMAIKPPDO*))((::PBYTE)hIl2Cpp + AMFAJKIMMNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFAJKIMMNF_ONTASKBEGIN_OFFSET))(this);
		}

	};
