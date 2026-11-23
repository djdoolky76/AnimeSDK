#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BE14F800544A1142;
namespace UnityEngine { class Mesh; }

#define F162744A0E8C34C1_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x3897550)

inline static constexpr unsigned int F162744A0E8C34C1_TypeDefinitionIndex = 18129;

class F162744A0E8C34C1 : public ::System::Object
{
public:
	static ::BE14F800544A1142* F29687675C2F4BB9(::UnityEngine::Mesh* BD8273AB04C4B760)
	{
		return ((::BE14F800544A1142*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + F162744A0E8C34C1_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
