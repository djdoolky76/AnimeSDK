#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class IObjPool; }

#define UNITYENGINE_RENDERING_OJBECTPOOLMGR_CCTOR_OFFSET UNITYSDK_OFFSET(0x20577410)
#define UNITYENGINE_RENDERING_OJBECTPOOLMGR_CLEAR_OFFSET UNITYSDK_OFFSET(0x205771D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int OjbectPoolMgr_TypeDefinitionIndex = 36433;

	class OjbectPoolMgr : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IObjPool*>** StaticGet_s_AllPool()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::IObjPool*>**)UnitySDK::FromName("UnityEngine.Rendering", "OjbectPoolMgr")->GetStaticField(0x5AC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OJBECTPOOLMGR_CCTOR_OFFSET))();
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OJBECTPOOLMGR_CLEAR_OFFSET))();
		}

	};
}
