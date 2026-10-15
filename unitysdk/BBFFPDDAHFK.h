#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PauseToastQueue; }
namespace RPG::GameCore { class TaskContext; }

#define BBFFPDDAHFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E79EB0)
#define BBFFPDDAHFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E79EE0)

inline static constexpr unsigned int BBFFPDDAHFK_TypeDefinitionIndex = 53061;

	class BBFFPDDAHFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseToastQueue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseToastQueue*))((::PBYTE)hIl2Cpp + BBFFPDDAHFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFFPDDAHFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
