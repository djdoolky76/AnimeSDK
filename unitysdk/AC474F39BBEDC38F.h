#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AC474F39BBEDC38F_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x1B96010)
#define AC474F39BBEDC38F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B960E0)
#define AC474F39BBEDC38F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AC474F39BBEDC38F_TypeDefinitionIndex = 2306;

class AC474F39BBEDC38F : public ::A375536B9B082594
{
public:
	::System::Single F2F8A61F63A2CE35; // 0x10
	::System::Single FEBC6F093C0BC8A8; // 0x14
	::System::Single E5EBF59E273E2E0D; // 0x18
	::System::Boolean F053134EFAF2C429; // 0x1C
	::System::Boolean E5A1A862D80C2C02; // 0x1D
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 E3745817B46098F1; // 0x20
	::System::Single FB7FD9D52BAEBEA2; // 0x2C
	::System::Boolean B6F838171E54FDA8; // 0x30

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + AC474F39BBEDC38F_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC474F39BBEDC38F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::AC474F39BBEDC38F* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::AC474F39BBEDC38F*))((::PBYTE)hIl2Cpp + AC474F39BBEDC38F__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
	}
};
