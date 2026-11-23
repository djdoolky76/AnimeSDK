#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AB642D1382756991;
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::InputSystem { class InputAction; }

#define ABC_LOOKDEV_INTERACTTEST_A95573383DAF3C32_OFFSET UNITYSDK_OFFSET(0x1AB1340)
#define ABC_LOOKDEV_INTERACTTEST_B7C33F4D0B2F92F3_OFFSET UNITYSDK_OFFSET(0x1AB0BE0)
#define ABC_LOOKDEV_INTERACTTEST_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x1AB1970)
#define ABC_LOOKDEV_INTERACTTEST_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x1AB1890)
#define ABC_LOOKDEV_INTERACTTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB1B90)

namespace ABC::LookDev
{
	inline static constexpr unsigned int InteractTest_TypeDefinitionIndex = 1916;

	class InteractTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::InputSystem::InputAction* InterAct; // 0x20
		::UnityEngine::Transform* EA9AC2AF232AB7B3; // 0x28
		::UnityEngine::GameObject* HintOn; // 0x30
		::UnityEngine::GameObject* HintLoop; // 0x38
		::UnityEngine::GameObject* HintLock; // 0x40
		::System::Single HintRange; // 0x48
		::System::Single HintAngle; // 0x4C
		::System::Single HintView; // 0x50
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* ButtonShow; // 0x58
		::System::Single TriggerRange; // 0x60
		::System::Single TriggerAngle; // 0x64
		::System::Single TriggerFace; // 0x68
		::System::Byte _padding1[0x4];
		::System::UInt64 followEntityRuntimeID; // 0x70
		::AB642D1382756991* E8BF0C64BCCD101B; // 0x78
		::System::Boolean B5752A5C5A894365; // 0x80
		::System::Boolean E5D413D5E08DACA8; // 0x81
		::System::Byte _padding2[0x6];
		::Il2CppArray<::System::Object*>* F3F7C042F2ED09D2; // 0x88
		::System::Boolean A3AD4C3645746B09; // 0x90
		::System::Boolean F56BC586C39504B1; // 0x91

		::System::Void B7C33F4D0B2F92F3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_LOOKDEV_INTERACTTEST_B7C33F4D0B2F92F3_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_LOOKDEV_INTERACTTEST_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void A95573383DAF3C32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_LOOKDEV_INTERACTTEST_A95573383DAF3C32_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_LOOKDEV_INTERACTTEST_E02954280801633F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_LOOKDEV_INTERACTTEST__CTOR_OFFSET))(this);
		}
	};
}
