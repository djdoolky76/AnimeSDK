#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyDamageDisplayData; }
namespace RPG::GameCore { class TaskContext; }

#define NKFIEDBMMED_CTOR_OFFSET UNITYSDK_OFFSET(0xC516FF0)
#define NKFIEDBMMED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC517020)

inline static constexpr unsigned int NKFIEDBMMED_TypeDefinitionIndex = 56374;

	class NKFIEDBMMED
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyDamageDisplayData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyDamageDisplayData*))((::PBYTE)hIl2Cpp + NKFIEDBMMED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKFIEDBMMED_ONTASKBEGIN_OFFSET))(this);
		}

	};
