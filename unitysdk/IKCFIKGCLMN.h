#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_TriggerLittleGameCustomEvent; }
namespace RPG::GameCore { class TaskContext; }

#define IKCFIKGCLMN_CTOR_OFFSET UNITYSDK_OFFSET(0x16475690)
#define IKCFIKGCLMN_GJKMIENCIJJ_OFFSET UNITYSDK_OFFSET(0x16475730)
#define IKCFIKGCLMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164756C0)
#define IKCFIKGCLMN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16475A10)

inline static constexpr unsigned int IKCFIKGCLMN_TypeDefinitionIndex = 52147;

	class IKCFIKGCLMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_TriggerLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + IKCFIKGCLMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCFIKGCLMN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCFIKGCLMN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void GJKMIENCIJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCFIKGCLMN_GJKMIENCIJJ_OFFSET))(this);
		}

	};
