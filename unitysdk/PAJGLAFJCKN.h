#pragma once
#include "unitysdk/unitysdk.h"
class PHEIFPCCCOC;
namespace RPG::GameCore { class TaskContext; }

#define PAJGLAFJCKN_CTOR_OFFSET UNITYSDK_OFFSET(0x18ADB9B0)
#define PAJGLAFJCKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18ADB9E0)

inline static constexpr unsigned int PAJGLAFJCKN_TypeDefinitionIndex = 56308;

	class PAJGLAFJCKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PHEIFPCCCOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PHEIFPCCCOC*))((::PBYTE)hIl2Cpp + PAJGLAFJCKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJGLAFJCKN_ONTASKBEGIN_OFFSET))(this);
		}

	};
