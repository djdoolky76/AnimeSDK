#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJMHIDMOBMB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOBCDAJAKGC_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE7A20)
#define BOBCDAJAKGC_GET_BATTLEPOWER_OFFSET UNITYSDK_OFFSET(0xBDE79B0)
#define BOBCDAJAKGC_GET_CAPTAINNUM_OFFSET UNITYSDK_OFFSET(0xBDE79C0)
#define BOBCDAJAKGC_GET_CHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xBDE79D0)
#define BOBCDAJAKGC_GET_ISFINALACTFINISHED_OFFSET UNITYSDK_OFFSET(0xBDE79E0)
#define BOBCDAJAKGC_GET_METCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xBDE7A00)
#define BOBCDAJAKGC_GET_TOPPARTICIPATEDAVATARS_OFFSET UNITYSDK_OFFSET(0xBDE7A10)
#define BOBCDAJAKGC_SET_ISFINALACTFINISHED_OFFSET UNITYSDK_OFFSET(0xBDE79F0)

inline static constexpr unsigned int BOBCDAJAKGC_TypeDefinitionIndex = 75138;

	class BOBCDAJAKGC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _TopParticipatedAvatars_k__BackingField; // 0x10
		::System::Boolean _IsFinalActFinished_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _ChapterIndex_k__BackingField; // 0x1C
		::System::UInt64 _BattlePower_k__BackingField; // 0x20
		::System::UInt32 _CaptainNum_k__BackingField; // 0x28
		::System::UInt32 _MetCharacterCount_k__BackingField; // 0x2C
		::System::Void _ctor(::KJMHIDMOBMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMHIDMOBMB*))((::PBYTE)hIl2Cpp + BOBCDAJAKGC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt64 get_BattlePower()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBCDAJAKGC_GET_BATTLEPOWER_OFFSET))(this);
		}

		::System::UInt32 get_CaptainNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBCDAJAKGC_GET_CAPTAINNUM_OFFSET))(this);
		}

		::System::UInt32 get_ChapterIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBCDAJAKGC_GET_CHAPTERINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsFinalActFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBCDAJAKGC_GET_ISFINALACTFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinalActFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOBCDAJAKGC_SET_ISFINALACTFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 get_MetCharacterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBCDAJAKGC_GET_METCHARACTERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_TopParticipatedAvatars()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOBCDAJAKGC_GET_TOPPARTICIPATEDAVATARS_OFFSET))(this);
		}

	};
