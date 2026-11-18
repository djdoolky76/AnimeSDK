#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class PMNKLBCPENN;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define GEIANDHBHMF_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x10FD16E0)
#define GEIANDHBHMF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10FD0DC0)
#define GEIANDHBHMF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10FD0CE0)
#define GEIANDHBHMF_FPHEDPCHKAH_OFFSET UNITYSDK_OFFSET(0x10FD13E0)
#define GEIANDHBHMF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10FD1650)
#define GEIANDHBHMF__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD1610)

inline static constexpr unsigned int GEIANDHBHMF_TypeDefinitionIndex = 46518;

class GEIANDHBHMF : public ::CGJEMKCKIJG
{
public:
	::PMNKLBCPENN* BJMOFBNIEJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIANDHBHMF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIANDHBHMF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GEIANDHBHMF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Int32 FPHEDPCHKAH(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::Int32 DABCKBIAKHA)
	{
		return ((::System::Int32(*)(::PVOID, ::LGCNEDCMPKM&, ::System::Int32))((::PBYTE)hIl2Cpp + GEIANDHBHMF_FPHEDPCHKAH_OFFSET))(this, BKBGPKNGNMF, DABCKBIAKHA);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIANDHBHMF_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + GEIANDHBHMF_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}
};
