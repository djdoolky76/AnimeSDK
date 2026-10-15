#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DOAOEPNIBHB;
namespace RPG::GameCore { class TaskContext; }

#define NMMOEPBIPAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8F970)
#define NMMOEPBIPAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC8F980)
#define NMMOEPBIPAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC8FA50)
#define NMMOEPBIPAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC8FA00)
#define NMMOEPBIPAA_TICK_OFFSET UNITYSDK_OFFSET(0xBC8FBB0)

inline static constexpr unsigned int NMMOEPBIPAA_TypeDefinitionIndex = 52614;

	class NMMOEPBIPAA : public ::GELIALJDFBL
	{
	public:
		::DOAOEPNIBHB* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DOAOEPNIBHB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DOAOEPNIBHB*))((::PBYTE)hIl2Cpp + NMMOEPBIPAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMOEPBIPAA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMOEPBIPAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMOEPBIPAA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMMOEPBIPAA_TICK_OFFSET))(this, a1);
		}

	};
