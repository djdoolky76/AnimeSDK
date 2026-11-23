#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define A4FEB43F22CA926B_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x1844380)
#define A4FEB43F22CA926B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1844470)
#define A4FEB43F22CA926B__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7770)

inline static constexpr unsigned int A4FEB43F22CA926B_TypeDefinitionIndex = 1203;

class A4FEB43F22CA926B : public ::A375536B9B082594
{
public:
	::System::Boolean A79F61F267484D8C; // 0x10
	::System::Boolean B8C6D4C5E9FB80AA; // 0x11
	::System::Byte _padding0[0x2];
	::System::Single A96B3F90F892E339; // 0x14
	::System::Single E8F628E3978FCA98; // 0x18
	::UnityEngine::Quaternion F17025045B810608; // 0x1C
	::UnityEngine::Quaternion A8A0E11D20499574; // 0x2C
	::UnityEngine::Quaternion E4F2F8F1B9EE38F2; // 0x3C
	::UnityEngine::Quaternion FBDC0BA1F6E3055C; // 0x4C
	::UnityEngine::Quaternion F52D03CD15C75F18; // 0x5C
	::UnityEngine::Quaternion FCAFA9678269A41F; // 0x6C
	::System::Single BCF1C49FC6792F8C; // 0x7C
	::System::Single A2DD6679B4A3442B; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4FEB43F22CA926B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::A4FEB43F22CA926B* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::A4FEB43F22CA926B*))((::PBYTE)hIl2Cpp + A4FEB43F22CA926B__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
	}

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + A4FEB43F22CA926B_A4CFF253D56ECB2D_OFFSET))(this);
	}
};
