#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideTopPageWithoutAnim; }
namespace RPG::GameCore { class TaskContext; }

#define DCFGFLGLBGN_CTOR_OFFSET UNITYSDK_OFFSET(0xE240DD0)
#define DCFGFLGLBGN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE240E00)

inline static constexpr unsigned int DCFGFLGLBGN_TypeDefinitionIndex = 58154;

	class DCFGFLGLBGN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideTopPageWithoutAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideTopPageWithoutAnim*))((::PBYTE)hIl2Cpp + DCFGFLGLBGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFGFLGLBGN_ONTASKBEGIN_OFFSET))(this);
		}

	};
