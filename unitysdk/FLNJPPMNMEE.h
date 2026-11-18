#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLNJPPMNMEE_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0xBB56EE0)
#define FLNJPPMNMEE_DMNIGDILHBN_OFFSET UNITYSDK_OFFSET(0xBB56F60)
#define FLNJPPMNMEE_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0xBB56C40)
#define FLNJPPMNMEE_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0xBB56AB0)
#define FLNJPPMNMEE__CTOR_OFFSET UNITYSDK_OFFSET(0xBB56F50)

inline static constexpr unsigned int FLNJPPMNMEE_TypeDefinitionIndex = 83331;

class FLNJPPMNMEE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNJPPMNMEE__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLNJPPMNMEE_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLNJPPMNMEE_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::UnityEngine::Vector3& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLNJPPMNMEE_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean DMNIGDILHBN(::EOAHOOCNDHM& EGEGIMGMJHN, ::UnityEngine::Vector3& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLNJPPMNMEE_DMNIGDILHBN_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
