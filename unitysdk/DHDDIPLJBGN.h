#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHDDIPLJBGN_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x1489EA20)
#define DHDDIPLJBGN_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1489EA00)
#define DHDDIPLJBGN_CPHIFDHCLJL_OFFSET UNITYSDK_OFFSET(0x1489E550)
#define DHDDIPLJBGN_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1489EA10)
#define DHDDIPLJBGN_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1489EA30)
#define DHDDIPLJBGN_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1489E4C0)
#define DHDDIPLJBGN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1489E920)
#define DHDDIPLJBGN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1489E500)
#define DHDDIPLJBGN_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1489E970)
#define DHDDIPLJBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1489E9C0)

inline static constexpr unsigned int DHDDIPLJBGN_TypeDefinitionIndex = 74248;

class DHDDIPLJBGN
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* ODGOGAPANCD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDDIPLJBGN__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDDIPLJBGN_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDDIPLJBGN_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDDIPLJBGN_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDDIPLJBGN_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDDIPLJBGN_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDDIPLJBGN_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDDIPLJBGN_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDDIPLJBGN_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void CPHIFDHCLJL(::System::Boolean OHKILGAMLDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHDDIPLJBGN_CPHIFDHCLJL_OFFSET))(this, OHKILGAMLDE);
	}
};
