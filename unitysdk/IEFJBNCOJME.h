#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPMDLEDECJN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/CGDADMHCJEL.h"

class GCFEDDFHGLD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEFJBNCOJME_AEGGJFLEPME_OFFSET UNITYSDK_OFFSET(0xF83B250)
#define IEFJBNCOJME_CBOFLAMKKNC_OFFSET UNITYSDK_OFFSET(0xF83B1C0)
#define IEFJBNCOJME_HBKJFHBMEMP_OFFSET UNITYSDK_OFFSET(0xF83AA20)
#define IEFJBNCOJME_KNLGIGBGGFH_OFFSET UNITYSDK_OFFSET(0xF83AE30)
#define IEFJBNCOJME_NHENDKMIFPI_OFFSET UNITYSDK_OFFSET(0xF83B2E0)
#define IEFJBNCOJME_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0xF83AA80)
#define IEFJBNCOJME__CTOR_OFFSET UNITYSDK_OFFSET(0xF83B160)

inline static constexpr unsigned int IEFJBNCOJME_TypeDefinitionIndex = 75166;

class IEFJBNCOJME : public ::GPMDLEDECJN
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HDFFCAEFPLD; // 0x10
	::GCFEDDFHGLD* GJKHEPDNDHO; // 0x18
	::System::Single NIIHPPEHGAM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFJBNCOJME__CTOR_OFFSET))(this);
	}

	::System::Boolean HBKJFHBMEMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFJBNCOJME_HBKJFHBMEMP_OFFSET))(this);
	}

	::CGDADMHCJEL PKAFJHDJEDO(::System::Single FNIOPKPHDEH)
	{
		return ((::CGDADMHCJEL(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEFJBNCOJME_PKAFJHDJEDO_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void KNLGIGBGGFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFJBNCOJME_KNLGIGBGGFH_OFFSET))(this);
	}

	::System::Void CBOFLAMKKNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFJBNCOJME_CBOFLAMKKNC_OFFSET))(this);
	}

	::System::Boolean AEGGJFLEPME()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFJBNCOJME_AEGGJFLEPME_OFFSET))(this);
	}

	::CGDADMHCJEL NHENDKMIFPI(::System::Single MIALFKCCCPI)
	{
		return ((::CGDADMHCJEL(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEFJBNCOJME_NHENDKMIFPI_OFFSET))(this, MIALFKCCCPI);
	}
};
