#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JINAGNHLJKL;
namespace RPG::GameCore { class TaskContext; }

#define HGKMGIGJFOP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CAB1B0)
#define HGKMGIGJFOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CAB1E0)
#define HGKMGIGJFOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CAB220)
#define HGKMGIGJFOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CAB2E0)
#define HGKMGIGJFOP_PFCHDAJFKAN_OFFSET UNITYSDK_OFFSET(0x15CAB290)
#define HGKMGIGJFOP_TICK_OFFSET UNITYSDK_OFFSET(0x15CAB330)

inline static constexpr unsigned int HGKMGIGJFOP_TypeDefinitionIndex = 58169;

	class HGKMGIGJFOP : public ::GELIALJDFBL
	{
	public:
		::System::Single PHCJBIJEBNI; // 0x18
		::System::Single PGMIOKKLHIE; // 0x1C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JINAGNHLJKL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JINAGNHLJKL*))((::PBYTE)hIl2Cpp + HGKMGIGJFOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKMGIGJFOP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKMGIGJFOP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void PFCHDAJFKAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKMGIGJFOP_PFCHDAJFKAN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKMGIGJFOP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGKMGIGJFOP_TICK_OFFSET))(this, a1);
		}

	};
