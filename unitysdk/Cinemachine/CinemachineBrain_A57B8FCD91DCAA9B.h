#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADC90DA61392B88F;
class E1006F41E839665A;

#define CINEMACHINE_CINEMACHINEBRAIN_A57B8FCD91DCAA9B_F3DED9909B30D350_OFFSET UNITYSDK_OFFSET(0x2A7E080)
#define CINEMACHINE_CINEMACHINEBRAIN_A57B8FCD91DCAA9B__CTOR_OFFSET UNITYSDK_OFFSET(0x2A7DF70)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_A57B8FCD91DCAA9B_TypeDefinitionIndex = 18497;

	class CinemachineBrain_A57B8FCD91DCAA9B : public ::System::Object
	{
	public:
		::System::Int32 F5AEFA05C9F71B82; // 0x10
		::System::Byte _padding0[0x4];
		::E1006F41E839665A* BE7A99FDCA3A4D85; // 0x18
		::E1006F41E839665A* A67DB36DFCEF6DC6; // 0x20
		::ADC90DA61392B88F* ACE18D2E2367A096; // 0x28
		::System::Single A5FE3D1185D56F6D; // 0x30
		::System::Single BD1929DA92BF5CAF; // 0x34

		::System::Boolean F3DED9909B30D350()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_A57B8FCD91DCAA9B_F3DED9909B30D350_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_A57B8FCD91DCAA9B__CTOR_OFFSET))(this);
		}
	};
}
