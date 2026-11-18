#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIIDPHOKEEB;
class IBENDELLLAO;

#define HPKFKFICMOL_AMJOBEIBEDO_OFFSET UNITYSDK_OFFSET(0x1819C2A0)
#define HPKFKFICMOL_BKMMNCDBGJA_OFFSET UNITYSDK_OFFSET(0x1819CD50)
#define HPKFKFICMOL_CHIJAOJEGHB_OFFSET UNITYSDK_OFFSET(0x1819D220)
#define HPKFKFICMOL_EELFPPOMPPC_OFFSET UNITYSDK_OFFSET(0x1819C0F0)
#define HPKFKFICMOL_EKCPAHJJBBP_OFFSET UNITYSDK_OFFSET(0x1819C290)
#define HPKFKFICMOL_GJOPKILHJBD_OFFSET UNITYSDK_OFFSET(0x1819CD40)
#define HPKFKFICMOL_HMGKHLOFMML_OFFSET UNITYSDK_OFFSET(0x1819C680)
#define HPKFKFICMOL_OALPNGHIOFD_OFFSET UNITYSDK_OFFSET(0x1819CA50)
#define HPKFKFICMOL_OJLHJENCFJG_OFFSET UNITYSDK_OFFSET(0x1819C660)
#define HPKFKFICMOL_OOFLAIJFBIC_OFFSET UNITYSDK_OFFSET(0x1819C670)
#define HPKFKFICMOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1819C0E0)

inline static constexpr unsigned int HPKFKFICMOL_TypeDefinitionIndex = 40005;

class HPKFKFICMOL : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__BFBKMOGLDLC_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HPKFKFICMOL_TypeDefinitionIndex)->GetStaticField(0xF630);
	}
	static ::System::Boolean* StaticGet__NHKFPAJNEJO_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HPKFKFICMOL_TypeDefinitionIndex)->GetStaticField(0xF631);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKFKFICMOL__CCTOR_OFFSET))();
	}

	static ::System::Boolean EELFPPOMPPC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPKFKFICMOL_EELFPPOMPPC_OFFSET))();
	}

	static ::System::Boolean EKCPAHJJBBP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPKFKFICMOL_EKCPAHJJBBP_OFFSET))();
	}

	static ::System::Void AMJOBEIBEDO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKFKFICMOL_AMJOBEIBEDO_OFFSET))();
	}

	static ::System::Void OJLHJENCFJG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HPKFKFICMOL_OJLHJENCFJG_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void OOFLAIJFBIC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HPKFKFICMOL_OOFLAIJFBIC_OFFSET))(EGEGIMGMJHN);
	}

	static ::IBENDELLLAO* HMGKHLOFMML(::HIIDPHOKEEB* PBMAFPAPLCO)
	{
		return ((::IBENDELLLAO*(*)(::HIIDPHOKEEB*))((::PBYTE)hIl2Cpp + HPKFKFICMOL_HMGKHLOFMML_OFFSET))(PBMAFPAPLCO);
	}

	static ::System::Boolean OALPNGHIOFD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPKFKFICMOL_OALPNGHIOFD_OFFSET))();
	}

	static ::System::Boolean GJOPKILHJBD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPKFKFICMOL_GJOPKILHJBD_OFFSET))();
	}

	static ::System::Boolean BKMMNCDBGJA(::System::Boolean ABCNGAEFBNL, ::System::Int64& EGLOHGPMIOD)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::System::Int64&))((::PBYTE)hIl2Cpp + HPKFKFICMOL_BKMMNCDBGJA_OFFSET))(ABCNGAEFBNL, EGLOHGPMIOD);
	}

	static ::System::Boolean CHIJAOJEGHB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPKFKFICMOL_CHIJAOJEGHB_OFFSET))();
	}
};
