#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define MARBLESUBSEALROTATOR_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA40EA0)
#define MARBLESUBSEALROTATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xBA41010)
#define MARBLESUBSEALROTATOR_INIT_OFFSET UNITYSDK_OFFSET(0xBA406F0)
#define MARBLESUBSEALROTATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBA40FC0)
#define MARBLESUBSEALROTATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBA40F70)
#define MARBLESUBSEALROTATOR_ONGCOOOIAND_OFFSET UNITYSDK_OFFSET(0xBA40890)
#define MARBLESUBSEALROTATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xBA40EF0)

inline static constexpr unsigned int MarbleSubSealRotator_TypeDefinitionIndex = 47136;

	class MarbleSubSealRotator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* centerObject; // 0x18
		::System::Single rotationSpeed; // 0x20
		::System::Boolean clockwise; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Transform* rotateTarget; // 0x28
		::UnityEngine::Quaternion CFJENBNHIKE; // 0x30
		::UnityEngine::Vector3 ABEDOCADBIK; // 0x40
		::System::Boolean DBAHJNANIOG; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_CLEAR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_UPDATE_OFFSET))(this);
		}

		::System::Void ONGCOOOIAND(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_ONGCOOOIAND_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MARBLESUBSEALROTATOR_ONDISABLE_OFFSET))(this);
		}

	};
