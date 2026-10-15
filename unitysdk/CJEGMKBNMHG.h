#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoTravelShipController; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CJEGMKBNMHG_CTOR_OFFSET UNITYSDK_OFFSET(0xD2020A0)
#define CJEGMKBNMHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD2020B0)
#define CJEGMKBNMHG_KMDKMOJCOFA_OFFSET UNITYSDK_OFFSET(0xD202240)
#define CJEGMKBNMHG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xD202100)
#define CJEGMKBNMHG_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xD202330)

inline static constexpr unsigned int CJEGMKBNMHG_TypeDefinitionIndex = 68785;

	class CJEGMKBNMHG : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* APPFIKHLIOD; // 0x10
		::RPG::Client::MonoTravelShipController* CPIIOIPAAKK; // 0x18
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x20
		::System::Single PBKJKLAHGBP; // 0x28
		::System::Single BCGHNNBGMCM; // 0x2C
		::System::Single IPOENGFPLJE; // 0x30
		::System::Single GECFMEFOBLA; // 0x34
		::System::Single NMPFBLPKLBD; // 0x38
		::System::Single HHKHNECCBOF; // 0x3C
		::System::Void _ctor(::UnityEngine::Transform* a1, ::RPG::Client::MonoTravelShipController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::MonoTravelShipController*))((::PBYTE)hIl2Cpp + CJEGMKBNMHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEGMKBNMHG_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CJEGMKBNMHG_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void PKADDEPKJFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEGMKBNMHG_PKADDEPKJFN_OFFSET))(this);
		}

		::System::Void KMDKMOJCOFA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJEGMKBNMHG_KMDKMOJCOFA_OFFSET))(this, a1);
		}

	};
