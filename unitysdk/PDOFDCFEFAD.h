#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class EBNPOEHOAGD;
class PDLAGKINJNL;
class PDOFDCFEFAD_IFPAEPJEBFF;

#define PDOFDCFEFAD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFDA7D90)
#define PDOFDCFEFAD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFDA7C50)
#define PDOFDCFEFAD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFDA81C0)
#define PDOFDCFEFAD__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDA8180)
#define PDOFDCFEFAD__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA8120)

inline static constexpr unsigned int PDOFDCFEFAD_TypeDefinitionIndex = 84022;

class PDOFDCFEFAD : public ::CGJEMKCKIJG
{
public:
	static ::PDOFDCFEFAD_IFPAEPJEBFF** StaticGet_DNOHELNGGLJ()
	{
		return (::PDOFDCFEFAD_IFPAEPJEBFF**)Il2CppClass::FromTypeDefinitionIndex(PDOFDCFEFAD_TypeDefinitionIndex)->GetStaticField(0x36270);
	}
	::EBNPOEHOAGD* MKEFMNLILOP; // 0x18
	::PDLAGKINJNL* FDPMDEJANJH; // 0x20
	::EBNPOEHOAGD* KMGGBAPIDHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOFDCFEFAD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDOFDCFEFAD__CCTOR_OFFSET))();
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOFDCFEFAD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PDOFDCFEFAD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOFDCFEFAD_GDEOPIBNOIN_OFFSET))(this);
	}
};
