#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KPIKGMIMGJG;

#define KPIKGMIMGJG___C_LMMMAAOKDAP_OFFSET UNITYSDK_OFFSET(0x1FAC1B90)
#define KPIKGMIMGJG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC1B40)
#define KPIKGMIMGJG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC1B80)

inline static constexpr unsigned int KPIKGMIMGJG___c_TypeDefinitionIndex = 18165;

class KPIKGMIMGJG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KPIKGMIMGJG___c_TypeDefinitionIndex)->GetStaticField(0x85B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPIKGMIMGJG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIKGMIMGJG___C__CTOR_OFFSET))(this);
	}

	::KPIKGMIMGJG* LMMMAAOKDAP()
	{
		return ((::KPIKGMIMGJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIKGMIMGJG___C_LMMMAAOKDAP_OFFSET))(this);
	}
};
