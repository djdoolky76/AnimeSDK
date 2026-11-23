#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E0899E7EE5689A05;
namespace UnityEngine { class Terrain; }

#define FFB41548CA5DF64D_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x3822060)

inline static constexpr unsigned int FFB41548CA5DF64D_TypeDefinitionIndex = 17918;

class FFB41548CA5DF64D : public ::System::Object
{
public:
	static ::E0899E7EE5689A05* F29687675C2F4BB9(::UnityEngine::Terrain* BD8273AB04C4B760)
	{
		return ((::E0899E7EE5689A05*(*)(::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + FFB41548CA5DF64D_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
