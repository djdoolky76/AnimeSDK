#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_DoSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EFOENCDAODI_AKCBJIAIJPH_OFFSET UNITYSDK_OFFSET(0x13A5E100)
#define EFOENCDAODI_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5D930)
#define EFOENCDAODI_FDJCBCCJAGP_OFFSET UNITYSDK_OFFSET(0x13A5E300)
#define EFOENCDAODI_OKOELKMHGHK_OFFSET UNITYSDK_OFFSET(0x13A5E450)
#define EFOENCDAODI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A5DA40)
#define EFOENCDAODI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A5E200)

	class EFOENCDAODI
	{
	public:
		::System::Single AKCEJGFIJJF; // 0x28
		::System::Int32 LDJMILLLCAE; // 0x2C
		::System::Single ELEGFCENBGP; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_DoSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_DoSkill*))((::PBYTE)hIl2Cpp + EFOENCDAODI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOENCDAODI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOENCDAODI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void FDJCBCCJAGP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFOENCDAODI_FDJCBCCJAGP_OFFSET))(this, a1);
		}

		::System::Void OKOELKMHGHK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFOENCDAODI_OKOELKMHGHK_OFFSET))(this, a1);
		}

		::System::Boolean AKCBJIAIJPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFOENCDAODI_AKCBJIAIJPH_OFFSET))(this);
		}

	};
