#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/Enums/UpdateNotice.h"
#include "unitysdk/DG/Tweening/Plugins/Options/NoOptions.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace UnityEngine { class RectOffset; }

#define DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_CONVERTTOSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1FD80620)
#define DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_EVALUATEANDAPPLY_OFFSET UNITYSDK_OFFSET(0x1FD80A60)
#define DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_GETSPEEDBASEDDURATION_OFFSET UNITYSDK_OFFSET(0x1FD809E0)
#define DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_RESET_OFFSET UNITYSDK_OFFSET(0x1FD80420)
#define DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_SETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1FD80830)
#define DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_SETFROM_OFFSET UNITYSDK_OFFSET(0x1FD80450)
#define DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_SETRELATIVEENDVALUE_OFFSET UNITYSDK_OFFSET(0x1FD806F0)
#define DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD813A0)
#define DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD81380)

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int RectOffsetPlugin_TypeDefinitionIndex = 27988;

	class RectOffsetPlugin
	{
	public:
		static ::UnityEngine::RectOffset** StaticGet__r()
		{
			return (::UnityEngine::RectOffset**)Il2CppClass::FromTypeDefinitionIndex(RectOffsetPlugin_TypeDefinitionIndex)->GetStaticField(0x25460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN__CCTOR_OFFSET))();
		}

		::System::Void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_RESET_OFFSET))(this, t);
		}

		::System::Void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::System::Boolean isRelative)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_SETFROM_OFFSET))(this, t, isRelative);
		}

		::UnityEngine::RectOffset* ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::UnityEngine::RectOffset* value)
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>*, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_CONVERTTOSTARTVALUE_OFFSET))(this, t, value);
		}

		::System::Void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_SETRELATIVEENDVALUE_OFFSET))(this, t);
		}

		::System::Void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>* t)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::DG::Tweening::Plugins::Options::NoOptions>*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_SETCHANGEVALUE_OFFSET))(this, t);
		}

		::System::Single GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::NoOptions options, ::System::Single unitsXSecond, ::UnityEngine::RectOffset* changeValue)
		{
			return ((::System::Single(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::System::Single, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_GETSPEEDBASEDDURATION_OFFSET))(this, options, unitsXSecond, changeValue);
		}

		::System::Void EvaluateAndApply(::DG::Tweening::Plugins::Options::NoOptions options, ::DG::Tweening::Tween* t, ::System::Boolean isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::RectOffset*>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::RectOffset*>* setter, ::System::Single elapsed, ::UnityEngine::RectOffset* startValue, ::UnityEngine::RectOffset* changeValue, ::System::Single duration, ::System::Boolean usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Plugins::Options::NoOptions, ::DG::Tweening::Tween*, ::System::Boolean, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::RectOffset*>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::RectOffset*>*, ::System::Single, ::UnityEngine::RectOffset*, ::UnityEngine::RectOffset*, ::System::Single, ::System::Boolean, ::DG::Tweening::Core::Enums::UpdateNotice))((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_RECTOFFSETPLUGIN_EVALUATEANDAPPLY_OFFSET))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
		}
	};
}
