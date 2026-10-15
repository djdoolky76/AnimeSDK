#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHAGINCKNI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPHGCHAIDMP_AEDCHFJMKBM_OFFSET UNITYSDK_OFFSET(0xBA38C00)
#define MPHGCHAIDMP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA38E90)
#define MPHGCHAIDMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA38B60)
#define MPHGCHAIDMP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA388C0)
#define MPHGCHAIDMP_NFDHENMGIBA_OFFSET UNITYSDK_OFFSET(0xBA38C90)

inline static constexpr unsigned int MPHGCHAIDMP_TypeDefinitionIndex = 63393;

	class MPHGCHAIDMP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EPHAGINCKNI*>* DPHNABJHCFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHGCHAIDMP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHGCHAIDMP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHGCHAIDMP_DISPOSE_OFFSET))(this);
		}

		::EPHAGINCKNI* AEDCHFJMKBM(::System::UInt32 a1)
		{
			return ((::EPHAGINCKNI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPHGCHAIDMP_AEDCHFJMKBM_OFFSET))(this, a1);
		}

		::System::Void NFDHENMGIBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHGCHAIDMP_NFDHENMGIBA_OFFSET))(this);
		}

	};
