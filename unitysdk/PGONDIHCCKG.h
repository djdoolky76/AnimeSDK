#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANAPNFPOMNG;
class ELKANIHDJPJ;
class GKLHCBFPMJA;

#define PGONDIHCCKG_DLAMDGHKNPK_OFFSET UNITYSDK_OFFSET(0x1DAD28D0)
#define PGONDIHCCKG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAD2EF0)
#define PGONDIHCCKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD2EE0)

inline static constexpr unsigned int PGONDIHCCKG_TypeDefinitionIndex = 93792;

class PGONDIHCCKG : public ::System::Object
{
public:
	static ::PGONDIHCCKG** StaticGet_NJLLMPCDOEB()
	{
		return (::PGONDIHCCKG**)Il2CppClass::FromTypeDefinitionIndex(PGONDIHCCKG_TypeDefinitionIndex)->GetStaticField(0x525E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGONDIHCCKG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGONDIHCCKG__CCTOR_OFFSET))();
	}

	::System::Void DLAMDGHKNPK(::GKLHCBFPMJA* HBACECLFKLE, ::ELKANIHDJPJ* CGNAECOJPGO, ::ANAPNFPOMNG* HPABLLADBOO)
	{
		return ((::System::Void(*)(::PVOID, ::GKLHCBFPMJA*, ::ELKANIHDJPJ*, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + PGONDIHCCKG_DLAMDGHKNPK_OFFSET))(this, HBACECLFKLE, CGNAECOJPGO, HPABLLADBOO);
	}
};
