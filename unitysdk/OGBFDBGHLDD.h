#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define OGBFDBGHLDD_BFDANFKFPDO_OFFSET UNITYSDK_OFFSET(0x11B27CD0)
#define OGBFDBGHLDD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11B27930)
#define OGBFDBGHLDD_NFAOKJPILBO_OFFSET UNITYSDK_OFFSET(0x11B28640)
#define OGBFDBGHLDD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11B27DA0)
#define OGBFDBGHLDD__CTOR_OFFSET UNITYSDK_OFFSET(0x11B27920)

inline static constexpr unsigned int OGBFDBGHLDD_TypeDefinitionIndex = 46514;

class OGBFDBGHLDD : public ::System::Object
{
public:
	::UnityEngine::Vector3 AGDDHPEBIBI; // 0x10
	::UnityEngine::Vector3 MGOOHKMOAEE; // 0x1C
	::System::Int32 HOBCCLDCHNL; // 0x28
	::UnityEngine::Vector3 MFOKGCIHDPG; // 0x2C
	::UnityEngine::Vector3 ICFMJJLPBGN; // 0x38
	::System::Single PLIAFLNEILG; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBFDBGHLDD__CTOR_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGBFDBGHLDD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean BFDANFKFPDO(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGBFDBGHLDD_BFDANFKFPDO_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean NFAOKJPILBO(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGBFDBGHLDD_NFAOKJPILBO_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OGBFDBGHLDD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
