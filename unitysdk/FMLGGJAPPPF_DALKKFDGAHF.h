#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/SceneEntityData.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define FMLGGJAPPPF_DALKKFDGAHF_FOKAANCLJDF_OFFSET UNITYSDK_OFFSET(0x191FEBD0)
#define FMLGGJAPPPF_DALKKFDGAHF__CTOR_OFFSET UNITYSDK_OFFSET(0x191FEBC0)

inline static constexpr unsigned int FMLGGJAPPPF_DALKKFDGAHF_TypeDefinitionIndex = 64629;

class FMLGGJAPPPF_DALKKFDGAHF : public ::System::Object
{
public:
	::IANDOOLAALI_DLAAJNDJPLO* FPNLKPJNCGK; // 0x10
	::Foundation::ViewObject::SceneEntityData EAPIEMGDDMM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_DALKKFDGAHF__CTOR_OFFSET))(this);
	}

	::System::Void FOKAANCLJDF(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_DALKKFDGAHF_FOKAANCLJDF_OFFSET))(this, NAPFALLANDL);
	}
};
