#pragma once
#include "unitysdk/unitysdk.h"
class FBHINCGMBDJ;
namespace RPG::GameCore { class TaskContext; }

#define LPMIOKEEJIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8245C0)
#define LPMIOKEEJIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8245F0)

inline static constexpr unsigned int LPMIOKEEJIF_TypeDefinitionIndex = 55577;

	class LPMIOKEEJIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FBHINCGMBDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FBHINCGMBDJ*))((::PBYTE)hIl2Cpp + LPMIOKEEJIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMIOKEEJIF_ONTASKBEGIN_OFFSET))(this);
		}

	};
