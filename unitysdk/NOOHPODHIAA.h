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

#define NOOHPODHIAA_BJEANHMFOOI_OFFSET UNITYSDK_OFFSET(0x1E056F90)
#define NOOHPODHIAA_BKLGLHDKEAA_OFFSET UNITYSDK_OFFSET(0x1E0574B0)
#define NOOHPODHIAA_BNIOHBCKNBF_OFFSET UNITYSDK_OFFSET(0x1E056BF0)
#define NOOHPODHIAA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E04D940)
#define NOOHPODHIAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04E030)
#define NOOHPODHIAA_GHDNOFAEHFK_OFFSET UNITYSDK_OFFSET(0x1E057320)
#define NOOHPODHIAA_JKLCJONONKK_OFFSET UNITYSDK_OFFSET(0x1E056D90)
#define NOOHPODHIAA_LHALEMGAFCD_OFFSET UNITYSDK_OFFSET(0x1E056A50)
#define NOOHPODHIAA_MIMNCPKKLEK_OFFSET UNITYSDK_OFFSET(0x1E0568B0)
#define NOOHPODHIAA_NNPBOGFNKKE_OFFSET UNITYSDK_OFFSET(0x1E057110)
#define NOOHPODHIAA_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1E057520)
#define NOOHPODHIAA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1E057580)
#define NOOHPODHIAA_PLLHBPIPIGA_OFFSET UNITYSDK_OFFSET(0x1E056820)

inline static constexpr unsigned int NOOHPODHIAA_TypeDefinitionIndex = 44509;

	class NOOHPODHIAA : public ::System::Object
	{
	public:
		::UnityEngine::Collider* NMMOCKOCHPP; // 0x10
		::RPG::PoolList_1<::UnityEngine::Collider*>* IEFGOLHAPNP; // 0x18
		::RPG::PoolList_1<::UnityEngine::Collider*>* FNLFKIKJLDI; // 0x20
		::UnityEngine::Vector3 NIBGNGICDOO; // 0x28
		::BODIAENCNJK JIHIDCICMOG; // 0x34
		::RPG::Client::LittleGame::FiveDim::PropMoveState NPDNEEPHEKN; // 0x264
		::RPG::Client::LittleGame::FiveDim::PropMoveState KKDFCJEENEA; // 0x268
		::System::Int32 FJCEIDFBJJF; // 0x26C
		::UnityEngine::Vector3 IECOCNELPAK; // 0x270
		::System::Boolean NLNHJGBKGBE; // 0x27C
		::System::Boolean LFIGBJFDDMK; // 0x27D
		::System::Byte _padding0[0x2];
		::System::Single NAIGNDMGIPO; // 0x280
		::UnityEngine::Vector3 FOMPDLOCKIH; // 0x284
		::UnityEngine::Vector3 LBLKFGGBAKD; // 0x290
		::UnityEngine::Vector3 MJOLHEDKMGO; // 0x29C
		::UnityEngine::Quaternion IOLNLPDFJFL; // 0x2A8
		::UnityEngine::Vector3 BJFPDFGHJIG; // 0x2B8
		::System::Boolean BEBMMGCLOBC; // 0x2C4
		::System::Boolean EHLPHMCLHEO; // 0x2C5
		::System::Boolean ACDIDADPNAH; // 0x2C6
		::System::Byte _padding1[0x1];
		::KLNKLOMDIIC PLCPIEBMBDK; // 0x2C8
		::System::Single CMKHPKJNCMO; // 0x330
		::System::UInt32 CEIFACBCNKE; // 0x334
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
