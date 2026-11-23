#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"
#include "unitysdk/E68AA4EB51923C98/A78FBDBE963A373C.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define B4C8B89DA5605D4F_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x17033D0)
#define B4C8B89DA5605D4F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1703580)
#define B4C8B89DA5605D4F__CTOR_OFFSET UNITYSDK_OFFSET(0x17034E0)

inline static constexpr unsigned int B4C8B89DA5605D4F_TypeDefinitionIndex = 625;

class B4C8B89DA5605D4F : public ::A375536B9B082594
{
public:
	::System::Boolean A975FFCF6509B079; // 0x10
	::System::Boolean FCD5BF598AFECFD1; // 0x11
	::System::Boolean F2B3EC9A9306E71E; // 0x12
	::System::Byte _padding0[0x1];
	::System::Single B8F76B1CCF6FCD1C; // 0x14
	::System::Single EEC157656A101F93; // 0x18
	::System::Single EABF321280725570; // 0x1C
	::UnityEngine::Quaternion A8A0E11D20499574; // 0x20
	::UnityEngine::Quaternion F17025045B810608; // 0x30
	::UnityEngine::Quaternion E4F2F8F1B9EE38F2; // 0x40
	::UnityEngine::Quaternion FBDC0BA1F6E3055C; // 0x50
	::UnityEngine::Quaternion F52D03CD15C75F18; // 0x60
	::UnityEngine::Quaternion FCAFA9678269A41F; // 0x70
	::System::Single BCF1C49FC6792F8C; // 0x80
	::E68AA4EB51923C98::A78FBDBE963A373C F51BF14251FE88BF; // 0x84

	::System::Void _ctor(::B4C8B89DA5605D4F* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::B4C8B89DA5605D4F*))((::PBYTE)hIl2Cpp + B4C8B89DA5605D4F__CTOR_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4C8B89DA5605D4F__CTOR_1_OFFSET))(this);
	}

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + B4C8B89DA5605D4F_A4CFF253D56ECB2D_OFFSET))(this);
	}
};
