#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DEEJKBIMHAA;
namespace RPG::GameCore { class RandomSelectInTargetList; }
namespace RPG::GameCore { class TaskContext; }

#define BPJHOKNMJAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCB47AA0)
#define BPJHOKNMJAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB47AE0)
#define BPJHOKNMJAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB47B20)
#define BPJHOKNMJAJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB47E60)
#define BPJHOKNMJAJ_TICK_OFFSET UNITYSDK_OFFSET(0xCB47EB0)

inline static constexpr unsigned int BPJHOKNMJAJ_TypeDefinitionIndex = 56457;

	class BPJHOKNMJAJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RandomSelectInTargetList* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::DEEJKBIMHAA* AIJGGLCAEON; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectInTargetList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectInTargetList*))((::PBYTE)hIl2Cpp + BPJHOKNMJAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJHOKNMJAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJHOKNMJAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJHOKNMJAJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPJHOKNMJAJ_TICK_OFFSET))(this, a1);
		}

	};
