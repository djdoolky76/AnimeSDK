#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A958BCFBBED70564;
namespace UnityEngine { class Material; }

#define E56EE88CEBE84A9D_F29687675C2F4BB9_1_OFFSET UNITYSDK_OFFSET(0x38079B0)
#define E56EE88CEBE84A9D_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x3807950)

inline static constexpr unsigned int E56EE88CEBE84A9D_TypeDefinitionIndex = 17827;

class E56EE88CEBE84A9D : public ::System::Object
{
public:
	static ::A958BCFBBED70564* F29687675C2F4BB9(::UnityEngine::Material* BD8273AB04C4B760)
	{
		return ((::A958BCFBBED70564*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + E56EE88CEBE84A9D_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}

	static ::Il2CppArray<::A958BCFBBED70564*>* F29687675C2F4BB9_1(::Il2CppArray<::UnityEngine::Material*>* BD8273AB04C4B760)
	{
		return ((::Il2CppArray<::A958BCFBBED70564*>*(*)(::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + E56EE88CEBE84A9D_F29687675C2F4BB9_1_OFFSET))(BD8273AB04C4B760);
	}
};
