#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ACD987745C82DE5C_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x2886580)
#define ACD987745C82DE5C__CTOR_OFFSET UNITYSDK_OFFSET(0x2886770)

inline static constexpr unsigned int ACD987745C82DE5C_TypeDefinitionIndex = 16146;

class ACD987745C82DE5C : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::E46B881AA2636190 E73B979745167263; // 0x18
	::System::Single AF3DC744E228F517; // 0x28
	::System::Boolean FA4F62C5D2833AD0; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Single E44435F3B076F384; // 0x30
	::System::Boolean ACF7910858F0EE18; // 0x34
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector3 A716E5A37332A49F; // 0x38

	::System::Boolean FC3208D7B8C7EE04(::ACD987745C82DE5C* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::ACD987745C82DE5C*))((::PBYTE)hIl2Cpp + ACD987745C82DE5C_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACD987745C82DE5C__CTOR_OFFSET))(this);
	}
};
