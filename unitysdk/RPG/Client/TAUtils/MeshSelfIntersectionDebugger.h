#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1904E0)
#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE1904D0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MeshSelfIntersectionDebugger_TypeDefinitionIndex = 73635;

	class MeshSelfIntersectionDebugger : public ::RPG::Client::TAMonoBase
	{
	public:
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* targetRenderers; // 0x18
		::UnityEngine::AnimationClip* overrideClip; // 0x20
		::System::Single overlapThreshold; // 0x28
		::System::Single triClusterMaxAreaSizeThreshold; // 0x2C
		::System::Boolean enableTriClusterMaxAreaSizeThreshold; // 0x30
		::System::Boolean hasResult; // 0x31
		::System::Byte _padding0[0x6];
		::System::String* resultClipName; // 0x38
		::System::Int32 resultFrame; // 0x40
		::System::Single resultTime; // 0x44
		::System::Int32 resultGroupCount; // 0x48
		::System::Single resultSelfIntersectionProjectionArea; // 0x4C
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* BIGHPJHJJGG; // 0x50
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet_NOFFDGKAJEL()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)UnitySDK::FromName("RPG.Client.TAUtils", "MeshSelfIntersectionDebugger")->GetStaticField(0x31C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_CCTOR_OFFSET))();
		}

	};
}
