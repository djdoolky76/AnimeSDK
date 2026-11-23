#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A759FF51E9CF5A43__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A759FF51E9CF5A43_TypeDefinitionIndex = 1062;

class A759FF51E9CF5A43 : public ::E379DE61A548837D
{
public:
	::System::Boolean F6B8FCCA6A10E21B; // 0x38
	::System::Boolean A2DA1096DC4EC695; // 0x39
	::System::Boolean FF67562CFB8B8D91; // 0x3A
	::System::Byte _padding0[0x1];
	::UnityEngine::Vector3 FFF299FAC6915F64; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A759FF51E9CF5A43__CTOR_OFFSET))(this);
	}
};
