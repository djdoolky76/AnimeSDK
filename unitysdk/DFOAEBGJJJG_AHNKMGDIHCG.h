#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DFOAEBGJJJG_AHNKMGDIHCG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8337A0)
#define DFOAEBGJJJG_AHNKMGDIHCG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE834040)

	class DFOAEBGJJJG_AHNKMGDIHCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* KLJCLIKJGCC; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KDNHCODKFKJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* CPPHAKMCBLI; // 0x20
		::System::Boolean AHMFFJBDHLL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAEBGJJJG_AHNKMGDIHCG_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAEBGJJJG_AHNKMGDIHCG_PJPFIHFAHGO_OFFSET))(this);
		}

	};
