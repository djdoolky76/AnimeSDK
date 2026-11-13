#pragma once
#include "unitysdk/unitysdk.h"
class OAKAGIALIDL;
namespace RPG::GameCore { class TaskContext; }

#define HACHMDMAFEO_CTOR_OFFSET UNITYSDK_OFFSET(0x17DD3960)
#define HACHMDMAFEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DD3990)

inline static constexpr unsigned int HACHMDMAFEO_TypeDefinitionIndex = 56310;

	class HACHMDMAFEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OAKAGIALIDL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OAKAGIALIDL*))((::PBYTE)hIl2Cpp + HACHMDMAFEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACHMDMAFEO_ONTASKBEGIN_OFFSET))(this);
		}

	};
