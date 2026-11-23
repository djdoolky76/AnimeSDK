#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BF0DA9333D08C555;
namespace UnityEngine { class TerrainLayer; }

#define F922AF60900157FE_F29687675C2F4BB9_1_OFFSET UNITYSDK_OFFSET(0x387DD50)
#define F922AF60900157FE_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x387DCF0)

inline static constexpr unsigned int F922AF60900157FE_TypeDefinitionIndex = 18040;

class F922AF60900157FE : public ::System::Object
{
public:
	static ::BF0DA9333D08C555* F29687675C2F4BB9(::UnityEngine::TerrainLayer* BD8273AB04C4B760)
	{
		return ((::BF0DA9333D08C555*(*)(::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + F922AF60900157FE_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}

	static ::Il2CppArray<::BF0DA9333D08C555*>* F29687675C2F4BB9_1(::Il2CppArray<::UnityEngine::TerrainLayer*>* BD8273AB04C4B760)
	{
		return ((::Il2CppArray<::BF0DA9333D08C555*>*(*)(::Il2CppArray<::UnityEngine::TerrainLayer*>*))((::PBYTE)hIl2Cpp + F922AF60900157FE_F29687675C2F4BB9_1_OFFSET))(BD8273AB04C4B760);
	}
};
