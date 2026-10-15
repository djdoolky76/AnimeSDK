#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class AIADLOGFPCD;
class ALDMDBEKHPL;
class FJOADPKDFLC;
class GJBMIABGPFP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DBPFECFIKOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C544250)
#define DBPFECFIKOM_DLOFLHEPLBM_OFFSET UNITYSDK_OFFSET(0x1C54D900)
#define DBPFECFIKOM_GET_TARGETTRAITTYPES_OFFSET UNITYSDK_OFFSET(0x1C54D710)
#define DBPFECFIKOM_GET_TRAITSTRACKER_OFFSET UNITYSDK_OFFSET(0x1C54D720)
#define DBPFECFIKOM_GNJHPPMMLKO_OFFSET UNITYSDK_OFFSET(0x1C54DA00)
#define DBPFECFIKOM_HJNELDDMENH_OFFSET UNITYSDK_OFFSET(0x1C54DA90)
#define DBPFECFIKOM_JKLEJJFEFLD_OFFSET UNITYSDK_OFFSET(0x1C54D800)
#define DBPFECFIKOM_NEKLMMHMCFB_OFFSET UNITYSDK_OFFSET(0x1C54D730)
#define DBPFECFIKOM_PFABKAHHLDA_OFFSET UNITYSDK_OFFSET(0x1C54D780)

	class DBPFECFIKOM : public ::System::Object
	{
	public:
		::AIADLOGFPCD* _TraitsTracker_k__BackingField; // 0x10
		::FJOADPKDFLC* _TargetTraitTypes_k__BackingField; // 0x18
		::System::Void _ctor(::FJOADPKDFLC* a1, ::ALDMDBEKHPL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FJOADPKDFLC*, ::ALDMDBEKHPL*))((::PBYTE)hIl2Cpp + DBPFECFIKOM_CTOR_OFFSET))(this, a1, a2);
		}

		::FJOADPKDFLC* get_TargetTraitTypes()
		{
			return ((::FJOADPKDFLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPFECFIKOM_GET_TARGETTRAITTYPES_OFFSET))(this);
		}

		::AIADLOGFPCD* get_TraitsTracker()
		{
			return ((::AIADLOGFPCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPFECFIKOM_GET_TRAITSTRACKER_OFFSET))(this);
		}

		::ALDMDBEKHPL* NEKLMMHMCFB()
		{
			return ((::ALDMDBEKHPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPFECFIKOM_NEKLMMHMCFB_OFFSET))(this);
		}

		::GJBMIABGPFP* PFABKAHHLDA()
		{
			return ((::GJBMIABGPFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPFECFIKOM_PFABKAHHLDA_OFFSET))(this);
		}

		::System::Void JKLEJJFEFLD(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBPFECFIKOM_JKLEJJFEFLD_OFFSET))(this, a1);
		}

		::System::Void DLOFLHEPLBM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBPFECFIKOM_DLOFLHEPLBM_OFFSET))(this, a1);
		}

		::System::Boolean GNJHPPMMLKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPFECFIKOM_GNJHPPMMLKO_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* HJNELDDMENH()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPFECFIKOM_HJNELDDMENH_OFFSET))(this);
		}

	};
