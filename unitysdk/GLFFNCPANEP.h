#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

#define GLFFNCPANEP_CCPPGOEFOGN_OFFSET UNITYSDK_OFFSET(0x15B290A0)
#define GLFFNCPANEP_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0x15B29020)
#define GLFFNCPANEP_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0x15B28E20)
#define GLFFNCPANEP_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0x15B28CF0)
#define GLFFNCPANEP__CTOR_OFFSET UNITYSDK_OFFSET(0x15B29090)

inline static constexpr unsigned int GLFFNCPANEP_TypeDefinitionIndex = 85370;

class GLFFNCPANEP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFFNCPANEP__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::System::Single EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLFFNCPANEP_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLFFNCPANEP_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Single& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Single&))((::PBYTE)hIl2Cpp + GLFFNCPANEP_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean CCPPGOEFOGN(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Single& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Single&))((::PBYTE)hIl2Cpp + GLFFNCPANEP_CCPPGOEFOGN_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
