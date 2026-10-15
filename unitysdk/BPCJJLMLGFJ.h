#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define BPCJJLMLGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC19E470)
#define BPCJJLMLGFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC19E3C0)
#define BPCJJLMLGFJ_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xC19E400)

inline static constexpr unsigned int BPCJJLMLGFJ_TypeDefinitionIndex = 75455;

	class BPCJJLMLGFJ : public ::System::Object
	{
	public:
		::System::Action* PEIHJAEIGHK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCJJLMLGFJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCJJLMLGFJ_DISPOSE_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BPCJJLMLGFJ_IIOIMDJJEDG_OFFSET))(this, a1);
		}

	};
