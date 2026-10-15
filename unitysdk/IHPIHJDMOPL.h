#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimMusicEventInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IHPIHJDMOPL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB48860)
#define IHPIHJDMOPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB487C0)

inline static constexpr unsigned int IHPIHJDMOPL_TypeDefinitionIndex = 43638;

	class IHPIHJDMOPL : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::RPG::GameCore::FiveDimMusicEventInfo*>* DHPACGHECNM; // 0x10
		::System::Single GAFENHHEBPG; // 0x18
		::System::Void _ctor(::System::Single a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FiveDimMusicEventInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FiveDimMusicEventInfo*>*))((::PBYTE)hIl2Cpp + IHPIHJDMOPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPIHJDMOPL_CLEAR_OFFSET))(this);
		}

	};
