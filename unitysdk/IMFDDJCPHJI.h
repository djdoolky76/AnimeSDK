#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define IMFDDJCPHJI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1ACBFE40)
#define IMFDDJCPHJI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1ACBFAD0)
#define IMFDDJCPHJI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1ACC0650)
#define IMFDDJCPHJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC0360)

inline static constexpr unsigned int IMFDDJCPHJI_TypeDefinitionIndex = 67029;

class IMFDDJCPHJI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* FNKLOOBCIAM; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* CDDANDANBHO; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* KGNGFIIJEML; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* APKOKINBAHL; // 0x30
	::MKBBPOFGLOF* ECCGMJHOKFG; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* MKLBJGKKBOG; // 0x40
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x48
	::CPABOPKIGAL* MMFNFINOFPN; // 0x50
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDDJCPHJI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDDJCPHJI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IMFDDJCPHJI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDDJCPHJI_GDEOPIBNOIN_OFFSET))(this);
	}
};
