#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB941644993810C0;
namespace UnityEngine { class TerrainData; }

#define E83FD7948BC215AA_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x3821A80)

inline static constexpr unsigned int E83FD7948BC215AA_TypeDefinitionIndex = 17905;

class E83FD7948BC215AA : public ::System::Object
{
public:
	static ::AB941644993810C0* F29687675C2F4BB9(::UnityEngine::TerrainData* BD8273AB04C4B760)
	{
		return ((::AB941644993810C0*(*)(::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + E83FD7948BC215AA_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
