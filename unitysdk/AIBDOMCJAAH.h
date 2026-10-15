#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BHCJLNFCONE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamAction; }

#define AIBDOMCJAAH_ACICLGANKMA_OFFSET UNITYSDK_OFFSET(0xEB8E5C0)
#define AIBDOMCJAAH_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8E460)
#define AIBDOMCJAAH_DIKIMPMCPNH_OFFSET UNITYSDK_OFFSET(0xEB8E9B0)
#define AIBDOMCJAAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB8E470)
#define AIBDOMCJAAH_OJOONHLJNDL_OFFSET UNITYSDK_OFFSET(0xEB8E8F0)
#define AIBDOMCJAAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB8E510)
#define AIBDOMCJAAH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB8E960)
#define AIBDOMCJAAH_TICK_OFFSET UNITYSDK_OFFSET(0xEB8E4B0)

inline static constexpr unsigned int AIBDOMCJAAH_TypeDefinitionIndex = 55704;

	class AIBDOMCJAAH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TeamAction* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeamAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeamAction*))((::PBYTE)hIl2Cpp + AIBDOMCJAAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBDOMCJAAH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIBDOMCJAAH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBDOMCJAAH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBDOMCJAAH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void ACICLGANKMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBDOMCJAAH_ACICLGANKMA_OFFSET))(this);
		}

		::System::Void OJOONHLJNDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBDOMCJAAH_OJOONHLJNDL_OFFSET))(this);
		}

		::BHCJLNFCONE* DIKIMPMCPNH()
		{
			return ((::BHCJLNFCONE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBDOMCJAAH_DIKIMPMCPNH_OFFSET))(this);
		}

	};
