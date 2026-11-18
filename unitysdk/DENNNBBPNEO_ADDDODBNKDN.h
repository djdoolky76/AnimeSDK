#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DENNNBBPNEO;
class JJOKKBDDGNN;

#define DENNNBBPNEO_ADDDODBNKDN_EMIANBBPNAD_OFFSET UNITYSDK_OFFSET(0x13E4A090)
#define DENNNBBPNEO_ADDDODBNKDN__CTOR_OFFSET UNITYSDK_OFFSET(0x13E48F10)

inline static constexpr unsigned int DENNNBBPNEO_ADDDODBNKDN_TypeDefinitionIndex = 75932;

class DENNNBBPNEO_ADDDODBNKDN : public ::System::Object
{
public:
	::JJOKKBDDGNN* HPEMFJDOAKL; // 0x10
	::DENNNBBPNEO* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNNBBPNEO_ADDDODBNKDN__CTOR_OFFSET))(this);
	}

	::System::Void EMIANBBPNAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNNBBPNEO_ADDDODBNKDN_EMIANBBPNAD_OFFSET))(this);
	}
};
