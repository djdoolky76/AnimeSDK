#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMEBMENDJGA;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BMEBMENDJGA_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xBDA2CB0)
#define BMEBMENDJGA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBDA2B60)
#define BMEBMENDJGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA2CA0)

	class BMEBMENDJGA : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Int32 AALKFOHEIMI; // 0x14
		::System::Int32 KOPFHOPKFMH; // 0x18
		::System::Int32 MGLGPNNMKLH; // 0x1C
		::System::Int32 ALMKIPNHAFM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEBMENDJGA_CTOR_OFFSET))(this);
		}

		static ::BMEBMENDJGA* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::BMEBMENDJGA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BMEBMENDJGA_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::BMEBMENDJGA* BPLPBPMEODA_1(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::BMEBMENDJGA*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BMEBMENDJGA_BPLPBPMEODA_1_OFFSET))(a1);
		}

	};
