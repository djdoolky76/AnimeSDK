#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JINAGNHLJKL;
namespace RPG::GameCore { class TaskContext; }

#define HGKMGIGJFOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C452C30)
#define HGKMGIGJFOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C452C60)
#define HGKMGIGJFOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C452CA0)
#define HGKMGIGJFOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C452D60)
#define HGKMGIGJFOP_PFCHDAJFKAN_OFFSET UNITYSDK_OFFSET(0x1C452D10)
#define HGKMGIGJFOP_TICK_OFFSET UNITYSDK_OFFSET(0x1C452DB0)

inline static constexpr unsigned int HGKMGIGJFOP_TypeDefinitionIndex = 59422;

	class HGKMGIGJFOP : public ::GELIALJDFBL
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x18
		::System::Single PHCJBIJEBNI; // 0x1C
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
