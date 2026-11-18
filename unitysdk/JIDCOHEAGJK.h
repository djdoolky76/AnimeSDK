#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JIDCOHEAGJK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1873C080)
#define JIDCOHEAGJK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1873BED0)
#define JIDCOHEAGJK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1873C2A0)
#define JIDCOHEAGJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1873C160)

inline static constexpr unsigned int JIDCOHEAGJK_TypeDefinitionIndex = 63578;

class JIDCOHEAGJK : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* MGCMLBHOELA; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDCOHEAGJK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDCOHEAGJK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JIDCOHEAGJK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDCOHEAGJK_GDEOPIBNOIN_OFFSET))(this);
	}
};
