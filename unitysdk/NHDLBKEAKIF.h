#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpticalIllusionSetOpCount; }
namespace RPG::GameCore { class TaskContext; }

#define NHDLBKEAKIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB8850)
#define NHDLBKEAKIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBB8880)

inline static constexpr unsigned int NHDLBKEAKIF_TypeDefinitionIndex = 53044;

	class NHDLBKEAKIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionSetOpCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionSetOpCount*))((::PBYTE)hIl2Cpp + NHDLBKEAKIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDLBKEAKIF_ONTASKBEGIN_OFFSET))(this);
		}

	};
