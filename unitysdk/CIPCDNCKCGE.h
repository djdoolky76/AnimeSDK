#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIPCDNCKCGE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF904F0)
#define CIPCDNCKCGE_GET_FACESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCF904B0)
#define CIPCDNCKCGE_GET_FIGHTIDLIST_OFFSET UNITYSDK_OFFSET(0xCF90490)
#define CIPCDNCKCGE_GET_ID_OFFSET UNITYSDK_OFFSET(0xCF90450)
#define CIPCDNCKCGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCF904D0)
#define CIPCDNCKCGE_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCF90470)
#define CIPCDNCKCGE_SET_FACESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCF904C0)
#define CIPCDNCKCGE_SET_FIGHTIDLIST_OFFSET UNITYSDK_OFFSET(0xCF904A0)
#define CIPCDNCKCGE_SET_ID_OFFSET UNITYSDK_OFFSET(0xCF90460)
#define CIPCDNCKCGE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xCF904E0)
#define CIPCDNCKCGE_SET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCF90480)

inline static constexpr unsigned int CIPCDNCKCGE_TypeDefinitionIndex = 80750;

	class CIPCDNCKCGE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FightIDList_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::UInt32 _FaceSubMissionID_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::UInt32 _UnlockSubMissionID_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_UnlockSubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_SET_UNLOCKSUBMISSIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FightIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_GET_FIGHTIDLIST_OFFSET))(this);
		}

		::System::Void set_FightIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_SET_FIGHTIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_FaceSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_GET_FACESUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_FaceSubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_SET_FACESUBMISSIONID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CIPCDNCKCGE_SET_NAME_OFFSET))(this, a1);
		}

	};
