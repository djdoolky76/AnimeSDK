#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ST_Side_RegisterSpecialEvent; }
namespace RPG::GameCore { class TaskContext; }

#define FOMMBELJLHH_CEGMOLMPIHG_OFFSET UNITYSDK_OFFSET(0x158F1ED0)
#define FOMMBELJLHH_CTOR_OFFSET UNITYSDK_OFFSET(0x158F1A00)
#define FOMMBELJLHH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158F1A30)
#define FOMMBELJLHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158F1BB0)
#define FOMMBELJLHH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158F1D40)

inline static constexpr unsigned int FOMMBELJLHH_TypeDefinitionIndex = 52247;

	class FOMMBELJLHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RegisterSpecialEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RegisterSpecialEvent*))((::PBYTE)hIl2Cpp + FOMMBELJLHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMMBELJLHH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMMBELJLHH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMMBELJLHH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void CEGMOLMPIHG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FOMMBELJLHH_CEGMOLMPIHG_OFFSET))(this, a1);
		}

	};
