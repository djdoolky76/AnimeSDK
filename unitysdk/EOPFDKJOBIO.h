#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EOPFDKJOBIO_CTOR_OFFSET UNITYSDK_OFFSET(0x155C1AF0)
#define EOPFDKJOBIO_GDPOEBPJGED_OFFSET UNITYSDK_OFFSET(0x155C1CD0)
#define EOPFDKJOBIO_GET_DESC_OFFSET UNITYSDK_OFFSET(0x155C1C20)
#define EOPFDKJOBIO_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x155C1C80)
#define EOPFDKJOBIO_GET_ID_OFFSET UNITYSDK_OFFSET(0x155C1BF0)
#define EOPFDKJOBIO_GET_MASTERCARDIDS_OFFSET UNITYSDK_OFFSET(0x155C1CA0)
#define EOPFDKJOBIO_GET_MIDDLEDESC_OFFSET UNITYSDK_OFFSET(0x155C1C60)
#define EOPFDKJOBIO_GET_NEUTRALCARDIDS_OFFSET UNITYSDK_OFFSET(0x155C1CC0)
#define EOPFDKJOBIO_GET_OWNERSNAME_OFFSET UNITYSDK_OFFSET(0x155C1C40)
#define EOPFDKJOBIO_GET_SERVANTCARDIDS_OFFSET UNITYSDK_OFFSET(0x155C1CB0)
#define EOPFDKJOBIO_GET_SERVANTCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x155C1C00)
#define EOPFDKJOBIO_SET_DESC_OFFSET UNITYSDK_OFFSET(0x155C1C30)
#define EOPFDKJOBIO_SET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x155C1C90)
#define EOPFDKJOBIO_SET_MIDDLEDESC_OFFSET UNITYSDK_OFFSET(0x155C1C70)
#define EOPFDKJOBIO_SET_OWNERSNAME_OFFSET UNITYSDK_OFFSET(0x155C1C50)
#define EOPFDKJOBIO_SET_SERVANTCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x155C1C10)

inline static constexpr unsigned int EOPFDKJOBIO_TypeDefinitionIndex = 81080;

	class EOPFDKJOBIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NeutralCardIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _MasterCardIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ServantCardIDs_k__BackingField; // 0x20
		::RPG::Client::TextID _Desc_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _OwnersName_k__BackingField; // 0x40
		::System::UInt32 _GuideID_k__BackingField; // 0x50
		::RPG::GameCore::FateRinHouguOwnerType _ServantCardOwnerType_k__BackingField; // 0x54
		::RPG::Client::TextID _MiddleDesc_k__BackingField; // 0x58
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_ServantCardOwnerType()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GET_SERVANTCARDOWNERTYPE_OFFSET))(this);
		}

		::System::Void set_ServantCardOwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_SET_SERVANTCARDOWNERTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OwnersName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GET_OWNERSNAME_OFFSET))(this);
		}

		::System::Void set_OwnersName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_SET_OWNERSNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MiddleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GET_MIDDLEDESC_OFFSET))(this);
		}

		::System::Void set_MiddleDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_SET_MIDDLEDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_GuideID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GET_GUIDEID_OFFSET))(this);
		}

		::System::Void set_GuideID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_SET_GUIDEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MasterCardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GET_MASTERCARDIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ServantCardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GET_SERVANTCARDIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NeutralCardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GET_NEUTRALCARDIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* GDPOEBPJGED()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPFDKJOBIO_GDPOEBPJGED_OFFSET))(this);
		}

	};
