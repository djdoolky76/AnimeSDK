#pragma once
#include "unitysdk/unitysdk.h"
class GJJIBJDCLHM;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define HKDGOHKDBOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D3F910)
#define HKDGOHKDBOH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D3F990)

inline static constexpr unsigned int HKDGOHKDBOH_TypeDefinitionIndex = 52654;

	class HKDGOHKDBOH
	{
	public:
		::NGFHCJIAOLH* NFJGMKPFPOC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GJJIBJDCLHM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GJJIBJDCLHM*))((::PBYTE)hIl2Cpp + HKDGOHKDBOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDGOHKDBOH_EVALUATE_OFFSET))(this);
		}

	};
