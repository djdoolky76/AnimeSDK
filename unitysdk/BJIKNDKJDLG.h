#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBHGHFIKCOD;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJIKNDKJDLG_CGPACDMMGLI_OFFSET UNITYSDK_OFFSET(0xC0F11F0)
#define BJIKNDKJDLG_CTOR_OFFSET UNITYSDK_OFFSET(0xC0F0900)
#define BJIKNDKJDLG_GET_FRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0xC0F14B0)
#define BJIKNDKJDLG_GET_HASSELFRECORD_OFFSET UNITYSDK_OFFSET(0xC0F14D0)
#define BJIKNDKJDLG_GET_SELFRANK_OFFSET UNITYSDK_OFFSET(0xC0F14E0)
#define BJIKNDKJDLG_GET_SELF_OFFSET UNITYSDK_OFFSET(0xC0F14C0)
#define BJIKNDKJDLG_GET_SURPASSEDFRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0xC0F14F0)
#define BJIKNDKJDLG_ICKDIPMOMMI_OFFSET UNITYSDK_OFFSET(0xC0F1470)
#define BJIKNDKJDLG_LCEAFLLCDGN_OFFSET UNITYSDK_OFFSET(0xC0F1500)
#define BJIKNDKJDLG_NNAOOIACHHL_OFFSET UNITYSDK_OFFSET(0xC0F1430)
#define BJIKNDKJDLG_OPOPFDFJIAE_OFFSET UNITYSDK_OFFSET(0xC0F1740)

inline static constexpr unsigned int BJIKNDKJDLG_TypeDefinitionIndex = 84854;

	class BJIKNDKJDLG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EBHGHFIKCOD*>* MEEPDDMNLCH; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* MHANNCMGJHA; // 0x18
		::EBHGHFIKCOD* _Self_k__BackingField; // 0x20
		::System::Int32 _FriendCount_k__BackingField; // 0x28
		::System::UInt32 _SelfRank_k__BackingField; // 0x2C
		::System::Boolean _HasSelfRecord_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 _SurpassedFriendCount_k__BackingField; // 0x34
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::EBHGHFIKCOD*>* a1, ::EBHGHFIKCOD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::EBHGHFIKCOD*>*, ::EBHGHFIKCOD*))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EBHGHFIKCOD*>* NNAOOIACHHL()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EBHGHFIKCOD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_NNAOOIACHHL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* ICKDIPMOMMI()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_ICKDIPMOMMI_OFFSET))(this);
		}

		::System::Int32 get_FriendCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_GET_FRIENDCOUNT_OFFSET))(this);
		}

		::EBHGHFIKCOD* get_Self()
		{
			return ((::EBHGHFIKCOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_GET_SELF_OFFSET))(this);
		}

		::System::Boolean get_HasSelfRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_GET_HASSELFRECORD_OFFSET))(this);
		}

		::System::UInt32 get_SelfRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_GET_SELFRANK_OFFSET))(this);
		}

		::System::UInt32 get_SurpassedFriendCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_GET_SURPASSEDFRIENDCOUNT_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* CGPACDMMGLI(::System::Collections::Generic::List_1<::EBHGHFIKCOD*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::List_1<::EBHGHFIKCOD*>*))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_CGPACDMMGLI_OFFSET))(a1);
		}

		static ::System::Int32 OPOPFDFJIAE(::EBHGHFIKCOD* a1, ::EBHGHFIKCOD* a2)
		{
			return ((::System::Int32(*)(::EBHGHFIKCOD*, ::EBHGHFIKCOD*))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_OPOPFDFJIAE_OFFSET))(a1, a2);
		}

		static ::System::Int32 LCEAFLLCDGN(::EBHGHFIKCOD* a1, ::EBHGHFIKCOD* a2)
		{
			return ((::System::Int32(*)(::EBHGHFIKCOD*, ::EBHGHFIKCOD*))((::PBYTE)hIl2Cpp + BJIKNDKJDLG_LCEAFLLCDGN_OFFSET))(a1, a2);
		}

	};
