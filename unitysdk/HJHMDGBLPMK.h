#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPKIFGDCGBN;
class LGGLMOFICJK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HJHMDGBLPMK_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x16C71D00)
#define HJHMDGBLPMK_CTOR_OFFSET UNITYSDK_OFFSET(0x16C71F60)
#define HJHMDGBLPMK_GET_CARDISPLAY_OFFSET UNITYSDK_OFFSET(0x16C71E00)
#define HJHMDGBLPMK_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x16C71E20)
#define HJHMDGBLPMK_GET_LASTCYCLEID_OFFSET UNITYSDK_OFFSET(0x16C71DC0)
#define HJHMDGBLPMK_GET_UNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0x16C71DE0)
#define HJHMDGBLPMK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16C71EA0)
#define HJHMDGBLPMK_OPCNMCGAGPN_OFFSET UNITYSDK_OFFSET(0x16C71E40)
#define HJHMDGBLPMK_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x16C71D60)
#define HJHMDGBLPMK_SET_CARDISPLAY_OFFSET UNITYSDK_OFFSET(0x16C71E10)
#define HJHMDGBLPMK_SET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x16C71E30)
#define HJHMDGBLPMK_SET_LASTCYCLEID_OFFSET UNITYSDK_OFFSET(0x16C71DD0)
#define HJHMDGBLPMK_SET_UNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0x16C71DF0)

inline static constexpr unsigned int HJHMDGBLPMK_TypeDefinitionIndex = 84439;

	class HJHMDGBLPMK : public ::System::Object
	{
	public:
		::IPKIFGDCGBN* _Challenge_k__BackingField; // 0x10
		::LGGLMOFICJK* _CarDisplay_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedDriverIDs_k__BackingField; // 0x20
		::System::Action* Changed; // 0x28
		::System::UInt32 _LastCycleID_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_CTOR_OFFSET))(this);
		}

		::System::Void add_Changed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_ADD_CHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_Changed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_REMOVE_CHANGED_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastCycleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_GET_LASTCYCLEID_OFFSET))(this);
		}

		::System::Void set_LastCycleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_SET_LASTCYCLEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_UnlockedDriverIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_GET_UNLOCKEDDRIVERIDS_OFFSET))(this);
		}

		::System::Void set_UnlockedDriverIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_SET_UNLOCKEDDRIVERIDS_OFFSET))(this, a1);
		}

		::LGGLMOFICJK* get_CarDisplay()
		{
			return ((::LGGLMOFICJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_GET_CARDISPLAY_OFFSET))(this);
		}

		::System::Void set_CarDisplay(::LGGLMOFICJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGGLMOFICJK*))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_SET_CARDISPLAY_OFFSET))(this, a1);
		}

		::IPKIFGDCGBN* get_Challenge()
		{
			return ((::IPKIFGDCGBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_GET_CHALLENGE_OFFSET))(this);
		}

		::System::Void set_Challenge(::IPKIFGDCGBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPKIFGDCGBN*))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_SET_CHALLENGE_OFFSET))(this, a1);
		}

		::System::Void OPCNMCGAGPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_OPCNMCGAGPN_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHMDGBLPMK_KHGIKBFDLFB_OFFSET))(this);
		}

	};
