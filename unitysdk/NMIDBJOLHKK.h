#pragma once
#include "unitysdk/unitysdk.h"
class CIDMEPLLPIM;
namespace RPG::GameCore { class TaskContext; }

#define NMIDBJOLHKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4460E0)
#define NMIDBJOLHKK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A446110)

inline static constexpr unsigned int NMIDBJOLHKK_TypeDefinitionIndex = 56709;

	class NMIDBJOLHKK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CIDMEPLLPIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CIDMEPLLPIM*))((::PBYTE)hIl2Cpp + NMIDBJOLHKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIDBJOLHKK_ONTASKBEGIN_OFFSET))(this);
		}

	};
