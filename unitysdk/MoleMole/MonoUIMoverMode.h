#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJMBEDJFIDO.h"
#include "unitysdk/KGFKCKIFDHG.h"
#include "unitysdk/OAKMEJLHJLI.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class EGCJOPJKNLD;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class MonoUIMover; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIMOVERMODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x10D47110)
#define MOLEMOLE_MONOUIMOVERMODE_CLEARHANDLER_OFFSET UNITYSDK_OFFSET(0x10D47530)
#define MOLEMOLE_MONOUIMOVERMODE_DPBEOJHDBBN_OFFSET UNITYSDK_OFFSET(0x10D472A0)
#define MOLEMOLE_MONOUIMOVERMODE_FFIPAMHAFHA_OFFSET UNITYSDK_OFFSET(0x10D478A0)
#define MOLEMOLE_MONOUIMOVERMODE_HGMODHHGGPM_OFFSET UNITYSDK_OFFSET(0x10D47600)
#define MOLEMOLE_MONOUIMOVERMODE_IHDIEFLNNIL_OFFSET UNITYSDK_OFFSET(0x10D47830)
#define MOLEMOLE_MONOUIMOVERMODE_KLEEFMLHPMC_OFFSET UNITYSDK_OFFSET(0x10D47A10)
#define MOLEMOLE_MONOUIMOVERMODE_NAPNFFHHMML_OFFSET UNITYSDK_OFFSET(0x10D47D80)
#define MOLEMOLE_MONOUIMOVERMODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D472F0)
#define MOLEMOLE_MONOUIMOVERMODE_SETMOVETYPE_OFFSET UNITYSDK_OFFSET(0x10D47410)
#define MOLEMOLE_MONOUIMOVERMODE_SETPINGPONGTYPE_OFFSET UNITYSDK_OFFSET(0x10D474A0)
#define MOLEMOLE_MONOUIMOVERMODE_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x10D47350)
#define MOLEMOLE_MONOUIMOVERMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D47590)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIMoverMode_TypeDefinitionIndex = 53426;

	class MonoUIMoverMode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* moveArea; // 0x18
		::OAKMEJLHJLI moveMode; // 0x20
		::KGFKCKIFDHG modePingPongDirection; // 0x24
		::JJMBEDJFIDO pingPongTurn; // 0x28
		::System::Single turnTime; // 0x2C
		::UnityEngine::RectTransform* replaceReversalScaleTarget; // 0x30
		::UnityEngine::RectTransform* OBLEMFDIIOD; // 0x38
		::MoleMole::MonoUIMover* OLPJGFNAIGL; // 0x40
		::System::Boolean KNGHAMCPHFH; // 0x48
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 MMKJMPHDINH; // 0x4C
		::UnityEngine::Vector2 KFBLBHDFCEE; // 0x54
		::System::Byte _padding1[0x4];
		::EGCJOPJKNLD* GCMKLLOCKFN; // 0x60
		::DG::Tweening::Tween* ENPLEGMAEEN; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetMoveType(::OAKMEJLHJLI NOFLCIGICPE)
		{
			return ((::System::Void(*)(::PVOID, ::OAKMEJLHJLI))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_SETMOVETYPE_OFFSET))(this, NOFLCIGICPE);
		}

		::System::Void SetPingPongType(::KGFKCKIFDHG NICANIKFDGF)
		{
			return ((::System::Void(*)(::PVOID, ::KGFKCKIFDHG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_SETPINGPONGTYPE_OFFSET))(this, NICANIKFDGF);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_STOPMOVE_OFFSET))(this);
		}

		::System::Void ClearHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_CLEARHANDLER_OFFSET))(this);
		}

		::System::Void DPBEOJHDBBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_DPBEOJHDBBN_OFFSET))(this);
		}

		::System::Void IHDIEFLNNIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_IHDIEFLNNIL_OFFSET))(this);
		}

		::System::Void FFIPAMHAFHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_FFIPAMHAFHA_OFFSET))(this);
		}

		::System::Void KLEEFMLHPMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_KLEEFMLHPMC_OFFSET))(this);
		}

		::System::Void NAPNFFHHMML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_NAPNFFHHMML_OFFSET))(this);
		}

		::System::Void HGMODHHGGPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_HGMODHHGGPM_OFFSET))(this);
		}
	};
}
