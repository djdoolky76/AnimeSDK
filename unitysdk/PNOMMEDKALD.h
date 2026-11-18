#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PNOMMEDKALD_ADGLNPEHCLJ_OFFSET UNITYSDK_OFFSET(0x1C66DFB0)
#define PNOMMEDKALD_ADIMPBNHHKJ_OFFSET UNITYSDK_OFFSET(0x1C66DDE0)
#define PNOMMEDKALD_BIDCKAMPDLI_OFFSET UNITYSDK_OFFSET(0x1C66DE90)
#define PNOMMEDKALD_FMKINOPBEOO_OFFSET UNITYSDK_OFFSET(0x1C66DF20)
#define PNOMMEDKALD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C66DDD0)
#define PNOMMEDKALD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C66DDC0)

inline static constexpr unsigned int PNOMMEDKALD_TypeDefinitionIndex = 86350;

class PNOMMEDKALD : public ::System::Object
{
public:
	static ::System::Single* StaticGet_FLMJPEFBBMI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PNOMMEDKALD_TypeDefinitionIndex)->GetStaticField(0xC1C0);
	}
	static ::UnityEngine::Vector3* StaticGet_FOEGMDEGBIH()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(PNOMMEDKALD_TypeDefinitionIndex)->GetStaticField(0xC1C4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOMMEDKALD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOMMEDKALD__CCTOR_OFFSET))();
	}

	static ::System::Single ADIMPBNHHKJ(::System::Single HPDMACDCDPE)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PNOMMEDKALD_ADIMPBNHHKJ_OFFSET))(HPDMACDCDPE);
	}

	static ::System::Single BIDCKAMPDLI(::System::Single HPDMACDCDPE)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PNOMMEDKALD_BIDCKAMPDLI_OFFSET))(HPDMACDCDPE);
	}

	static ::System::Single FMKINOPBEOO(::System::Single MEEJKMDFJDC)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PNOMMEDKALD_FMKINOPBEOO_OFFSET))(MEEJKMDFJDC);
	}

	static ::System::Single ADGLNPEHCLJ(::System::Single OPIDINJPHAJ)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PNOMMEDKALD_ADGLNPEHCLJ_OFFSET))(OPIDINJPHAJ);
	}
};
