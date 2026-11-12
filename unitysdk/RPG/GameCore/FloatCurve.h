#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/WrapMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class FloatCurveKeyframe; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_GAMECORE_FLOATCURVE_ANIFKJCALAJ_OFFSET UNITYSDK_OFFSET(0x1E8EEE50)
#define RPG_GAMECORE_FLOATCURVE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E8EE930)
#define RPG_GAMECORE_FLOATCURVE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1E8EEE90)
#define RPG_GAMECORE_FLOATCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EE5A0)
#define RPG_GAMECORE_FLOATCURVE_EPKOPMFFAOA_OFFSET UNITYSDK_OFFSET(0x1E8EEBC0)
#define RPG_GAMECORE_FLOATCURVE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8EE5B0)
#define RPG_GAMECORE_FLOATCURVE_GET_CACHEDANIMCURVE_OFFSET UNITYSDK_OFFSET(0x1E8EE990)
#define RPG_GAMECORE_FLOATCURVE_HLLPFDHEDDO_OFFSET UNITYSDK_OFFSET(0x1E8EE9E0)
#define RPG_GAMECORE_FLOATCURVE_LCCLFNNGFFO_OFFSET UNITYSDK_OFFSET(0x1E8EEA20)
#define RPG_GAMECORE_FLOATCURVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8EC9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatCurve_TypeDefinitionIndex = 16500;

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
