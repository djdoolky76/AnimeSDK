#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StackStatusDesc; }
namespace RPG::GameCore { class TaskContext; }

#define NBCIEGEGPBD_CTOR_OFFSET UNITYSDK_OFFSET(0xBABD810)
#define NBCIEGEGPBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBABD840)

inline static constexpr unsigned int NBCIEGEGPBD_TypeDefinitionIndex = 55652;

	class NBCIEGEGPBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackStatusDesc* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackStatusDesc*))((::PBYTE)hIl2Cpp + NBCIEGEGPBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCIEGEGPBD_ONTASKBEGIN_OFFSET))(this);
		}

	};
