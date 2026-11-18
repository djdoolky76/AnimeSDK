#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

class NapGradient;
namespace MoleMole::Config { class ConfigShaderCustomBase; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_ABIGNONBCCI_OFFSET UNITYSDK_OFFSET(0x1CD91380)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_CGKCIOONMCG_OFFSET UNITYSDK_OFFSET(0x1CD91340)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_CJBDHFMKEKC_OFFSET UNITYSDK_OFFSET(0x1CD90B80)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_CJIDLIAFPPO_OFFSET UNITYSDK_OFFSET(0x1CD909D0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_CODDAPJPABL_OFFSET UNITYSDK_OFFSET(0x1CD90AD0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_DMOHIBBPHFD_OFFSET UNITYSDK_OFFSET(0x1CD90A90)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_JGHLOCMLFJN_OFFSET UNITYSDK_OFFSET(0x1CD91270)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_KMAEPLGLPCP_OFFSET UNITYSDK_OFFSET(0x1CD90E70)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_LMGDJDEKMAH_OFFSET UNITYSDK_OFFSET(0x1CD90A40)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_NNEEHHFBIMF_OFFSET UNITYSDK_OFFSET(0x1CD90D40)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_PAICCELEJLP_OFFSET UNITYSDK_OFFSET(0x1CD90FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_PFFHIIPJLNK_OFFSET UNITYSDK_OFFSET(0x1CD910F0)
#define MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD90B10)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESShaderCustomBehavior_TypeDefinitionIndex = 71008;

	class ESShaderCustomBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* SHADER_CUSTOM_ASSET_FOLDER_PATH; // 0x0
		// static const ::System::String* SHADER_CUSTOM_TEMP_SELECT_SPLIT_CHAR; // 0x0
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		::System::String* _tempSelect; // 0x58
		::System::Int32 priority; // 0x60
		::System::Boolean ignoreWorldTimescale; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigShaderCustomBase* CJIDLIAFPPO(::System::String* BJMNGDLEBEN, ::System::String* JIGIKDEFPOD, ::System::String* PBBCFFHLEDJ, ::System::String* KAOJHKOKJEL)
		{
			return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_CJIDLIAFPPO_OFFSET))(this, BJMNGDLEBEN, JIGIKDEFPOD, PBBCFFHLEDJ, KAOJHKOKJEL);
		}

		::MoleMole::Config::ConfigShaderCustomBase* LMGDJDEKMAH(::System::String* MCOHLHMKLIP)
		{
			return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_LMGDJDEKMAH_OFFSET))(this, MCOHLHMKLIP);
		}

		::MoleMole::Config::ShaderCustomType DMOHIBBPHFD()
		{
			return ((::MoleMole::Config::ShaderCustomType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_DMOHIBBPHFD_OFFSET))(this);
		}

		::System::String* CODDAPJPABL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_CODDAPJPABL_OFFSET))(this);
		}

		::System::Void CJBDHFMKEKC(::System::String* BJMNGDLEBEN, ::System::String* JIGIKDEFPOD, ::System::String* PBBCFFHLEDJ, ::System::String* KAOJHKOKJEL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_CJBDHFMKEKC_OFFSET))(this, BJMNGDLEBEN, JIGIKDEFPOD, PBBCFFHLEDJ, KAOJHKOKJEL);
		}

		::MoleMole::EffectSimulate::FloatKeyframeCurve* NNEEHHFBIMF(::UnityEngine::AnimationCurve* FAJHPKBELMF)
		{
			return ((::MoleMole::EffectSimulate::FloatKeyframeCurve*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_NNEEHHFBIMF_OFFSET))(this, FAJHPKBELMF);
		}

		::MoleMole::EffectSimulate::ColorKeyframeCurve* KMAEPLGLPCP(::NapGradient* FAJHPKBELMF)
		{
			return ((::MoleMole::EffectSimulate::ColorKeyframeCurve*(*)(::PVOID, ::NapGradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_KMAEPLGLPCP_OFFSET))(this, FAJHPKBELMF);
		}

		::UnityEngine::AnimationCurve* PAICCELEJLP(::MoleMole::EffectSimulate::FloatKeyframeCurve* FAJHPKBELMF)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::EffectSimulate::FloatKeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_PAICCELEJLP_OFFSET))(this, FAJHPKBELMF);
		}

		::NapGradient* PFFHIIPJLNK(::MoleMole::EffectSimulate::ColorKeyframeCurve* FAJHPKBELMF)
		{
			return ((::NapGradient*(*)(::PVOID, ::MoleMole::EffectSimulate::ColorKeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_PFFHIIPJLNK_OFFSET))(this, FAJHPKBELMF);
		}

		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* JGHLOCMLFJN()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_JGHLOCMLFJN_OFFSET))();
		}

		::System::Void CGKCIOONMCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_CGKCIOONMCG_OFFSET))(this);
		}

		::System::Void ABIGNONBCCI(::System::String* MCOHLHMKLIP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESSHADERCUSTOMBEHAVIOR_ABIGNONBCCI_OFFSET))(this, MCOHLHMKLIP);
		}
	};
}
