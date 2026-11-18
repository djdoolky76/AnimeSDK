#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHKLBKEABJB.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GDHHLMNAIEN_IBDDCBECNEB_OFFSET UNITYSDK_OFFSET(0x15CDC0C0)

inline static constexpr unsigned int GDHHLMNAIEN_TypeDefinitionIndex = 74618;

class GDHHLMNAIEN : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 IBDDCBECNEB(::NHKLBKEABJB CBLGCIFLMKL, ::UnityEngine::Vector3& HEAJMIGHEHG)
	{
		return ((::UnityEngine::Vector3(*)(::NHKLBKEABJB, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + GDHHLMNAIEN_IBDDCBECNEB_OFFSET))(CBLGCIFLMKL, HEAJMIGHEHG);
	}
};
