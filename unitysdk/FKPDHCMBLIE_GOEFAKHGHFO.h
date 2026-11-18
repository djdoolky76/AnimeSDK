#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKPDHCMBLIE;
class IFOHGNLIAKH;

#define FKPDHCMBLIE_GOEFAKHGHFO_GAHMBFIFNIK_OFFSET UNITYSDK_OFFSET(0x116BA2F0)
#define FKPDHCMBLIE_GOEFAKHGHFO__CTOR_OFFSET UNITYSDK_OFFSET(0x116BA2E0)

inline static constexpr unsigned int FKPDHCMBLIE_GOEFAKHGHFO_TypeDefinitionIndex = 72819;

class FKPDHCMBLIE_GOEFAKHGHFO : public ::System::Object
{
public:
	::FKPDHCMBLIE* KLHPEBKNIFB; // 0x10
	::System::Int32 IIKMCHENBFD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_GOEFAKHGHFO__CTOR_OFFSET))(this);
	}

	::System::Void GAHMBFIFNIK(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_GOEFAKHGHFO_GAHMBFIFNIK_OFFSET))(this, JOLDOMEIKEF);
	}
};
