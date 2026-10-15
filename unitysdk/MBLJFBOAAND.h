#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define MBLJFBOAAND_CTOR_OFFSET UNITYSDK_OFFSET(0xB862850)
#define MBLJFBOAAND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB862B90)
#define MBLJFBOAAND_FDBDECPJEKF_OFFSET UNITYSDK_OFFSET(0xB864180)
#define MBLJFBOAAND_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0xB862C50)
#define MBLJFBOAAND_JOACGNDEHOE_OFFSET UNITYSDK_OFFSET(0xB862BD0)
#define MBLJFBOAAND_KMNNKNOAIHL_OFFSET UNITYSDK_OFFSET(0xB862990)
#define MBLJFBOAAND_MDEFJLNGJOE_OFFSET UNITYSDK_OFFSET(0xB863680)
#define MBLJFBOAAND_NJBJFELDKOA_OFFSET UNITYSDK_OFFSET(0xB8641E0)
#define MBLJFBOAAND_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0xB862890)
#define MBLJFBOAAND_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB862940)

	class MBLJFBOAAND : public ::System::Object
	{
	public:
		::UnityEngine::Transform* AFIBNIPMICJ; // 0x10
		::System::Single BAGGGIOKJAK; // 0x18
		::UnityEngine::Vector2 MJGIHIGGBIK; // 0x1C
		::System::Single MEHLMFMJANN; // 0x24
		::System::Single DCLAIMLDBFO; // 0x28
		::UnityEngine::Quaternion CPOGADDNCLM; // 0x2C
		::System::Boolean MOKNCFJICIC; // 0x3C
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion HCFLKAIIMMN; // 0x40
		::System::Single GNFOMGEBMAA; // 0x50
		::UnityEngine::Quaternion IKLDDLDIJIC; // 0x54
		::UnityEngine::Quaternion ECDODICPJJH; // 0x64
		::System::Single MIPBBGJCKCB; // 0x74
		::UnityEngine::Vector2 OGDEKPDMCLF; // 0x78
		::System::Single NMFDLKEPKLJ; // 0x80
		::RPG::Client::SwipeCameraStateEnum DLNIGFGLPLJ; // 0x84
		::System::Single PBLBNOOMKCC; // 0x88
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
