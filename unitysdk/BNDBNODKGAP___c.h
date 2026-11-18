#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IEGMIHHJMEP_GGKCBDPBIBF.h"

#define BNDBNODKGAP___C_BIAGGOMIDML_OFFSET UNITYSDK_OFFSET(0x16A01520)
#define BNDBNODKGAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A014D0)
#define BNDBNODKGAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A01510)

inline static constexpr unsigned int BNDBNODKGAP___c_TypeDefinitionIndex = 78420;

class BNDBNODKGAP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BNDBNODKGAP___c_TypeDefinitionIndex)->GetStaticField(0x30EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNDBNODKGAP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP___C__CTOR_OFFSET))(this);
	}

	::System::Void BIAGGOMIDML(::IEGMIHHJMEP_GGKCBDPBIBF& ELEIACDBIPL)
	{
		return ((::System::Void(*)(::PVOID, ::IEGMIHHJMEP_GGKCBDPBIBF&))((::PBYTE)hIl2Cpp + BNDBNODKGAP___C_BIAGGOMIDML_OFFSET))(this, ELEIACDBIPL);
	}
};
