#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define PGCEFFAGLEB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13A92B40)
#define PGCEFFAGLEB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13A92930)
#define PGCEFFAGLEB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13A931B0)
#define PGCEFFAGLEB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A92FE0)

inline static constexpr unsigned int PGCEFFAGLEB_TypeDefinitionIndex = 51861;

class PGCEFFAGLEB : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* PEOMGHDBPKP; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* JOECHPCHKFM; // 0x30
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* ELFGLJOABCE; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* HJOLAJLFOEO; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* JCLMIBNMCOK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCEFFAGLEB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCEFFAGLEB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PGCEFFAGLEB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCEFFAGLEB_GDEOPIBNOIN_OFFSET))(this);
	}
};
