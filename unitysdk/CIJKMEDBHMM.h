#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SceneObjectType.h"
#include "unitysdk/System/Object.h"

class JDCJAJHEDDA;
class MainCityObjectState_ScriptConfig;

#define CIJKMEDBHMM_ILDBMINPAEE_OFFSET UNITYSDK_OFFSET(0x18DD8310)
#define CIJKMEDBHMM__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD8300)

inline static constexpr unsigned int CIJKMEDBHMM_TypeDefinitionIndex = 67701;

class CIJKMEDBHMM : public ::System::Object
{
public:
	::MainCityObjectState_ScriptConfig* COKJFBMINAC; // 0x10
	::JDCJAJHEDDA* DFDLNKKIHJJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJKMEDBHMM__CTOR_OFFSET))(this);
	}

	::SceneObjectType ILDBMINPAEE()
	{
		return ((::SceneObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJKMEDBHMM_ILDBMINPAEE_OFFSET))(this);
	}
};
