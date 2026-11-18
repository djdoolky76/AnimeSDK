#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KPAGHFDAFPN;
class ONMFMKHDLMO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DBMAHDDGMHM_1;

#define JCKHHCLBAOA_AGLCJPHMHGO_OFFSET UNITYSDK_OFFSET(0x1659BA60)
#define JCKHHCLBAOA_FGLDIPOENDO_OFFSET UNITYSDK_OFFSET(0x1659BD80)
#define JCKHHCLBAOA_JFOOCEAGFBK_OFFSET UNITYSDK_OFFSET(0x1659C0A0)
#define JCKHHCLBAOA_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1659B940)
#define JCKHHCLBAOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1659B9C0)

inline static constexpr unsigned int JCKHHCLBAOA_TypeDefinitionIndex = 76401;

class JCKHHCLBAOA : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ONMFMKHDLMO*>* INFCDNHFBBP; // 0x88
	::DBMAHDDGMHM_1<::System::Int32>* IBDKHGJBGFP; // 0x90
	::System::Int32 JGDAHIOOOKH; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKHHCLBAOA__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKHHCLBAOA_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void AGLCJPHMHGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKHHCLBAOA_AGLCJPHMHGO_OFFSET))(this);
	}

	::System::Void FGLDIPOENDO(::KPAGHFDAFPN* MEANOCPCPML)
	{
		return ((::System::Void(*)(::PVOID, ::KPAGHFDAFPN*))((::PBYTE)hIl2Cpp + JCKHHCLBAOA_FGLDIPOENDO_OFFSET))(this, MEANOCPCPML);
	}

	::System::Collections::Generic::List_1<::ONMFMKHDLMO*>* JFOOCEAGFBK()
	{
		return ((::System::Collections::Generic::List_1<::ONMFMKHDLMO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKHHCLBAOA_JFOOCEAGFBK_OFFSET))(this);
	}
};
