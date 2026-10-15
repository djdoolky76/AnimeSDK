#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JLEOGCMFHAF;
namespace RPG::GameCore { class TaskContext; }

#define GCIKFCGCOJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15971A30)
#define GCIKFCGCOJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15971A40)
#define GCIKFCGCOJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15971B10)
#define GCIKFCGCOJB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15971AC0)
#define GCIKFCGCOJB_TICK_OFFSET UNITYSDK_OFFSET(0x15971E70)

inline static constexpr unsigned int GCIKFCGCOJB_TypeDefinitionIndex = 52609;

	class GCIKFCGCOJB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::JLEOGCMFHAF* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JLEOGCMFHAF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JLEOGCMFHAF*))((::PBYTE)hIl2Cpp + GCIKFCGCOJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIKFCGCOJB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIKFCGCOJB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIKFCGCOJB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCIKFCGCOJB_TICK_OFFSET))(this, a1);
		}

	};
