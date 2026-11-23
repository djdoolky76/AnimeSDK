#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ED83200B35791047;
namespace UnityEngine { class CapsuleCollider; }

#define A9CDAB577E98AA68_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x389A1D0)

inline static constexpr unsigned int A9CDAB577E98AA68_TypeDefinitionIndex = 18155;

class A9CDAB577E98AA68 : public ::System::Object
{
public:
	static ::ED83200B35791047* F29687675C2F4BB9(::UnityEngine::CapsuleCollider* BD8273AB04C4B760)
	{
		return ((::ED83200B35791047*(*)(::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + A9CDAB577E98AA68_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}
};
