#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHCMIJEDENP;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOACJPEHDKO_ANFCNGJKJDN_OFFSET UNITYSDK_OFFSET(0x158D18D0)
#define FOACJPEHDKO_CTOR_OFFSET UNITYSDK_OFFSET(0x158D1880)
#define FOACJPEHDKO_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x158D17E0)
#define FOACJPEHDKO_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x158D1860)
#define FOACJPEHDKO_GET_PARTNERACTORID_OFFSET UNITYSDK_OFFSET(0x158D1820)
#define FOACJPEHDKO_GET_TALENTPOINTS_OFFSET UNITYSDK_OFFSET(0x158D1840)
#define FOACJPEHDKO_GET_UNLOCKBYFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x158D1800)
#define FOACJPEHDKO_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x158D17F0)
#define FOACJPEHDKO_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x158D1870)
#define FOACJPEHDKO_SET_PARTNERACTORID_OFFSET UNITYSDK_OFFSET(0x158D1830)
#define FOACJPEHDKO_SET_TALENTPOINTS_OFFSET UNITYSDK_OFFSET(0x158D1850)
#define FOACJPEHDKO_SET_UNLOCKBYFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x158D1810)

inline static constexpr unsigned int FOACJPEHDKO_TypeDefinitionIndex = 79774;

	class FOACJPEHDKO : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* _TalentPoints_k__BackingField; // 0x10
		::PHCMIJEDENP* HNEOOKPBCNK; // 0x18
		::System::UInt32 _UnlockByFinishSubMissionID_k__BackingField; // 0x20
		::System::UInt32 _PartnerActorID_k__BackingField; // 0x24
		::System::Boolean _IsUnlocked_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 _Identifier_k__BackingField; // 0x2C
		::System::Void _ctor(::PHCMIJEDENP* a1, ::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::PHCMIJEDENP*, ::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOACJPEHDKO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_Identifier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOACJPEHDKO_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOACJPEHDKO_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockByFinishSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOACJPEHDKO_GET_UNLOCKBYFINISHSUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_UnlockByFinishSubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOACJPEHDKO_SET_UNLOCKBYFINISHSUBMISSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PartnerActorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOACJPEHDKO_GET_PARTNERACTORID_OFFSET))(this);
		}

		::System::Void set_PartnerActorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOACJPEHDKO_SET_PARTNERACTORID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* get_TalentPoints()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOACJPEHDKO_GET_TALENTPOINTS_OFFSET))(this);
		}

		::System::Void set_TalentPoints(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>*))((::PBYTE)hIl2Cpp + FOACJPEHDKO_SET_TALENTPOINTS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOACJPEHDKO_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOACJPEHDKO_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void ANFCNGJKJDN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOACJPEHDKO_ANFCNGJKJDN_OFFSET))(this, a1, a2);
		}

	};
