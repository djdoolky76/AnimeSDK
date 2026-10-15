#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifyStance; }
namespace RPG::GameCore { class TaskContext; }

#define LMIMGAIPNAB_CTOR_OFFSET UNITYSDK_OFFSET(0xB77EF10)
#define LMIMGAIPNAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB77EF20)
#define LMIMGAIPNAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB77EF60)
#define LMIMGAIPNAB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB77F510)
#define LMIMGAIPNAB_TICK_OFFSET UNITYSDK_OFFSET(0xB77F560)

inline static constexpr unsigned int LMIMGAIPNAB_TypeDefinitionIndex = 55218;

	class LMIMGAIPNAB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ModifyStance* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyStance*))((::PBYTE)hIl2Cpp + LMIMGAIPNAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIMGAIPNAB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIMGAIPNAB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIMGAIPNAB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMIMGAIPNAB_TICK_OFFSET))(this, a1);
		}

	};
