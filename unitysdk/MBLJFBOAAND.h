#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define MBLJFBOAAND_CTOR_OFFSET UNITYSDK_OFFSET(0xB85C030)
#define MBLJFBOAAND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB85C360)
#define MBLJFBOAAND_FDBDECPJEKF_OFFSET UNITYSDK_OFFSET(0xB85D940)
#define MBLJFBOAAND_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0xB85C410)
#define MBLJFBOAAND_JOACGNDEHOE_OFFSET UNITYSDK_OFFSET(0xB85C3A0)
#define MBLJFBOAAND_KMNNKNOAIHL_OFFSET UNITYSDK_OFFSET(0xB85C170)
#define MBLJFBOAAND_MDEFJLNGJOE_OFFSET UNITYSDK_OFFSET(0xB85CE40)
#define MBLJFBOAAND_NJBJFELDKOA_OFFSET UNITYSDK_OFFSET(0xB85D9A0)
#define MBLJFBOAAND_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0xB85C070)
#define MBLJFBOAAND_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB85C120)

inline static constexpr unsigned int MBLJFBOAAND_TypeDefinitionIndex = 69708;

	class MBLJFBOAAND : public ::System::Object
	{
	public:
		::UnityEngine::Transform* AFIBNIPMICJ; // 0x10
		::System::Single DCLAIMLDBFO; // 0x18
		::System::Single NMFDLKEPKLJ; // 0x1C
		::RPG::Client::SwipeCameraStateEnum DLNIGFGLPLJ; // 0x20
		::UnityEngine::Vector2 MJGIHIGGBIK; // 0x24
		::System::Boolean MOKNCFJICIC; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single PBLBNOOMKCC; // 0x30
		::UnityEngine::Quaternion ECDODICPJJH; // 0x34
		::UnityEngine::Quaternion CPOGADDNCLM; // 0x44
		::System::Single MEHLMFMJANN; // 0x54
		::System::Single MIPBBGJCKCB; // 0x58
		::UnityEngine::Quaternion IKLDDLDIJIC; // 0x5C
		::System::Single GNFOMGEBMAA; // 0x6C
		::UnityEngine::Quaternion HCFLKAIIMMN; // 0x70
		::System::Single BAGGGIOKJAK; // 0x80
		::UnityEngine::Vector2 OGDEKPDMCLF; // 0x84
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
