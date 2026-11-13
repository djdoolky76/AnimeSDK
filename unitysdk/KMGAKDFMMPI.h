#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGameProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KMGAKDFMMPI_CTOR_OFFSET UNITYSDK_OFFSET(0x17BAAD20)
#define KMGAKDFMMPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BAAD30)
#define KMGAKDFMMPI_IBBGDBCDDHH_OFFSET UNITYSDK_OFFSET(0x17BAB230)
#define KMGAKDFMMPI_IPIHMCCHNDP_OFFSET UNITYSDK_OFFSET(0x17BAB1C0)
#define KMGAKDFMMPI_KCIJIBKFCEK_OFFSET UNITYSDK_OFFSET(0x17BAB070)
#define KMGAKDFMMPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17BAAE80)
#define KMGAKDFMMPI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17BAAFC0)
#define KMGAKDFMMPI_TICK_OFFSET UNITYSDK_OFFSET(0x17BAB010)

inline static constexpr unsigned int KMGAKDFMMPI_TypeDefinitionIndex = 59694;

	class KMGAKDFMMPI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess* OFKGLJOAMLD; // 0x20
		::System::UInt32 CMHJPALLLCF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess*))((::PBYTE)hIl2Cpp + KMGAKDFMMPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGAKDFMMPI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGAKDFMMPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGAKDFMMPI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMGAKDFMMPI_TICK_OFFSET))(this, a1);
		}

		::System::Void KCIJIBKFCEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMGAKDFMMPI_KCIJIBKFCEK_OFFSET))(this, a1);
		}

		::System::Void IPIHMCCHNDP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMGAKDFMMPI_IPIHMCCHNDP_OFFSET))(this, a1);
		}

		::System::Void IBBGDBCDDHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMGAKDFMMPI_IBBGDBCDDHH_OFFSET))(this, a1);
		}

	};
