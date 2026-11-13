#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MonsterStanceBarStyle.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/System/Nullable_1.h"
class MNNJNNIHOJN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CDKKPFHIFLA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x173B5810)
#define CDKKPFHIFLA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x173B58E0)
#define CDKKPFHIFLA_CTOR_OFFSET UNITYSDK_OFFSET(0x173B5980)
#define CDKKPFHIFLA_DJFLELEAOBK_OFFSET UNITYSDK_OFFSET(0x173B4690)
#define CDKKPFHIFLA_EFPCLFPLCCN_OFFSET UNITYSDK_OFFSET(0x173B4E30)
#define CDKKPFHIFLA_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0x173B4B70)
#define CDKKPFHIFLA_FMACKGCGJJB_OFFSET UNITYSDK_OFFSET(0x173B5510)
#define CDKKPFHIFLA_GIIDDCGGNHI_OFFSET UNITYSDK_OFFSET(0x173B5000)
#define CDKKPFHIFLA_HADCKFDBNPG_OFFSET UNITYSDK_OFFSET(0x173B5720)
#define CDKKPFHIFLA_IGKOIPNBFBN_OFFSET UNITYSDK_OFFSET(0x173B5150)
#define CDKKPFHIFLA_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x173B45B0)
#define CDKKPFHIFLA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x173B4510)
#define CDKKPFHIFLA_ONRETURN_OFFSET UNITYSDK_OFFSET(0x173B4560)
#define CDKKPFHIFLA__ONBIND_OFFSET UNITYSDK_OFFSET(0x173B4CA0)
#define CDKKPFHIFLA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x173B4BF0)

inline static constexpr unsigned int CDKKPFHIFLA_TypeDefinitionIndex = 74055;

	class CDKKPFHIFLA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* NANNKBPABNE; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::GameObject* GCBKJFLEHCJ; // 0x70
		::System::String* FPEIDBPEPDP; // 0x78
		::UnityEngine::GameObject* HMKJOJGNMCO; // 0x80
		::UnityEngine::GameObject* GIOILAMAMDP; // 0x88
		::UnityEngine::GameObject* GHKJCIMMOOJ; // 0x90
		::System::Boolean HAKHCANCCKK; // 0x98
		::System::Boolean PKCJICMHPDG; // 0x99
		// static const ::System::String* BEEECPONGEK; // 0x0
		// static const ::System::String* ACAHCLNBFNM; // 0x0
		// static const ::System::String* PENNLJNIACI; // 0x0
		// static const ::System::String* DEEACDBACHB; // 0x0
		// static const ::System::String* CGNDHBLOIKM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_ONRETURN_OFFSET))(this);
		}

		::System::Void JDAGFHEPMHF(::System::String* a1, ::System::Boolean a2, ::System::Nullable_1<::RPG::GameCore::MonsterStanceBarStyle> a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Nullable_1<::RPG::GameCore::MonsterStanceBarStyle>))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_JDAGFHEPMHF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CDKKPFHIFLA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKKPFHIFLA__ONBIND_OFFSET))(this);
		}

		::System::Void EFPCLFPLCCN(::MNNJNNIHOJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNNJNNIHOJN*))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_EFPCLFPLCCN_OFFSET))(this, a1);
		}

		::System::Void EGNMELNENAC(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_EGNMELNENAC_OFFSET))(this, a1, a2);
		}

		::System::Void IGKOIPNBFBN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_IGKOIPNBFBN_OFFSET))(this, a1);
		}

		::System::Boolean FMACKGCGJJB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_FMACKGCGJJB_OFFSET))(this);
		}

		::System::Void DJFLELEAOBK(::RPG::GameCore::MonsterStanceBarStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterStanceBarStyle))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_DJFLELEAOBK_OFFSET))(this, a1);
		}

		::System::Boolean GIIDDCGGNHI(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_GIIDDCGGNHI_OFFSET))(this, a1);
		}

		::System::Void HADCKFDBNPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_HADCKFDBNPG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
