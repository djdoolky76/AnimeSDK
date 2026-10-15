#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPKIFGDCGBN;
class LGGLMOFICJK;
class PANDNBODLAP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNNPOLGAAHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB288CA0)
#define JNNPOLGAAHB_GET_CARDISPLAY_OFFSET UNITYSDK_OFFSET(0xB288C60)
#define JNNPOLGAAHB_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0xB288C80)
#define JNNPOLGAAHB_GET_CYCLE_OFFSET UNITYSDK_OFFSET(0xB288C20)
#define JNNPOLGAAHB_GET_LASTCYCLEID_OFFSET UNITYSDK_OFFSET(0xB288C00)
#define JNNPOLGAAHB_GET_UNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0xB288C40)
#define JNNPOLGAAHB_SET_CARDISPLAY_OFFSET UNITYSDK_OFFSET(0xB288C70)
#define JNNPOLGAAHB_SET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0xB288C90)
#define JNNPOLGAAHB_SET_CYCLE_OFFSET UNITYSDK_OFFSET(0xB288C30)
#define JNNPOLGAAHB_SET_LASTCYCLEID_OFFSET UNITYSDK_OFFSET(0xB288C10)
#define JNNPOLGAAHB_SET_UNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0xB288C50)

inline static constexpr unsigned int JNNPOLGAAHB_TypeDefinitionIndex = 81659;

	class JNNPOLGAAHB : public ::System::Object
	{
	public:
		::LGGLMOFICJK* _CarDisplay_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedDriverIDs_k__BackingField; // 0x18
		::PANDNBODLAP* _Cycle_k__BackingField; // 0x20
		::IPKIFGDCGBN* _Challenge_k__BackingField; // 0x28
		::System::UInt32 _LastCycleID_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LastCycleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_GET_LASTCYCLEID_OFFSET))(this);
		}

		::System::Void set_LastCycleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_SET_LASTCYCLEID_OFFSET))(this, a1);
		}

		::PANDNBODLAP* get_Cycle()
		{
			return ((::PANDNBODLAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_GET_CYCLE_OFFSET))(this);
		}

		::System::Void set_Cycle(::PANDNBODLAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PANDNBODLAP*))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_SET_CYCLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedDriverIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_GET_UNLOCKEDDRIVERIDS_OFFSET))(this);
		}

		::System::Void set_UnlockedDriverIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_SET_UNLOCKEDDRIVERIDS_OFFSET))(this, a1);
		}

		::LGGLMOFICJK* get_CarDisplay()
		{
			return ((::LGGLMOFICJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_GET_CARDISPLAY_OFFSET))(this);
		}

		::System::Void set_CarDisplay(::LGGLMOFICJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGGLMOFICJK*))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_SET_CARDISPLAY_OFFSET))(this, a1);
		}

		::IPKIFGDCGBN* get_Challenge()
		{
			return ((::IPKIFGDCGBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_GET_CHALLENGE_OFFSET))(this);
		}

		::System::Void set_Challenge(::IPKIFGDCGBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPKIFGDCGBN*))((::PBYTE)hIl2Cpp + JNNPOLGAAHB_SET_CHALLENGE_OFFSET))(this, a1);
		}

	};
