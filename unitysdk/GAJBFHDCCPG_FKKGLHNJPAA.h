#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;
class EKGAHGCJOAN;
class GAJBFHDCCPG;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define GAJBFHDCCPG_FKKGLHNJPAA_BEGDDPGOCGE_OFFSET UNITYSDK_OFFSET(0x116D80B0)
#define GAJBFHDCCPG_FKKGLHNJPAA_BNJMCCKHIFG_OFFSET UNITYSDK_OFFSET(0x116D7FE0)
#define GAJBFHDCCPG_FKKGLHNJPAA_CJBFLHCOACA_OFFSET UNITYSDK_OFFSET(0x116D7FF0)
#define GAJBFHDCCPG_FKKGLHNJPAA_ECCNKFHINIG_OFFSET UNITYSDK_OFFSET(0x116D84D0)
#define GAJBFHDCCPG_FKKGLHNJPAA_HJMAJOELONJ_OFFSET UNITYSDK_OFFSET(0x116D8800)
#define GAJBFHDCCPG_FKKGLHNJPAA__CTOR_OFFSET UNITYSDK_OFFSET(0x116D7FD0)

inline static constexpr unsigned int GAJBFHDCCPG_FKKGLHNJPAA_TypeDefinitionIndex = 42056;

class GAJBFHDCCPG_FKKGLHNJPAA : public ::System::Object
{
public:
	::EKGAHGCJOAN* LHPFMGBDFPN; // 0x10
	::GAJBFHDCCPG* KLHPEBKNIFB; // 0x18
	::System::Int32 LGKIDBDPEFH; // 0x20
	::System::Int32 MDIHEKKHGAG; // 0x24
	::System::Int32 EHBHIAEMPGO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG_FKKGLHNJPAA__CTOR_OFFSET))(this);
	}

	::System::Boolean BNJMCCKHIFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG_FKKGLHNJPAA_BNJMCCKHIFG_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* CJBFLHCOACA()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG_FKKGLHNJPAA_CJBFLHCOACA_OFFSET))(this);
	}

	::System::Boolean BEGDDPGOCGE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG_FKKGLHNJPAA_BEGDDPGOCGE_OFFSET))(this);
	}

	::System::String* ECCNKFHINIG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG_FKKGLHNJPAA_ECCNKFHINIG_OFFSET))(this);
	}

	::System::Boolean HJMAJOELONJ(::DJPEEJFNCHL* MDLNMDJMMJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + GAJBFHDCCPG_FKKGLHNJPAA_HJMAJOELONJ_OFFSET))(this, MDLNMDJMMJP);
	}
};
