#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BODIAENCNJK.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define NOOHPODHIAA_BJEANHMFOOI_OFFSET UNITYSDK_OFFSET(0x1C948860)
#define NOOHPODHIAA_BKLGLHDKEAA_OFFSET UNITYSDK_OFFSET(0x1C948D60)
#define NOOHPODHIAA_BNIOHBCKNBF_OFFSET UNITYSDK_OFFSET(0x1C9484D0)
#define NOOHPODHIAA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C93F230)
#define NOOHPODHIAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C93F900)
#define NOOHPODHIAA_GHDNOFAEHFK_OFFSET UNITYSDK_OFFSET(0x1C948BE0)
#define NOOHPODHIAA_JKLCJONONKK_OFFSET UNITYSDK_OFFSET(0x1C948660)
#define NOOHPODHIAA_LHALEMGAFCD_OFFSET UNITYSDK_OFFSET(0x1C948340)
#define NOOHPODHIAA_MIMNCPKKLEK_OFFSET UNITYSDK_OFFSET(0x1C9481B0)
#define NOOHPODHIAA_NNPBOGFNKKE_OFFSET UNITYSDK_OFFSET(0x1C9489E0)
#define NOOHPODHIAA_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C948DD0)
#define NOOHPODHIAA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C948E30)
#define NOOHPODHIAA_PLLHBPIPIGA_OFFSET UNITYSDK_OFFSET(0x1C948120)

inline static constexpr unsigned int NOOHPODHIAA_TypeDefinitionIndex = 43527;

	class NOOHPODHIAA : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::UnityEngine::Collider*>* FNLFKIKJLDI; // 0x10
		::RPG::PoolList_1<::UnityEngine::Collider*>* IEFGOLHAPNP; // 0x18
		::UnityEngine::Collider* NMMOCKOCHPP; // 0x20
		::UnityEngine::Vector3 NIBGNGICDOO; // 0x28
		::System::Single CMKHPKJNCMO; // 0x34
		::System::Int32 FJCEIDFBJJF; // 0x38
		::UnityEngine::Vector3 LBLKFGGBAKD; // 0x3C
		::System::UInt32 CEIFACBCNKE; // 0x48
		::UnityEngine::Quaternion IOLNLPDFJFL; // 0x4C
		::System::Boolean LFIGBJFDDMK; // 0x5C
		::System::Boolean BEBMMGCLOBC; // 0x5D
		::System::Boolean EHLPHMCLHEO; // 0x5E
		::System::Boolean NLNHJGBKGBE; // 0x5F
		::System::Single NAIGNDMGIPO; // 0x60
		::RPG::Client::LittleGame::FiveDim::PropMoveState KKDFCJEENEA; // 0x64
		::UnityEngine::Vector3 FOMPDLOCKIH; // 0x68
		::UnityEngine::Vector3 MJOLHEDKMGO; // 0x74
		::UnityEngine::Vector3 BJFPDFGHJIG; // 0x80
		::BODIAENCNJK JIHIDCICMOG; // 0x8C
		::RPG::Client::LittleGame::FiveDim::PropMoveState NPDNEEPHEKN; // 0x2BC
		::KLNKLOMDIIC PLCPIEBMBDK; // 0x2C0
		::UnityEngine::Vector3 IECOCNELPAK; // 0x328
		::System::Boolean ACDIDADPNAH; // 0x334
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion PLLHBPIPIGA()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_PLLHBPIPIGA_OFFSET))(this);
		}

		::UnityEngine::Vector3 MIMNCPKKLEK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_MIMNCPKKLEK_OFFSET))(this);
		}

		::UnityEngine::Vector3 LHALEMGAFCD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_LHALEMGAFCD_OFFSET))(this);
		}

		::UnityEngine::Vector3 BNIOHBCKNBF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_BNIOHBCKNBF_OFFSET))(this);
		}

		::UnityEngine::Vector3 JKLCJONONKK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_JKLCJONONKK_OFFSET))(this);
		}

		::System::Void BJEANHMFOOI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NOOHPODHIAA_BJEANHMFOOI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NNPBOGFNKKE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_NNPBOGFNKKE_OFFSET))(this);
		}

		::System::Void GHDNOFAEHFK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NOOHPODHIAA_GHDNOFAEHFK_OFFSET))(this, a1);
		}

		::System::Void BKLGLHDKEAA(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NOOHPODHIAA_BKLGLHDKEAA_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOHPODHIAA_ONRECYCLE_OFFSET))(this);
		}

	};
