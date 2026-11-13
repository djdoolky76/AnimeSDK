#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LDANGCCCCCK;
namespace RPG::GameCore { class TaskContext; }

#define EAHPJOHIIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x181D0740)
#define EAHPJOHIIOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181D09B0)
#define EAHPJOHIIOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181D0750)
#define EAHPJOHIIOH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x181D0960)
#define EAHPJOHIIOH_TICK_OFFSET UNITYSDK_OFFSET(0x181D09F0)

inline static constexpr unsigned int EAHPJOHIIOH_TypeDefinitionIndex = 53819;

	class EAHPJOHIIOH : public ::GELIALJDFBL
	{
	public:
		::LDANGCCCCCK* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDANGCCCCCK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDANGCCCCCK*))((::PBYTE)hIl2Cpp + EAHPJOHIIOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHPJOHIIOH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHPJOHIIOH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHPJOHIIOH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAHPJOHIIOH_TICK_OFFSET))(this, a1);
		}

	};
