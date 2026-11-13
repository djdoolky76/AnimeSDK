#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define MBLJFBOAAND_CTOR_OFFSET UNITYSDK_OFFSET(0x1B827F00)
#define MBLJFBOAAND_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B828230)
#define MBLJFBOAAND_FDBDECPJEKF_OFFSET UNITYSDK_OFFSET(0x1B829810)
#define MBLJFBOAAND_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0x1B8282E0)
#define MBLJFBOAAND_JOACGNDEHOE_OFFSET UNITYSDK_OFFSET(0x1B828270)
#define MBLJFBOAAND_KMNNKNOAIHL_OFFSET UNITYSDK_OFFSET(0x1B828040)
#define MBLJFBOAAND_MDEFJLNGJOE_OFFSET UNITYSDK_OFFSET(0x1B828D10)
#define MBLJFBOAAND_NJBJFELDKOA_OFFSET UNITYSDK_OFFSET(0x1B829870)
#define MBLJFBOAAND_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0x1B827F40)
#define MBLJFBOAAND_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1B827FF0)

inline static constexpr unsigned int MBLJFBOAAND_TypeDefinitionIndex = 71665;

	class MBLJFBOAAND : public ::System::Object
	{
	public:
		::UnityEngine::Transform* AFIBNIPMICJ; // 0x10
		::System::Single DCLAIMLDBFO; // 0x18
		::System::Single BAGGGIOKJAK; // 0x1C
		::System::Single PBLBNOOMKCC; // 0x20
		::UnityEngine::Quaternion ECDODICPJJH; // 0x24
		::UnityEngine::Vector2 MJGIHIGGBIK; // 0x34
		::System::Single NMFDLKEPKLJ; // 0x3C
		::UnityEngine::Quaternion CPOGADDNCLM; // 0x40
		::System::Single GNFOMGEBMAA; // 0x50
		::System::Single MEHLMFMJANN; // 0x54
		::System::Single MIPBBGJCKCB; // 0x58
		::UnityEngine::Vector2 OGDEKPDMCLF; // 0x5C
		::RPG::Client::SwipeCameraStateEnum DLNIGFGLPLJ; // 0x64
		::System::Boolean MOKNCFJICIC; // 0x68
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion IKLDDLDIJIC; // 0x6C
		::UnityEngine::Quaternion HCFLKAIIMMN; // 0x7C
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MBLJFBOAAND_CTOR_OFFSET))(this, a1);
		}

		::System::Void NLKPKABOIPJ(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MBLJFBOAAND_NLKPKABOIPJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PAGKOAEOLKA(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + MBLJFBOAAND_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJFBOAAND_DISPOSE_OFFSET))(this);
		}

		::System::Void JOACGNDEHOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJFBOAAND_JOACGNDEHOE_OFFSET))(this);
		}

		::System::Void HPNHBGEOGPO(::UnityEngine::Vector2 a1, ::Cinemachine::CameraState a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + MBLJFBOAAND_HPNHBGEOGPO_OFFSET))(this, a1, a2);
		}

		::System::Void MDEFJLNGJOE(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MBLJFBOAAND_MDEFJLNGJOE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FDBDECPJEKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJFBOAAND_FDBDECPJEKF_OFFSET))(this);
		}

		::System::Void NJBJFELDKOA(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + MBLJFBOAAND_NJBJFELDKOA_OFFSET))(this, a1);
		}

		::System::Void KMNNKNOAIHL(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + MBLJFBOAAND_KMNNKNOAIHL_OFFSET))(this, a1);
		}

	};
