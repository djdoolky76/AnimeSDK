#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvNPCSetHidden; }
namespace RPG::GameCore { class TaskContext; }

#define NJONEDJJDCD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC29E90)
#define NJONEDJJDCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC29EC0)

inline static constexpr unsigned int NJONEDJJDCD_TypeDefinitionIndex = 52442;

	class NJONEDJJDCD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCSetHidden* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCSetHidden*))((::PBYTE)hIl2Cpp + NJONEDJJDCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJONEDJJDCD_ONTASKBEGIN_OFFSET))(this);
		}

	};
