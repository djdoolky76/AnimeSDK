#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xD7A7E90)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD7A8AE0)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7A84B0)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_EFPBCKGBFBG_OFFSET UNITYSDK_OFFSET(0xD7A8080)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7A7F20)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_GOLCAPKLCDB_OFFSET UNITYSDK_OFFSET(0xD7A8000)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_JKHMMKCNMML_OFFSET UNITYSDK_OFFSET(0xD7A81C0)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_JPHPDCBEENO_OFFSET UNITYSDK_OFFSET(0xD7A85F0)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_MPNPPPLPLOA_OFFSET UNITYSDK_OFFSET(0xD7A8760)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7A82C0)

namespace RPG::Client
{
	class MonoEffectFixedCRPPlugin : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::String* SampleCameraAnimPath; // 0x28
		::System::String* CustomRenderMaskEffectUniqueName; // 0x30
		::System::Single SampleTime; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Rendering::CRPVirtualCamera* VirtualCamera; // 0x40
		::UnityEngine::Camera* SampleCamera; // 0x48
		::UnityEngine::MeshRenderer* JHGPEICPMFP; // 0x50
		::UnityEngine::AnimationClip* IDLCPGDHOEO; // 0x58
		// static const ::System::Object DKKOEMPGCDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void JKHMMKCNMML(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_JKHMMKCNMML_OFFSET))(this, a1);
		}

		::System::Void JPHPDCBEENO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_JPHPDCBEENO_OFFSET))(this, a1);
		}

		::System::Void EFPBCKGBFBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_EFPBCKGBFBG_OFFSET))(this);
		}

		::System::Single MPNPPPLPLOA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_MPNPPPLPLOA_OFFSET))(this, a1, a2);
		}

		::System::Void GOLCAPKLCDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_GOLCAPKLCDB_OFFSET))(this);
		}

	};
}
