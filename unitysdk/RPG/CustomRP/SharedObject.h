#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CUSTOMRP_SHAREDOBJECT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC78BB0)

namespace RPG::CustomRP
{
	class SharedObject : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Light*>** StaticGet_TmpLights()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Light*>**)UnitySDK::FromName("RPG.CustomRP", "SharedObject")->GetStaticField(0x2E2C0);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_TmpRenders()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG.CustomRP", "SharedObject")->GetStaticField(0x2E2C8);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_TmpMats()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)UnitySDK::FromName("RPG.CustomRP", "SharedObject")->GetStaticField(0x2E2D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHAREDOBJECT_CCTOR_OFFSET))();
		}

	};
}
