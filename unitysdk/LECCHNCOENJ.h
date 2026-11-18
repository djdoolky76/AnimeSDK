#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define LECCHNCOENJ_JHPAGPCBGJJ_OFFSET UNITYSDK_OFFSET(0x19987B70)

inline static constexpr unsigned int LECCHNCOENJ_TypeDefinitionIndex = 84190;

class LECCHNCOENJ : public ::System::Object
{
public:
	static ::System::Int32 JHPAGPCBGJJ(::UnityEngine::Vector3Int FEEFJKNGPAD, ::UnityEngine::Vector3Int BAFOIFLFFPH)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + LECCHNCOENJ_JHPAGPCBGJJ_OFFSET))(FEEFJKNGPAD, BAFOIFLFFPH);
	}
};
