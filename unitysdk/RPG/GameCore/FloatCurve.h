#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/WrapMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class FloatCurveKeyframe; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_GAMECORE_FLOATCURVE_ANIFKJCALAJ_OFFSET UNITYSDK_OFFSET(0x1D6E4740)
#define RPG_GAMECORE_FLOATCURVE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D6E4220)
#define RPG_GAMECORE_FLOATCURVE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1D6E4780)
#define RPG_GAMECORE_FLOATCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3E90)
#define RPG_GAMECORE_FLOATCURVE_EPKOPMFFAOA_OFFSET UNITYSDK_OFFSET(0x1D6E44B0)
#define RPG_GAMECORE_FLOATCURVE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D6E3EA0)
#define RPG_GAMECORE_FLOATCURVE_GET_CACHEDANIMCURVE_OFFSET UNITYSDK_OFFSET(0x1D6E4280)
#define RPG_GAMECORE_FLOATCURVE_HLLPFDHEDDO_OFFSET UNITYSDK_OFFSET(0x1D6E42D0)
#define RPG_GAMECORE_FLOATCURVE_LCCLFNNGFFO_OFFSET UNITYSDK_OFFSET(0x1D6E4310)
#define RPG_GAMECORE_FLOATCURVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CD2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatCurve_TypeDefinitionIndex = 16337;

	class FloatCurve : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FloatCurveKeyframe*>* Keys; // 0x10
		::RPG::GameCore::WrapMode PreWrapMode; // 0x18
		::RPG::GameCore::WrapMode PostWrapMode; // 0x1C
		::UnityEngine::AnimationCurve* _CachedAnimCurve; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloatCurve* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_EQUALS_OFFSET))(this, a1);
		}

		static ::UnityEngine::AnimationCurve* BBNJCKPKPDN(::RPG::GameCore::FloatCurve* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_BBNJCKPKPDN_OFFSET))(a1);
		}

		::UnityEngine::AnimationCurve* HLLPFDHEDDO()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_HLLPFDHEDDO_OFFSET))(this);
		}

		::System::Void LCCLFNNGFFO(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_LCCLFNNGFFO_OFFSET))(this, a1);
		}

		::System::Void EPKOPMFFAOA(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_EPKOPMFFAOA_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FloatCurve* BPLPBPMEODA(::UnityEngine::AnimationCurve* a1)
		{
			return ((::RPG::GameCore::FloatCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void ANIFKJCALAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_ANIFKJCALAJ_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_CachedAnimCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_GET_CACHEDANIMCURVE_OFFSET))(this);
		}

	};
}
