#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPFMFINJCO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHDBFLFJFGH_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC929C0)
#define CHDBFLFJFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xCC92D40)
#define CHDBFLFJFGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC92CD0)

	class CHDBFLFJFGH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FDPFMFINJCO*>* KDNCHAPIFME; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* AHHGCGNNOCC; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* IENDLNEPDBB; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* KNIGNIIIBIE; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* EEKLCEMHPDP; // 0x30
		::System::UInt32 EHCDPMAMHGK; // 0x38
		::System::UInt32 JDPPODLLEAN; // 0x3C
		::System::UInt32 NDPOIKOIFFM; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDBFLFJFGH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDBFLFJFGH_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDBFLFJFGH_DISPOSE_OFFSET))(this);
		}

	};
