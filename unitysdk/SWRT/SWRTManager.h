#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class SWRTAsset;
namespace SWRT { class SWRT; }
namespace SWRT { class SWRTManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SWRT_SWRTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC562C0)
#define SWRT_SWRTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC56280)
#define SWRT_SWRTMANAGER_GETACTIVEASSET_OFFSET UNITYSDK_OFFSET(0x1CC44BC0)
#define SWRT_SWRTMANAGER_GETACTIVEBINDER_OFFSET UNITYSDK_OFFSET(0x1CC56200)
#define SWRT_SWRTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CC561D0)
#define SWRT_SWRTMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1CC56020)
#define SWRT_SWRTMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1CC56160)

namespace SWRT
{
	inline static constexpr unsigned int SWRTManager_TypeDefinitionIndex = 37512;

	class SWRTManager : public ::System::Object
	{
	public:
		::SWRTAsset* OverrideAsset; // 0x10
		::System::Collections::Generic::List_1<::SWRT::SWRT*>* _Binders; // 0x18
		static ::SWRT::SWRTManager** StaticGet_s_Instance()
		{
			return (::SWRT::SWRTManager**)UnitySDK::FromName("SWRT", "SWRTManager")->GetStaticField(0x32700);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_CCTOR_OFFSET))();
		}

		static ::SWRT::SWRTManager* get_Instance()
		{
			return ((::SWRT::SWRTManager*(*)())((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Register(::SWRT::SWRT* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::SWRT*))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_REGISTER_OFFSET))(this, a1);
		}

		::System::Void Unregister(::SWRT::SWRT* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::SWRT*))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_UNREGISTER_OFFSET))(this, a1);
		}

		::SWRT::SWRT* GetActiveBinder()
		{
			return ((::SWRT::SWRT*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_GETACTIVEBINDER_OFFSET))(this);
		}

		::SWRTAsset* GetActiveAsset()
		{
			return ((::SWRTAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRTMANAGER_GETACTIVEASSET_OFFSET))(this);
		}

	};
}
