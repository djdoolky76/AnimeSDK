#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOPFDKJOBIO;
class HHDDFBJLHDM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHDDFBJLHDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBBA00)
#define HHDDFBJLHDM_GET_MASTERCARDIDS_OFFSET UNITYSDK_OFFSET(0x15CBB770)
#define HHDDFBJLHDM_GET_NEUTRALCARDIDS_OFFSET UNITYSDK_OFFSET(0x15CBB7B0)
#define HHDDFBJLHDM_GET_SERVANTCARDIDS_OFFSET UNITYSDK_OFFSET(0x15CBB790)
#define HHDDFBJLHDM_IKOHLMDFNGH_OFFSET UNITYSDK_OFFSET(0x15CBB7D0)
#define HHDDFBJLHDM_SET_MASTERCARDIDS_OFFSET UNITYSDK_OFFSET(0x15CBB780)
#define HHDDFBJLHDM_SET_NEUTRALCARDIDS_OFFSET UNITYSDK_OFFSET(0x15CBB7C0)
#define HHDDFBJLHDM_SET_SERVANTCARDIDS_OFFSET UNITYSDK_OFFSET(0x15CBB7A0)

inline static constexpr unsigned int HHDDFBJLHDM_TypeDefinitionIndex = 81138;

	class HHDDFBJLHDM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ServantCardIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _MasterCardIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _NeutralCardIDs_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDDFBJLHDM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MasterCardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDDFBJLHDM_GET_MASTERCARDIDS_OFFSET))(this);
		}

		::System::Void set_MasterCardIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HHDDFBJLHDM_SET_MASTERCARDIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ServantCardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDDFBJLHDM_GET_SERVANTCARDIDS_OFFSET))(this);
		}

		::System::Void set_ServantCardIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HHDDFBJLHDM_SET_SERVANTCARDIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NeutralCardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDDFBJLHDM_GET_NEUTRALCARDIDS_OFFSET))(this);
		}

		::System::Void set_NeutralCardIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HHDDFBJLHDM_SET_NEUTRALCARDIDS_OFFSET))(this, a1);
		}

		static ::HHDDFBJLHDM* IKOHLMDFNGH(::EOPFDKJOBIO* a1)
		{
			return ((::HHDDFBJLHDM*(*)(::EOPFDKJOBIO*))((::PBYTE)hIl2Cpp + HHDDFBJLHDM_IKOHLMDFNGH_OFFSET))(a1);
		}

	};
