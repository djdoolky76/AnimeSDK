#pragma once
#include "unitysdk/unitysdk.h"
class FPONDLFPJHM;
namespace RPG::GameCore { class TaskContext; }

#define FLOCJFHOOPF_CTOR_OFFSET UNITYSDK_OFFSET(0x158429F0)
#define FLOCJFHOOPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15842A20)

inline static constexpr unsigned int FLOCJFHOOPF_TypeDefinitionIndex = 53198;

	class FLOCJFHOOPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FPONDLFPJHM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FPONDLFPJHM*))((::PBYTE)hIl2Cpp + FLOCJFHOOPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOCJFHOOPF_ONTASKBEGIN_OFFSET))(this);
		}

	};
