#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CaptureMainCamera; }
namespace RPG::GameCore { class TaskContext; }

#define AIFMJKHJLEB_CTOR_OFFSET UNITYSDK_OFFSET(0x19B43770)
#define AIFMJKHJLEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B437A0)

inline static constexpr unsigned int AIFMJKHJLEB_TypeDefinitionIndex = 59235;

	class AIFMJKHJLEB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureMainCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureMainCamera*))((::PBYTE)hIl2Cpp + AIFMJKHJLEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFMJKHJLEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
