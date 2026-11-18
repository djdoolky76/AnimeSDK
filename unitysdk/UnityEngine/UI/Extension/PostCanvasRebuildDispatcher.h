#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::UI::Extension { class IPostCanvasRebuild; }

#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_ENSUREREGISTERED_OFFSET UNITYSDK_OFFSET(0x1A811330)
#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A8116D0)
#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A811620)
#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x1A811540)
#define UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A811BF0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int PostCanvasRebuildDispatcher_TypeDefinitionIndex = 58437;

	class PostCanvasRebuildDispatcher : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::IPostCanvasRebuild*>** StaticGet__pendings()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::IPostCanvasRebuild*>**)Il2CppClass::FromTypeDefinitionIndex(PostCanvasRebuildDispatcher_TypeDefinitionIndex)->GetStaticField(0x3D1F0);
		}
		static ::System::Boolean* StaticGet__registered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PostCanvasRebuildDispatcher_TypeDefinitionIndex)->GetStaticField(0xDF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_ENSUREREGISTERED_OFFSET))();
		}

		static ::System::Void Schedule(::UnityEngine::UI::Extension::IPostCanvasRebuild* item)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::IPostCanvasRebuild*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_SCHEDULE_OFFSET))(item);
		}

		static ::System::Void Remove(::UnityEngine::UI::Extension::IPostCanvasRebuild* item)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::IPostCanvasRebuild*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_REMOVE_OFFSET))(item);
		}

		static ::System::Void Flush()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_POSTCANVASREBUILDDISPATCHER_FLUSH_OFFSET))();
		}
	};
}
