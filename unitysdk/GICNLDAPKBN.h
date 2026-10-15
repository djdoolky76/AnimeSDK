#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KIMKPNKNHFI;
namespace RPG::GameCore { class TaskContext; }

#define GICNLDAPKBN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A25D30)
#define GICNLDAPKBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A25D60)
#define GICNLDAPKBN_KNPDGDKEFAM_OFFSET UNITYSDK_OFFSET(0x15A25F80)
#define GICNLDAPKBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A25DB0)
#define GICNLDAPKBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A25E20)
#define GICNLDAPKBN_TICK_OFFSET UNITYSDK_OFFSET(0x15A25E70)

inline static constexpr unsigned int GICNLDAPKBN_TypeDefinitionIndex = 58064;

	class GICNLDAPKBN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::UInt32 LEDGIJDBGIA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KIMKPNKNHFI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KIMKPNKNHFI*))((::PBYTE)hIl2Cpp + GICNLDAPKBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICNLDAPKBN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICNLDAPKBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICNLDAPKBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GICNLDAPKBN_TICK_OFFSET))(this, a1);
		}

		::System::Void KNPDGDKEFAM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GICNLDAPKBN_KNPDGDKEFAM_OFFSET))(this, a1);
		}

	};
