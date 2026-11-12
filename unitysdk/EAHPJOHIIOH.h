#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LDANGCCCCCK;
namespace RPG::GameCore { class TaskContext; }

#define EAHPJOHIIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1346AE60)
#define EAHPJOHIIOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1346B0D0)
#define EAHPJOHIIOH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1346AE70)
#define EAHPJOHIIOH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1346B080)
#define EAHPJOHIIOH_TICK_OFFSET UNITYSDK_OFFSET(0x1346B110)

inline static constexpr unsigned int EAHPJOHIIOH_TypeDefinitionIndex = 53819;

	class EAHPJOHIIOH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::LDANGCCCCCK* IGHAHBNLIJA; // 0x20
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
