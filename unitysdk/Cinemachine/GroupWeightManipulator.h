#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineTargetGroup; }

#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2A78470)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_F130735B08D24970_OFFSET UNITYSDK_OFFSET(0x2A782E0)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2A78290)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x2A78220)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2A78650)

namespace Cinemachine
{
	inline static constexpr unsigned int GroupWeightManipulator_TypeDefinitionIndex = 18411;

	class GroupWeightManipulator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single m_Weight0; // 0x20
		::System::Single m_Weight1; // 0x24
		::System::Single m_Weight2; // 0x28
		::System::Single m_Weight3; // 0x2C
		::System::Single m_Weight4; // 0x30
		::System::Single m_Weight5; // 0x34
		::System::Single m_Weight6; // 0x38
		::System::Single m_Weight7; // 0x3C
		::Cinemachine::CinemachineTargetGroup* F10E03E87D6748FB; // 0x40

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_E02954280801633F_OFFSET))(this);
		}

		::System::Void FE0C4BACA9717677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_FE0C4BACA9717677_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR__CTOR_OFFSET))(this);
		}

		::System::Void F130735B08D24970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_F130735B08D24970_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_F328E4D8818B1E12_OFFSET))(this);
		}
	};
}
