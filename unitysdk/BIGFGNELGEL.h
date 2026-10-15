#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::Client { class QteCatchGhostRewindInstance; }
namespace RPG::GameCore { class QteCatchGhostRewind; }
namespace RPG::GameCore { class TaskContext; }

#define BIGFGNELGEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A7710)
#define BIGFGNELGEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4A7780)
#define BIGFGNELGEL_MNBCEAPBHCE_OFFSET UNITYSDK_OFFSET(0xB4A7D10)
#define BIGFGNELGEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4A78A0)
#define BIGFGNELGEL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4A7EB0)
#define BIGFGNELGEL_TICK_OFFSET UNITYSDK_OFFSET(0xB4A7F00)

inline static constexpr unsigned int BIGFGNELGEL_TypeDefinitionIndex = 53190;

	class BIGFGNELGEL : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::QteCatchGhostRewindInstance* FLMODBLFAGD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::QteCatchGhostRewind* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QteCatchGhostRewind* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QteCatchGhostRewind*))((::PBYTE)hIl2Cpp + BIGFGNELGEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGFGNELGEL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGFGNELGEL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void MNBCEAPBHCE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BIGFGNELGEL_MNBCEAPBHCE_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGFGNELGEL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIGFGNELGEL_TICK_OFFSET))(this, a1);
		}

	};
