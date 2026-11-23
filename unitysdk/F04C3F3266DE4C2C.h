#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"
#include "unitysdk/A970A434E9CC38AD/F817AB1F42C8BD2D.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define F04C3F3266DE4C2C_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x1A71390)
#define F04C3F3266DE4C2C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A71500)
#define F04C3F3266DE4C2C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A714A0)

inline static constexpr unsigned int F04C3F3266DE4C2C_TypeDefinitionIndex = 1837;

class F04C3F3266DE4C2C : public ::A375536B9B082594
{
public:
	::UnityEngine::Vector3 E3745817B46098F1; // 0x10
	::System::Boolean F067277C9C5BFFB4; // 0x1C
	::System::Byte _padding0[0x3];
	::UnityEngine::Quaternion B14F5F733E2AD130; // 0x20
	::System::Boolean F412DFCBFBDB5A48; // 0x30
	::System::Boolean F757048C04D59B58; // 0x31
	::System::Byte _padding1[0x2];
	::A970A434E9CC38AD::F817AB1F42C8BD2D A6D8BA8AD54C151D; // 0x34
	::UnityEngine::Vector2 B58B295DF1CC4C05; // 0x38
	::System::Boolean FC25F84DA7368B4D; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F04C3F3266DE4C2C__CTOR_OFFSET))(this);
	}

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + F04C3F3266DE4C2C_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor_1(::F04C3F3266DE4C2C* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::F04C3F3266DE4C2C*))((::PBYTE)hIl2Cpp + F04C3F3266DE4C2C__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
	}
};
