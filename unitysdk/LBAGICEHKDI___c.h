#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define LBAGICEHKDI___C_GINIFKKGADH_OFFSET UNITYSDK_OFFSET(0x15DDD150)
#define LBAGICEHKDI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DDD100)
#define LBAGICEHKDI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDD140)

inline static constexpr unsigned int LBAGICEHKDI___c_TypeDefinitionIndex = 73451;

class LBAGICEHKDI___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(LBAGICEHKDI___c_TypeDefinitionIndex)->GetStaticField(0x446B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LBAGICEHKDI___c_TypeDefinitionIndex)->GetStaticField(0x446B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBAGICEHKDI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAGICEHKDI___C__CTOR_OFFSET))(this);
	}

	::System::Void GINIFKKGADH(::MDLKEKANMHL* CHBDNBOLLID)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + LBAGICEHKDI___C_GINIFKKGADH_OFFSET))(this, CHBDNBOLLID);
	}
};
