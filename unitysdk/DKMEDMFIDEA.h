#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Object.h"
class OOAJJMEGIFO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKMEDMFIDEA_CTOR_OFFSET UNITYSDK_OFFSET(0xF88A050)
#define DKMEDMFIDEA_GCMLDLLJGDJ_OFFSET UNITYSDK_OFFSET(0xF889F90)
#define DKMEDMFIDEA_JOFFCDIHLIK_OFFSET UNITYSDK_OFFSET(0xF889FD0)
#define DKMEDMFIDEA_LLEHLNAOELI_OFFSET UNITYSDK_OFFSET(0xF88A010)
#define DKMEDMFIDEA_MDKIONKAKON_OFFSET UNITYSDK_OFFSET(0xF889F50)

	class DKMEDMFIDEA : public ::System::Object
	{
	public:
		::OOAJJMEGIFO* GINDHBFCHJP; // 0x10
		::System::Collections::Generic::List_1<::OOAJJMEGIFO*>* JEELPKHNHAE; // 0x18
		::RPG::GameCore::ActivitySummonDifficulty IPGNDOIMBMN; // 0x20
		::System::UInt32 KGEAHKJKNHB; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2, ::OOAJJMEGIFO* a3, ::System::Collections::Generic::List_1<::OOAJJMEGIFO*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty, ::OOAJJMEGIFO*, ::System::Collections::Generic::List_1<::OOAJJMEGIFO*>*))((::PBYTE)hIl2Cpp + DKMEDMFIDEA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 MDKIONKAKON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEDMFIDEA_MDKIONKAKON_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySummonDifficulty GCMLDLLJGDJ()
		{
			return ((::RPG::GameCore::ActivitySummonDifficulty(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEDMFIDEA_GCMLDLLJGDJ_OFFSET))(this);
		}

		::OOAJJMEGIFO* JOFFCDIHLIK()
		{
			return ((::OOAJJMEGIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEDMFIDEA_JOFFCDIHLIK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OOAJJMEGIFO*>* LLEHLNAOELI()
		{
			return ((::System::Collections::Generic::List_1<::OOAJJMEGIFO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEDMFIDEA_LLEHLNAOELI_OFFSET))(this);
		}

	};
