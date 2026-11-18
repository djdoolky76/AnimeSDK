#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANAPNFPOMNG;
class ELKANIHDJPJ;
class GKLHCBFPMJA;

#define HFBLCAKBHEH_DLAMDGHKNPK_OFFSET UNITYSDK_OFFSET(0x11011C30)
#define HFBLCAKBHEH__CCTOR_OFFSET UNITYSDK_OFFSET(0x11011D50)
#define HFBLCAKBHEH__CTOR_OFFSET UNITYSDK_OFFSET(0x11011C20)

inline static constexpr unsigned int HFBLCAKBHEH_TypeDefinitionIndex = 76060;

class HFBLCAKBHEH : public ::System::Object
{
public:
	static ::HFBLCAKBHEH** StaticGet_NJLLMPCDOEB()
	{
		return (::HFBLCAKBHEH**)Il2CppClass::FromTypeDefinitionIndex(HFBLCAKBHEH_TypeDefinitionIndex)->GetStaticField(0x4BCD0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBLCAKBHEH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFBLCAKBHEH__CCTOR_OFFSET))();
	}

	::System::Void DLAMDGHKNPK(::GKLHCBFPMJA* HBACECLFKLE, ::ELKANIHDJPJ* CGNAECOJPGO, ::ANAPNFPOMNG* HPABLLADBOO)
	{
		return ((::System::Void(*)(::PVOID, ::GKLHCBFPMJA*, ::ELKANIHDJPJ*, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + HFBLCAKBHEH_DLAMDGHKNPK_OFFSET))(this, HBACECLFKLE, CGNAECOJPGO, HPABLLADBOO);
	}
};
