#pragma once
#include "unitysdk/unitysdk.h"
class GBNDGGGHDNB;
namespace RPG::GameCore { class IdleLiveUiVisibleData; }
namespace RPG::GameCore { class TaskContext; }

#define AMBJNEGFMED_CTOR_OFFSET UNITYSDK_OFFSET(0x1556AC90)
#define AMBJNEGFMED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1556AD80)
#define AMBJNEGFMED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1556AD20)

inline static constexpr unsigned int AMBJNEGFMED_TypeDefinitionIndex = 58168;

	class AMBJNEGFMED
	{
	public:
		::RPG::GameCore::IdleLiveUiVisibleData* MDKIIPKFEOE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GBNDGGGHDNB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GBNDGGGHDNB*))((::PBYTE)hIl2Cpp + AMBJNEGFMED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBJNEGFMED_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBJNEGFMED_DISPOSE_OFFSET))(this);
		}

	};
