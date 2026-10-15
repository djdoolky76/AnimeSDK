#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class LittleGameAbilityPixAirFireLaser; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DMHHOBAMGFN_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBB620)
#define DMHHOBAMGFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEBB630)
#define DMHHOBAMGFN_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xFEBC190)
#define DMHHOBAMGFN_GJBIJCAFLJH_OFFSET UNITYSDK_OFFSET(0xFEBBB10)
#define DMHHOBAMGFN_MNONPFEGMPH_OFFSET UNITYSDK_OFFSET(0xFEBB960)
#define DMHHOBAMGFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEBB670)
#define DMHHOBAMGFN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFEBC0E0)
#define DMHHOBAMGFN_TICK_OFFSET UNITYSDK_OFFSET(0xFEBC130)

inline static constexpr unsigned int DMHHOBAMGFN_TypeDefinitionIndex = 58188;

	class DMHHOBAMGFN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LittleGameAbilityPixAirFireLaser* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser*))((::PBYTE)hIl2Cpp + DMHHOBAMGFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHHOBAMGFN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHHOBAMGFN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GJBIJCAFLJH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMHHOBAMGFN_GJBIJCAFLJH_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHHOBAMGFN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMHHOBAMGFN_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHHOBAMGFN_GETCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* MNONPFEGMPH(::IOGNBKGNPFD* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*))((::PBYTE)hIl2Cpp + DMHHOBAMGFN_MNONPFEGMPH_OFFSET))(this, a1);
		}

	};
