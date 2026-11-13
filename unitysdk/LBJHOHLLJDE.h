#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDAJPHJBME;

#define LBJHOHLLJDE_ACGKGDDIBNB_OFFSET UNITYSDK_OFFSET(0x1B29E6B0)
#define LBJHOHLLJDE_APLEBHNBEHA_OFFSET UNITYSDK_OFFSET(0x1B29E710)
#define LBJHOHLLJDE_BHCPKFIDAKP_OFFSET UNITYSDK_OFFSET(0x1B29DA00)
#define LBJHOHLLJDE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1B29D790)
#define LBJHOHLLJDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B29D4B0)
#define LBJHOHLLJDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B29E0B0)
#define LBJHOHLLJDE_FDBDECPJEKF_OFFSET UNITYSDK_OFFSET(0x1B29E770)
#define LBJHOHLLJDE_GET_OVERRIDEXCLAMPDEADZONE_OFFSET UNITYSDK_OFFSET(0x1B29EE30)
#define LBJHOHLLJDE_GET_OVERRIDEXCLAMPSOFTZONE_OFFSET UNITYSDK_OFFSET(0x1B29EE10)
#define LBJHOHLLJDE_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0x1B29E150)
#define LBJHOHLLJDE_JOACGNDEHOE_OFFSET UNITYSDK_OFFSET(0x1B29E100)
#define LBJHOHLLJDE_KMNNKNOAIHL_OFFSET UNITYSDK_OFFSET(0x1B29D5A0)
#define LBJHOHLLJDE_MDPIPBOLOBK_OFFSET UNITYSDK_OFFSET(0x1B29DD10)
#define LBJHOHLLJDE_NEPMEHGLKFA_OFFSET UNITYSDK_OFFSET(0x1B29DEB0)
#define LBJHOHLLJDE_NJBJFELDKOA_OFFSET UNITYSDK_OFFSET(0x1B29E7D0)
#define LBJHOHLLJDE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1B29D550)
#define LBJHOHLLJDE_SET_OVERRIDEXCLAMPDEADZONE_OFFSET UNITYSDK_OFFSET(0x1B29EE40)
#define LBJHOHLLJDE_SET_OVERRIDEXCLAMPSOFTZONE_OFFSET UNITYSDK_OFFSET(0x1B29EE20)

inline static constexpr unsigned int LBJHOHLLJDE_TypeDefinitionIndex = 71621;

	class LBJHOHLLJDE : public ::System::Object
	{
	public:
		::AJDAJPHJBME* EMHKDLAOMHI; // 0x10
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 HNDKOOLOJAE; // 0x1C
		::UnityEngine::Vector2 OGDEKPDMCLF; // 0x24
		::System::Single PBLBNOOMKCC; // 0x2C
		::System::Nullable_1<::System::Single> _OverrideXClampDeadZone_k__BackingField; // 0x30
		::System::Nullable_1<::System::Single> _OverrideXClampSoftZone_k__BackingField; // 0x38
		::System::Single NMFDLKEPKLJ; // 0x40
		::System::Single ICCBDIBOGKO; // 0x44
		::System::Single AKIGECGJJDA; // 0x48
		::System::Single BAGGGIOKJAK; // 0x4C
		::UnityEngine::Vector2 MJGIHIGGBIK; // 0x50
		::RPG::Client::SwipeCameraStateEnum DLNIGFGLPLJ; // 0x58
		::System::Single JDPBNKPMDGF; // 0x5C
		::System::Single FDJLFNEJALP; // 0x60
		::System::Single CHFBAMFMAOJ; // 0x64
		::System::Void _ctor(::AJDAJPHJBME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDAJPHJBME*))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void BHCPKFIDAKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_BHCPKFIDAKP_OFFSET))(this);
		}

		::System::Void MDPIPBOLOBK(::AJDAJPHJBME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDAJPHJBME*))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_MDPIPBOLOBK_OFFSET))(this, a1);
		}

		::System::Void NEPMEHGLKFA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_NEPMEHGLKFA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_DISPOSE_OFFSET))(this);
		}

		::System::Void JOACGNDEHOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_JOACGNDEHOE_OFFSET))(this);
		}

		::System::Void HPNHBGEOGPO(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_HPNHBGEOGPO_OFFSET))(this, a1);
		}

		::System::Void FDBDECPJEKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_FDBDECPJEKF_OFFSET))(this);
		}

		::System::Void NJBJFELDKOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_NJBJFELDKOA_OFFSET))(this);
		}

		::System::Void KMNNKNOAIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_KMNNKNOAIHL_OFFSET))(this);
		}

		::System::Single APLEBHNBEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_APLEBHNBEHA_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_OverrideXClampSoftZone()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_GET_OVERRIDEXCLAMPSOFTZONE_OFFSET))(this);
		}

		::System::Void set_OverrideXClampSoftZone(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_SET_OVERRIDEXCLAMPSOFTZONE_OFFSET))(this, a1);
		}

		::System::Single ACGKGDDIBNB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_ACGKGDDIBNB_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_OverrideXClampDeadZone()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_GET_OVERRIDEXCLAMPDEADZONE_OFFSET))(this);
		}

		::System::Void set_OverrideXClampDeadZone(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + LBJHOHLLJDE_SET_OVERRIDEXCLAMPDEADZONE_OFFSET))(this, a1);
		}

	};
