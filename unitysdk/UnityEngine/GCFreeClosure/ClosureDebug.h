#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine::GCFreeClosure { class ClosureDebug; }
namespace UnityEngine::GCFreeClosure { class IDebug; }

#define UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1F3EBD70)
#define UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3EBED0)
#define UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3EBEC0)
#define UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1F3EBD40)

namespace UnityEngine::GCFreeClosure
{
	class ClosureDebug : public ::System::Object
	{
	public:
		::UnityEngine::GCFreeClosure::IDebug* _debug; // 0x10
		static ::UnityEngine::GCFreeClosure::ClosureDebug** StaticGet__Default_k__BackingField()
		{
			return (::UnityEngine::GCFreeClosure::ClosureDebug**)UnitySDK::FromName("UnityEngine.GCFreeClosure", "ClosureDebug")->GetStaticField(0x10CE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_CCTOR_OFFSET))();
		}

		static ::UnityEngine::GCFreeClosure::ClosureDebug* get_Default()
		{
			return ((::UnityEngine::GCFreeClosure::ClosureDebug*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_GET_DEFAULT_OFFSET))();
		}

		static ::System::Void Assert(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_ASSERT_OFFSET))(a1, a2);
		}

	};
}
