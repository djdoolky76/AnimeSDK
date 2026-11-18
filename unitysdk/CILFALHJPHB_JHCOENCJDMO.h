#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CILFALHJPHB;
class DJFLOOJJIFO;
class MEHOFJOFPBD;

#define CILFALHJPHB_JHCOENCJDMO_OGAIHCKOGAL_OFFSET UNITYSDK_OFFSET(0x1FE15460)
#define CILFALHJPHB_JHCOENCJDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE15450)

inline static constexpr unsigned int CILFALHJPHB_JHCOENCJDMO_TypeDefinitionIndex = 96529;

class CILFALHJPHB_JHCOENCJDMO : public ::System::Object
{
public:
	::CILFALHJPHB* KLHPEBKNIFB; // 0x10
	::DJFLOOJJIFO* LMHNJIBCLJF; // 0x18
	::MEHOFJOFPBD* GFECNKAFLLK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILFALHJPHB_JHCOENCJDMO__CTOR_OFFSET))(this);
	}

	::System::Void OGAIHCKOGAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILFALHJPHB_JHCOENCJDMO_OGAIHCKOGAL_OFFSET))(this);
	}
};
