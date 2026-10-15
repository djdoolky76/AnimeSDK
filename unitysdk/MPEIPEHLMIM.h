#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/System/Object.h"
class DDCDKHALPDP;
class LAECFLNNOFH;

#define MPEIPEHLMIM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3A3D0)
#define MPEIPEHLMIM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBA3A3E0)
#define MPEIPEHLMIM_GKKHDIJBFOA_OFFSET UNITYSDK_OFFSET(0xBA3AA00)
#define MPEIPEHLMIM_IKPBGDCLDOH_OFFSET UNITYSDK_OFFSET(0xBA3AD00)
#define MPEIPEHLMIM_JBBJLPHHLJE_OFFSET UNITYSDK_OFFSET(0xBA3A490)
#define MPEIPEHLMIM_JMADLMMJLDJ_OFFSET UNITYSDK_OFFSET(0xBA3ADB0)
#define MPEIPEHLMIM_NGFLHCFFIJC_OFFSET UNITYSDK_OFFSET(0xBA3A830)

	class MPEIPEHLMIM : public ::System::Object
	{
	public:
		::LAECFLNNOFH* FKINCGODJEP; // 0x10
		::DDCDKHALPDP* PDENFEFCAGN; // 0x18
		::System::Single KPCBABJKCED; // 0x20
		::System::Single CCKGOPFCEFL; // 0x24
		::System::Boolean COFGNIJDLHM; // 0x28
		::System::Void _ctor(::LAECFLNNOFH* a1, ::DDCDKHALPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + MPEIPEHLMIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEIPEHLMIM_EXECUTE_OFFSET))(this);
		}

		::System::Void JBBJLPHHLJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEIPEHLMIM_JBBJLPHHLJE_OFFSET))(this);
		}

		::System::Void NGFLHCFFIJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEIPEHLMIM_NGFLHCFFIJC_OFFSET))(this);
		}

		::System::Void JMADLMMJLDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEIPEHLMIM_JMADLMMJLDJ_OFFSET))(this);
		}

		::System::Boolean IKPBGDCLDOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEIPEHLMIM_IKPBGDCLDOH_OFFSET))(this);
		}

		::System::Boolean GKKHDIJBFOA(::RPG::Client::LittleGame::PixAir::PixAirPlaneType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType))((::PBYTE)hIl2Cpp + MPEIPEHLMIM_GKKHDIJBFOA_OFFSET))(this, a1);
		}

	};
