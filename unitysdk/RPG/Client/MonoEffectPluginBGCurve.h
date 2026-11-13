#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::GameCore { class LevelCurvePointInfo; }
namespace RPG::GameCore { class LittleGameBezierCurveInfo; }
namespace RPG::GameCore { class LittleGameCircleCurveInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1936B8E0)
#define RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1936A7F0)
#define RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_EIBCDACOEMC_OFFSET UNITYSDK_OFFSET(0x1936A900)
#define RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1936A7A0)
#define RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_SETUP_1_OFFSET UNITYSDK_OFFSET(0x1936B4A0)
#define RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_SETUP_2_OFFSET UNITYSDK_OFFSET(0x1936B690)
#define RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_SETUP_OFFSET UNITYSDK_OFFSET(0x1936A830)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginBGCurve_TypeDefinitionIndex = 72003;

	class MonoEffectPluginBGCurve : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* Curve; // 0x28
		::UnityEngine::Transform* StartPoint; // 0x30
		::UnityEngine::Transform* EndPoint; // 0x38
		::System::Single PointScale; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Setup(::RPG::GameCore::LittleGameBezierCurveInfo* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameBezierCurveInfo*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_SETUP_OFFSET))(this, a1, a2);
		}

		::System::Void Setup_1(::RPG::GameCore::LittleGameCircleCurveInfo* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameCircleCurveInfo*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_SETUP_1_OFFSET))(this, a1, a2);
		}

		::System::Void Setup_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_SETUP_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EIBCDACOEMC(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LevelCurvePointInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LevelCurvePointInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBGCURVE_EIBCDACOEMC_OFFSET))(this, a1);
		}

	};
}
