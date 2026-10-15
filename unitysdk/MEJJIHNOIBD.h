#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCJNLLHEEHO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEJJIHNOIBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB8DA4B0)
#define MEJJIHNOIBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8DA440)
#define MEJJIHNOIBD_HCNBNPCPEHK_OFFSET UNITYSDK_OFFSET(0xB8DA100)
#define MEJJIHNOIBD_IJFIDEHGOGE_OFFSET UNITYSDK_OFFSET(0xB8DA1B0)
#define MEJJIHNOIBD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB8DA240)

	class MEJJIHNOIBD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CCJNLLHEEHO*>* GKEGIJAEPLK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJJIHNOIBD_CTOR_OFFSET))(this);
		}

		::System::Void HCNBNPCPEHK(::CCJNLLHEEHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCJNLLHEEHO*))((::PBYTE)hIl2Cpp + MEJJIHNOIBD_HCNBNPCPEHK_OFFSET))(this, a1);
		}

		::System::Void IJFIDEHGOGE(::CCJNLLHEEHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCJNLLHEEHO*))((::PBYTE)hIl2Cpp + MEJJIHNOIBD_IJFIDEHGOGE_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEJJIHNOIBD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJJIHNOIBD_DISPOSE_OFFSET))(this);
		}

	};
