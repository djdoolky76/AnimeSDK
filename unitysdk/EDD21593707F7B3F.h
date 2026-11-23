#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A3A7A3FAECD154E6.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace System { class String; }

#define EDD21593707F7B3F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EDD21593707F7B3F_TypeDefinitionIndex = 771;

class EDD21593707F7B3F : public ::A3A7A3FAECD154E6
{
public:
	::UnityEngine::Vector3 EF5E788F79595BE7; // 0x28
	::System::Byte _padding0[0x4];
	::AB642D1382756991* ED86FBC5C5B2F222; // 0x38
	::System::String* EF4CBAE63AE86477; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDD21593707F7B3F__CTOR_OFFSET))(this);
	}
};
