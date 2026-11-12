#pragma once
#include "unitysdk/unitysdk.h"
class FHFCJKKKNLP;
class NPOFNCLHNOH;
namespace RPG::GameCore { class TaskContext; }

#define HKLAOIMONBG_CTOR_OFFSET UNITYSDK_OFFSET(0x16CA15C0)
#define HKLAOIMONBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CA15F0)
#define HKLAOIMONBG_FCDMJDNDEPJ_OFFSET UNITYSDK_OFFSET(0x16CA1760)
#define HKLAOIMONBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CA1630)
#define HKLAOIMONBG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16CA1B80)
#define HKLAOIMONBG_TICK_OFFSET UNITYSDK_OFFSET(0x16CA1BD0)

inline static constexpr unsigned int HKLAOIMONBG_TypeDefinitionIndex = 59423;

	class HKLAOIMONBG
	{
	public:
		::NPOFNCLHNOH* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NPOFNCLHNOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NPOFNCLHNOH*))((::PBYTE)hIl2Cpp + HKLAOIMONBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLAOIMONBG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLAOIMONBG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FCDMJDNDEPJ(::FHFCJKKKNLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHFCJKKKNLP*))((::PBYTE)hIl2Cpp + HKLAOIMONBG_FCDMJDNDEPJ_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLAOIMONBG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKLAOIMONBG_TICK_OFFSET))(this, a1);
		}

	};
