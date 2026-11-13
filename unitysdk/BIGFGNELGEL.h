#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::Client { class QteCatchGhostRewindInstance; }
namespace RPG::GameCore { class QteCatchGhostRewind; }
namespace RPG::GameCore { class TaskContext; }

#define BIGFGNELGEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB5DE0)
#define BIGFGNELGEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BAB5E50)
#define BIGFGNELGEL_MNBCEAPBHCE_OFFSET UNITYSDK_OFFSET(0x1BAB63D0)
#define BIGFGNELGEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BAB5F60)
#define BIGFGNELGEL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BAB6570)
#define BIGFGNELGEL_TICK_OFFSET UNITYSDK_OFFSET(0x1BAB65C0)

inline static constexpr unsigned int BIGFGNELGEL_TypeDefinitionIndex = 54352;

	class BIGFGNELGEL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::QteCatchGhostRewind* OFKGLJOAMLD; // 0x18
		::RPG::Client::QteCatchGhostRewindInstance* FLMODBLFAGD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
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
