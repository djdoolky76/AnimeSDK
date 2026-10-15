#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOIPGBLMOLI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOINPNEOMDK_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEAAE0)
#define DOINPNEOMDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FEA970)
#define DOINPNEOMDK_HBECOCLIENB_OFFSET UNITYSDK_OFFSET(0x11FEAA10)
#define DOINPNEOMDK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x11FEA710)

	class DOINPNEOMDK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JOIPGBLMOLI*>* MFKOFHLEAON; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOINPNEOMDK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOINPNEOMDK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOINPNEOMDK_DISPOSE_OFFSET))(this);
		}

		::JOIPGBLMOLI* HBECOCLIENB(::System::UInt32 a1)
		{
			return ((::JOIPGBLMOLI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOINPNEOMDK_HBECOCLIENB_OFFSET))(this, a1);
		}

	};
