#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFAF2E7547F02B7C.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define AAE946DB9D3CB37B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DA75C0)
#define AAE946DB9D3CB37B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AAE946DB9D3CB37B_TypeDefinitionIndex = 18916;

class AAE946DB9D3CB37B : public ::System::Object
{
public:
	::UnityEngine::Material* E3AD885F703BB54B; // 0x10
	::Il2CppArray<::EFAF2E7547F02B7C>* A140FFBF090BF76F; // 0x18
	::System::Single F0961C93719F7B0D; // 0x20
	::System::Single F5EF7E29767E03BF; // 0x24
	::System::Boolean B45B1EBCDB7AF28A; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single F8DBFDB50D26B599; // 0x2C
	::System::Boolean E6560A3CF9706080; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAE946DB9D3CB37B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::AAE946DB9D3CB37B* AF3825C05CB7932D)
	{
		return ((::System::Void(*)(::PVOID, ::AAE946DB9D3CB37B*))((::PBYTE)hIl2Cpp + AAE946DB9D3CB37B__CTOR_1_OFFSET))(this, AF3825C05CB7932D);
	}
};
