#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadState.h"

namespace ABC::UI { class MonoButton; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::InputSystem { class Gamepad; }

#define FCC1545818BCF846_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x17ABC00)
#define FCC1545818BCF846_A3C5476AFE78F9AB_OFFSET UNITYSDK_OFFSET(0x17ABC70)
#define FCC1545818BCF846_AADF00824E643C59_OFFSET UNITYSDK_OFFSET(0x17AB900)
#define FCC1545818BCF846_AFF6FCDB9A1621C3_OFFSET UNITYSDK_OFFSET(0x17AB9D0)
#define FCC1545818BCF846_B781C31F6BE8612E_OFFSET UNITYSDK_OFFSET(0x17AB970)
#define FCC1545818BCF846_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x17ABD90)
#define FCC1545818BCF846__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCC1545818BCF846_TypeDefinitionIndex = 951;

class FCC1545818BCF846 : public ::System::Object
{
public:
	::ABC::UI::MonoButton* B175D8D86F00EE78; // 0x10
	::System::Boolean A8B920172522A7B7; // 0x18
	::System::Byte _padding0[0x7];
	::UnityEngine::InputSystem::Gamepad* FC1F0F04874AC696; // 0x20
	::UnityEngine::InputSystem::LowLevel::GamepadState F120338A03ECEED2; // 0x28

	::System::Void B781C31F6BE8612E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCC1545818BCF846_B781C31F6BE8612E_OFFSET))(this);
	}

	::System::Void AADF00824E643C59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCC1545818BCF846_AADF00824E643C59_OFFSET))(this);
	}

	::System::Void EC22F59F2C588175()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCC1545818BCF846_EC22F59F2C588175_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCC1545818BCF846__CTOR_OFFSET))(this);
	}

	::System::Void AFF6FCDB9A1621C3(::UnityEngine::GameObject* AD1247287D2D9217, ::System::Boolean BE38C169EB1E684C)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCC1545818BCF846_AFF6FCDB9A1621C3_OFFSET))(this, AD1247287D2D9217, BE38C169EB1E684C);
	}

	::System::Void A3C5476AFE78F9AB(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCC1545818BCF846_A3C5476AFE78F9AB_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A16C8ED92C989C9B(::System::Boolean ED0AEC1AC2559EDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCC1545818BCF846_A16C8ED92C989C9B_OFFSET))(this, ED0AEC1AC2559EDB);
	}
};
