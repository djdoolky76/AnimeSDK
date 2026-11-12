#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMGHBGLNMFF.h"
class KAKADGHNMFK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEFFANHAGFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CA730)
#define BEFFANHAGFG_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xB7CA6B0)
#define BEFFANHAGFG_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xB7CA6D0)
#define BEFFANHAGFG_GET_EVENTTARGETS_OFFSET UNITYSDK_OFFSET(0xB7CA710)
#define BEFFANHAGFG_GET_EVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xB7CA690)
#define BEFFANHAGFG_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB7CA6F0)
#define BEFFANHAGFG_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xB7CA6C0)
#define BEFFANHAGFG_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xB7CA6E0)
#define BEFFANHAGFG_SET_EVENTTARGETS_OFFSET UNITYSDK_OFFSET(0xB7CA720)
#define BEFFANHAGFG_SET_EVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xB7CA6A0)
#define BEFFANHAGFG_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB7CA700)

inline static constexpr unsigned int BEFFANHAGFG_TypeDefinitionIndex = 80317;

	class BEFFANHAGFG : public ::GMGHBGLNMFF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _EventTargets_k__BackingField; // 0x10
		::KAKADGHNMFK* _Caster_k__BackingField; // 0x18
		::KAKADGHNMFK* _EventTrigger_k__BackingField; // 0x20
		::System::UInt32 _EventID_k__BackingField; // 0x28
		::System::UInt32 _SkillID_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFFANHAGFG_CTOR_OFFSET))(this);
		}

		::KAKADGHNMFK* get_EventTrigger()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFFANHAGFG_GET_EVENTTRIGGER_OFFSET))(this);
		}

		::System::Void set_EventTrigger(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + BEFFANHAGFG_SET_EVENTTRIGGER_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* get_Caster()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFFANHAGFG_GET_CASTER_OFFSET))(this);
		}

		::System::Void set_Caster(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + BEFFANHAGFG_SET_CASTER_OFFSET))(this, a1);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFFANHAGFG_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEFFANHAGFG_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFFANHAGFG_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEFFANHAGFG_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_EventTargets()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFFANHAGFG_GET_EVENTTARGETS_OFFSET))(this);
		}

		::System::Void set_EventTargets(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BEFFANHAGFG_SET_EVENTTARGETS_OFFSET))(this, a1);
		}

	};
