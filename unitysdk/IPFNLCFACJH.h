#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/System/Object.h"
class BALLHPKKDDH;
class CNEJPIDOOAL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPFNLCFACJH_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1651F790)
#define IPFNLCFACJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1651F8B0)
#define IPFNLCFACJH_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1651F770)
#define IPFNLCFACJH_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1651F780)

	class IPFNLCFACJH : public ::System::Object
	{
	public:
		::CNEJPIDOOAL* _Factory_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::APCGKBOPGJL, ::BALLHPKKDDH*>* EGMLIDBLHBC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFNLCFACJH_CTOR_OFFSET))(this);
		}

		::CNEJPIDOOAL* get_Factory()
		{
			return ((::CNEJPIDOOAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFNLCFACJH_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::CNEJPIDOOAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNEJPIDOOAL*))((::PBYTE)hIl2Cpp + IPFNLCFACJH_SET_FACTORY_OFFSET))(this, a1);
		}

		::BALLHPKKDDH* ACMKLFOMPFC(::APCGKBOPGJL a1)
		{
			return ((::BALLHPKKDDH*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + IPFNLCFACJH_ACMKLFOMPFC_OFFSET))(this, a1);
		}

	};
