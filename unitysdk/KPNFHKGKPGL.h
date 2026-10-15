#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NICJMCOELEP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPNFHKGKPGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C7260)

	class KPNFHKGKPGL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NICJMCOELEP*>* NBBLDEMCCGN; // 0x10
		::System::UInt32 LLDCHLHNADA; // 0x18
		::System::Boolean GPDAOCJAIGE; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KPNFHKGKPGL_CTOR_OFFSET))(this, a1, a2);
		}

	};
