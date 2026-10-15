#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class NCPHGMEMAPP;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOFGKAHHAH_BOFGKFBPIOD_OFFSET UNITYSDK_OFFSET(0x15837260)
#define FLOFGKAHHAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15836EC0)
#define FLOFGKAHHAH_ILPNOLKOIAF_OFFSET UNITYSDK_OFFSET(0x15836F40)
#define FLOFGKAHHAH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15837470)
#define FLOFGKAHHAH_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x15836ED0)

inline static constexpr unsigned int FLOFGKAHHAH_TypeDefinitionIndex = 78263;

	class FLOFGKAHHAH : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::NCPHGMEMAPP* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::NCPHGMEMAPP* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NCPHGMEMAPP*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + FLOFGKAHHAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOFGKAHHAH_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void ILPNOLKOIAF(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + FLOFGKAHHAH_ILPNOLKOIAF_OFFSET))(this, a1);
		}

		::System::Void BOFGKFBPIOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOFGKAHHAH_BOFGKFBPIOD_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOFGKAHHAH_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
