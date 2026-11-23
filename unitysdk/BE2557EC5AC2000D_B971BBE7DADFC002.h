#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define BE2557EC5AC2000D_B971BBE7DADFC002__CTOR_OFFSET UNITYSDK_OFFSET(0x2863EA0)

inline static constexpr unsigned int BE2557EC5AC2000D_B971BBE7DADFC002_TypeDefinitionIndex = 16019;

class BE2557EC5AC2000D_B971BBE7DADFC002 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Material*>* A564362144AC7B15; // 0x10

	::System::Void _ctor(::System::Int32 A70E5C58B2C7A692)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BE2557EC5AC2000D_B971BBE7DADFC002__CTOR_OFFSET))(this, A70E5C58B2C7A692);
	}
};
