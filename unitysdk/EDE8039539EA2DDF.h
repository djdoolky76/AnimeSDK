#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"

class F07EC173975190A1;

#define EDE8039539EA2DDF_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x3821710)

inline static constexpr unsigned int EDE8039539EA2DDF_TypeDefinitionIndex = 17890;

class EDE8039539EA2DDF : public ::System::Object
{
public:
	static ::F07EC173975190A1* F29687675C2F4BB9(::HoudiniEngineUnity::HAPI_AttributeInfo BD8273AB04C4B760)
	{
		return ((::F07EC173975190A1*(*)(::HoudiniEngineUnity::HAPI_AttributeInfo))((::PBYTE)hIl2Cpp + EDE8039539EA2DDF_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
