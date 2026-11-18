#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CPIKJOJJBPB_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0x145E2260)
#define CPIKJOJJBPB_OBMIDNGLMEA_OFFSET UNITYSDK_OFFSET(0x145E22E0)
#define CPIKJOJJBPB_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0x145E2070)
#define CPIKJOJJBPB_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0x145E1F40)
#define CPIKJOJJBPB__CTOR_OFFSET UNITYSDK_OFFSET(0x145E22D0)

inline static constexpr unsigned int CPIKJOJJBPB_TypeDefinitionIndex = 44120;

class CPIKJOJJBPB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIKJOJJBPB__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CPIKJOJJBPB_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPIKJOJJBPB_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::UnityEngine::Vector2& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CPIKJOJJBPB_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean OBMIDNGLMEA(::EOAHOOCNDHM& EGEGIMGMJHN, ::UnityEngine::Vector2& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CPIKJOJJBPB_OBMIDNGLMEA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
