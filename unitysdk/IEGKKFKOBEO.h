#pragma once
#include "unitysdk/unitysdk.h"
class JCILHCAJAFM;
namespace RPG::GameCore { class TaskContext; }

#define IEGKKFKOBEO_CTOR_OFFSET UNITYSDK_OFFSET(0x15EEDCC0)
#define IEGKKFKOBEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EEDCF0)

inline static constexpr unsigned int IEGKKFKOBEO_TypeDefinitionIndex = 52869;

	class IEGKKFKOBEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JCILHCAJAFM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JCILHCAJAFM*))((::PBYTE)hIl2Cpp + IEGKKFKOBEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGKKFKOBEO_ONTASKBEGIN_OFFSET))(this);
		}

	};
