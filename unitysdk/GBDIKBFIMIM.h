#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMOJJIAKPPG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GBDIKBFIMIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1594B570)
#define GBDIKBFIMIM_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1594B580)
#define GBDIKBFIMIM_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1594B590)

	class GBDIKBFIMIM : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::PMOJJIAKPPG*>* _Entries_k__BackingField; // 0x10
		::System::UInt32 _Day_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::PMOJJIAKPPG*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::PMOJJIAKPPG*>*))((::PBYTE)hIl2Cpp + GBDIKBFIMIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Day()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDIKBFIMIM_GET_DAY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::PMOJJIAKPPG*>* get_Entries()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::PMOJJIAKPPG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDIKBFIMIM_GET_ENTRIES_OFFSET))(this);
		}

	};
