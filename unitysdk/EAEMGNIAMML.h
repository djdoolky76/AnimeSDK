#pragma once
#include "unitysdk/unitysdk.h"
class BAEIFJIHOCE;
namespace RPG::GameCore { class TaskContext; }

#define EAEMGNIAMML_CTOR_OFFSET UNITYSDK_OFFSET(0x12674F50)
#define EAEMGNIAMML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12674F80)

inline static constexpr unsigned int EAEMGNIAMML_TypeDefinitionIndex = 58045;

	class EAEMGNIAMML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BAEIFJIHOCE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BAEIFJIHOCE*))((::PBYTE)hIl2Cpp + EAEMGNIAMML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEMGNIAMML_ONTASKBEGIN_OFFSET))(this);
		}

	};
