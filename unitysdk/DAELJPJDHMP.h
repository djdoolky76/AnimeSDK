#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/OMGFCFDABLN.h"

class EBNPOEHOAGD;
class FKNKBAOGJOA;
namespace System::Collections { class IList; }

#define DAELJPJDHMP_DPDOFDHIBCP_OFFSET UNITYSDK_OFFSET(0x16898EE0)
#define DAELJPJDHMP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16898E50)
#define DAELJPJDHMP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16898D80)
#define DAELJPJDHMP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16899270)
#define DAELJPJDHMP__CTOR_OFFSET UNITYSDK_OFFSET(0x16899220)

inline static constexpr unsigned int DAELJPJDHMP_TypeDefinitionIndex = 89422;

class DAELJPJDHMP : public ::CGJEMKCKIJG
{
public:
	::EBNPOEHOAGD* ACDKKCINLON; // 0x18
	::FKNKBAOGJOA* FDPMDEJANJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAELJPJDHMP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAELJPJDHMP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DAELJPJDHMP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void DPDOFDHIBCP(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::Collections::IList* DJLOKMMLFJC, ::OMGFCFDABLN& LADDEFGAJJF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::System::Collections::IList*, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + DAELJPJDHMP_DPDOFDHIBCP_OFFSET))(this, BKBGPKNGNMF, DJLOKMMLFJC, LADDEFGAJJF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAELJPJDHMP_GDEOPIBNOIN_OFFSET))(this);
	}
};
