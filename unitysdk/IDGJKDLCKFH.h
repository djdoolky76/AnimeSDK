#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorSavedValueChange; }
namespace System { class String; }

#define IDGJKDLCKFH_AAFMOAMOILM_OFFSET UNITYSDK_OFFSET(0x15EC53C0)
#define IDGJKDLCKFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15EC4D70)
#define IDGJKDLCKFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EC4F40)
#define IDGJKDLCKFH_LIKNNNKHLMO_OFFSET UNITYSDK_OFFSET(0x15EC5540)
#define IDGJKDLCKFH_NBNHABPGIIB_OFFSET UNITYSDK_OFFSET(0x15EC5240)
#define IDGJKDLCKFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EC51F0)
#define IDGJKDLCKFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EC50C0)
#define IDGJKDLCKFH_TICK_OFFSET UNITYSDK_OFFSET(0x15EC5120)

inline static constexpr unsigned int IDGJKDLCKFH_TypeDefinitionIndex = 53470;

	class IDGJKDLCKFH : public ::GELIALJDFBL
	{
	public:
		::MJKLAEILHPK OLMFJLICIIA; // 0x18
		::RPG::GameCore::WaitFloorSavedValueChange* OFKGLJOAMLD; // 0x48
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
		::GELIALJDFBL* FCOLIHKCCLG; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorSavedValueChange*))((::PBYTE)hIl2Cpp + IDGJKDLCKFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGJKDLCKFH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDGJKDLCKFH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGJKDLCKFH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGJKDLCKFH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void LIKNNNKHLMO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IDGJKDLCKFH_LIKNNNKHLMO_OFFSET))(this, a1);
		}

		::System::Void NBNHABPGIIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGJKDLCKFH_NBNHABPGIIB_OFFSET))(this);
		}

		::System::Void AAFMOAMOILM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGJKDLCKFH_AAFMOAMOILM_OFFSET))(this);
		}

	};
