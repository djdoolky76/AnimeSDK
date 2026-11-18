#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALGKMLLALFG;
class PGDGFJIEMCE;
namespace System { class Action; }

#define PGDGFJIEMCE_MPMBNFCDKHA_JLENCJDOAHN_OFFSET UNITYSDK_OFFSET(0x16FC9BF0)
#define PGDGFJIEMCE_MPMBNFCDKHA_OCHABPDEMNO_OFFSET UNITYSDK_OFFSET(0x16FCA1E0)
#define PGDGFJIEMCE_MPMBNFCDKHA_PCLMGBMODNL_OFFSET UNITYSDK_OFFSET(0x16FC9D40)
#define PGDGFJIEMCE_MPMBNFCDKHA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC9BE0)

inline static constexpr unsigned int PGDGFJIEMCE_MPMBNFCDKHA_TypeDefinitionIndex = 76418;

class PGDGFJIEMCE_MPMBNFCDKHA : public ::System::Object
{
public:
	::ALGKMLLALFG* LMLPPLMKLFL; // 0x10
	::PGDGFJIEMCE* KLHPEBKNIFB; // 0x18
	::System::Action* FFMGICPLKFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDGFJIEMCE_MPMBNFCDKHA__CTOR_OFFSET))(this);
	}

	::System::Void JLENCJDOAHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDGFJIEMCE_MPMBNFCDKHA_JLENCJDOAHN_OFFSET))(this);
	}

	::System::Void PCLMGBMODNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDGFJIEMCE_MPMBNFCDKHA_PCLMGBMODNL_OFFSET))(this);
	}

	::System::Void OCHABPDEMNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDGFJIEMCE_MPMBNFCDKHA_OCHABPDEMNO_OFFSET))(this);
	}
};
