#pragma once
#include "unitysdk/unitysdk.h"
class KCMEDJEKHAD;
namespace RPG::GameCore { class TaskContext; }

#define NHFHCNNEKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x14891E90)
#define NHFHCNNEKAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14891EC0)

inline static constexpr unsigned int NHFHCNNEKAJ_TypeDefinitionIndex = 48644;

	class NHFHCNNEKAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KCMEDJEKHAD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KCMEDJEKHAD*))((::PBYTE)hIl2Cpp + NHFHCNNEKAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFHCNNEKAJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
