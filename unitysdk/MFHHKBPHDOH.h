#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGAAFLAALBF;
class IGEGNAJFAJE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFHHKBPHDOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB8FEB40)
#define MFHHKBPHDOH_GET_DISPLAYS_OFFSET UNITYSDK_OFFSET(0xB8FEB30)
#define MFHHKBPHDOH_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0xB8FEBE0)

	class MFHHKBPHDOH : public ::System::Object
	{
	public:
		::IGEGNAJFAJE* OEPBFOINIOO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FGAAFLAALBF*>* _Displays_k__BackingField; // 0x18
		::System::Void _ctor(::IGEGNAJFAJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGEGNAJFAJE*))((::PBYTE)hIl2Cpp + MFHHKBPHDOH_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FGAAFLAALBF*>* get_Displays()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FGAAFLAALBF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHHKBPHDOH_GET_DISPLAYS_OFFSET))(this);
		}

		::FGAAFLAALBF* GKKDODPDBLA(::System::UInt32 a1)
		{
			return ((::FGAAFLAALBF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFHHKBPHDOH_GKKDODPDBLA_OFFSET))(this, a1);
		}

	};
