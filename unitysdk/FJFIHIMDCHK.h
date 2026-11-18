#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CEOJCBCHKKK;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define FJFIHIMDCHK_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1429B8C0)
#define FJFIHIMDCHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1429B8B0)

inline static constexpr unsigned int FJFIHIMDCHK_TypeDefinitionIndex = 51345;

class FJFIHIMDCHK : public ::System::Object
{
public:
	::UnityEngine::GameObject* IKOCCMNFDLM; // 0x10
	::UnityEngine::Collider* KEJBNHNHIJH; // 0x18
	::CEOJCBCHKKK* DDJBAJGNNAK; // 0x20
	::System::Int32 GKHIKJILJKG; // 0x28
	::System::Boolean CGDNNBKFCNP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFIHIMDCHK__CTOR_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFIHIMDCHK_EMCPPBMEKKK_OFFSET))(this);
	}
};
