#pragma once
#include "unitysdk/unitysdk.h"
class EPBCMDMCIJE;
namespace RPG::GameCore { class TaskContext; }

#define PDBPNJKMBGE_CTOR_OFFSET UNITYSDK_OFFSET(0xC912140)
#define PDBPNJKMBGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC912170)

inline static constexpr unsigned int PDBPNJKMBGE_TypeDefinitionIndex = 56942;

	class PDBPNJKMBGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EPBCMDMCIJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EPBCMDMCIJE*))((::PBYTE)hIl2Cpp + PDBPNJKMBGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBPNJKMBGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
