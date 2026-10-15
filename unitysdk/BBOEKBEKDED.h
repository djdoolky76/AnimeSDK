#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SyncDitherWithTarget; }
namespace RPG::GameCore { class TaskContext; }

#define BBOEKBEKDED_CTOR_OFFSET UNITYSDK_OFFSET(0x15E8DD30)
#define BBOEKBEKDED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E8DD60)

inline static constexpr unsigned int BBOEKBEKDED_TypeDefinitionIndex = 58762;

	class BBOEKBEKDED
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncDitherWithTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncDitherWithTarget*))((::PBYTE)hIl2Cpp + BBOEKBEKDED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOEKBEKDED_ONTASKBEGIN_OFFSET))(this);
		}

	};
