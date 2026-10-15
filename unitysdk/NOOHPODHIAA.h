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

#define NOOHPODHIAA_BJEANHMFOOI_OFFSET UNITYSDK_OFFSET(0x1C976B00)
#define NOOHPODHIAA_BKLGLHDKEAA_OFFSET UNITYSDK_OFFSET(0x1C977030)
#define NOOHPODHIAA_BNIOHBCKNBF_OFFSET UNITYSDK_OFFSET(0x1C976750)
#define NOOHPODHIAA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C96D490)
#define NOOHPODHIAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96DBA0)
#define NOOHPODHIAA_GHDNOFAEHFK_OFFSET UNITYSDK_OFFSET(0x1C976EA0)
#define NOOHPODHIAA_JKLCJONONKK_OFFSET UNITYSDK_OFFSET(0x1C9768F0)
#define NOOHPODHIAA_LHALEMGAFCD_OFFSET UNITYSDK_OFFSET(0x1C9765B0)
#define NOOHPODHIAA_MIMNCPKKLEK_OFFSET UNITYSDK_OFFSET(0x1C976410)
#define NOOHPODHIAA_NNPBOGFNKKE_OFFSET UNITYSDK_OFFSET(0x1C976C90)
#define NOOHPODHIAA_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C9770A0)
#define NOOHPODHIAA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C977100)
#define NOOHPODHIAA_PLLHBPIPIGA_OFFSET UNITYSDK_OFFSET(0x1C976380)

inline static constexpr unsigned int NOOHPODHIAA_TypeDefinitionIndex = 43527;

	class NOOHPODHIAA : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::UnityEngine::Collider*>* FNLFKIKJLDI; // 0x10
		::UnityEngine::Collider* NMMOCKOCHPP; // 0x18
		::RPG::PoolList_1<::UnityEngine::Collider*>* IEFGOLHAPNP; // 0x20
		::System::Boolean ACDIDADPNAH; // 0x28
		::System::Boolean NLNHJGBKGBE; // 0x29
		::System::Byte _padding0[0x2];
		::BODIAENCNJK JIHIDCICMOG; // 0x2C
		::System::Single CMKHPKJNCMO; // 0x25C
		::RPG::Client::LittleGame::FiveDim::PropMoveState NPDNEEPHEKN; // 0x260
		::UnityEngine::Vector3 FOMPDLOCKIH; // 0x264
		::UnityEngine::Quaternion IOLNLPDFJFL; // 0x270
		::UnityEngine::Vector3 LBLKFGGBAKD; // 0x280
		::System::Int32 FJCEIDFBJJF; // 0x28C
		::RPG::Client::LittleGame::FiveDim::PropMoveState KKDFCJEENEA; // 0x290
		::System::Boolean EHLPHMCLHEO; // 0x294
		::System::Boolean BEBMMGCLOBC; // 0x295
		::System::Boolean LFIGBJFDDMK; // 0x296
		::System::Byte _padding1[0x1];
		::UnityEngine::Vector3 BJFPDFGHJIG; // 0x298
		::KLNKLOMDIIC PLCPIEBMBDK; // 0x2A4
		::System::UInt32 CEIFACBCNKE; // 0x30C
		::UnityEngine::Vector3 NIBGNGICDOO; // 0x310
		::System::Single NAIGNDMGIPO; // 0x31C
		::UnityEngine::Vector3 MJOLHEDKMGO; // 0x320
		::UnityEngine::Vector3 IECOCNELPAK; // 0x32C
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
