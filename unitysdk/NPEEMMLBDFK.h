#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPEEMMLBDFK_ADDJFJJDJFP_OFFSET UNITYSDK_OFFSET(0x14F3F220)
#define NPEEMMLBDFK_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x14F3F260)
#define NPEEMMLBDFK_PLCJGDLLPHM_OFFSET UNITYSDK_OFFSET(0x14F3F1E0)
#define NPEEMMLBDFK__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F3F2B0)
#define NPEEMMLBDFK__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3F2A0)

inline static constexpr unsigned int NPEEMMLBDFK_TypeDefinitionIndex = 83807;

class NPEEMMLBDFK : public ::System::Object
{
public:
	static ::NPEEMMLBDFK** StaticGet_DDGNFJDLOKA()
	{
		return (::NPEEMMLBDFK**)Il2CppClass::FromTypeDefinitionIndex(NPEEMMLBDFK_TypeDefinitionIndex)->GetStaticField(0x32370);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEEMMLBDFK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPEEMMLBDFK__CCTOR_OFFSET))();
	}

	::System::Void PLCJGDLLPHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEEMMLBDFK_PLCJGDLLPHM_OFFSET))(this);
	}

	::System::Boolean ADDJFJJDJFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEEMMLBDFK_ADDJFJJDJFP_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEEMMLBDFK_BJANDJKKNCD_OFFSET))(this);
	}
};
