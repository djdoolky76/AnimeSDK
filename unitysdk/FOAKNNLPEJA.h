#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/JDOLCBBOINH.h"
#include "unitysdk/KIPDFGJHIKA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/OLPPOJJADDO.h"

#define FOAKNNLPEJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142B4D60)
#define FOAKNNLPEJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x142B4C70)
#define FOAKNNLPEJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x142B4AC0)
#define FOAKNNLPEJA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x142B5190)
#define FOAKNNLPEJA_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x142B4DB0)
#define FOAKNNLPEJA__CTOR_OFFSET UNITYSDK_OFFSET(0x142B4DA0)

inline static constexpr unsigned int FOAKNNLPEJA_TypeDefinitionIndex = 85435;

class FOAKNNLPEJA : public ::System::Object
{
public:
	::Foundation::AssetPath NPKGHDLNNCB; // 0x10
	::Foundation::AssetPath JNAJDCADOOA; // 0x20
	::DJCHCMEFPIF HBGLGBEOEEM; // 0x30
	::DJCHCMEFPIF OJBBKNJGMPG; // 0x48
	::UnityEngine::Color AKPCKKKNBLB; // 0x60
	::KIPDFGJHIKA KNCEAFPGDHM; // 0x70
	::UnityEngine::Vector3 BDIEDFPGFHF; // 0x74
	::JDOLCBBOINH NPMKHJIFFBH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAKNNLPEJA__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::FOAKNNLPEJA* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FOAKNNLPEJA*))((::PBYTE)hIl2Cpp + FOAKNNLPEJA_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOAKNNLPEJA_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAKNNLPEJA_DISPOSE_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAKNNLPEJA_PGKDINGDONO_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOAKNNLPEJA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
