#pragma once
#include "unitysdk/unitysdk.h"
class ALKKNOJJLFL;
namespace RPG::GameCore { class TaskContext; }

#define OFDKNFJMPAG_CTOR_OFFSET UNITYSDK_OFFSET(0x176651B0)
#define OFDKNFJMPAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176651E0)

inline static constexpr unsigned int OFDKNFJMPAG_TypeDefinitionIndex = 59896;

	class OFDKNFJMPAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ALKKNOJJLFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ALKKNOJJLFL*))((::PBYTE)hIl2Cpp + OFDKNFJMPAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDKNFJMPAG_ONTASKBEGIN_OFFSET))(this);
		}

	};
