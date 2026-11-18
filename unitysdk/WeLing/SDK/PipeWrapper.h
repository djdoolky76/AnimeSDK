#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WeLing/SDK/GyroType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace WeLing::SDK { class PipeWrapper_OnReceiveData; }
namespace WeLing::SDK { class PipeWrapper_OnSensorCallbackFun; }

#define WELING_SDK_PIPEWRAPPER_INITGYRO_OFFSET UNITYSDK_OFFSET(0x1D3998C0)
#define WELING_SDK_PIPEWRAPPER_INITPIPE_OFFSET UNITYSDK_OFFSET(0x1D3997F0)
#define WELING_SDK_PIPEWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x1D399640)
#define WELING_SDK_PIPEWRAPPER_ONSENSORIMP_OFFSET UNITYSDK_OFFSET(0x1D399400)
#define WELING_SDK_PIPEWRAPPER_SENDDATASTRING_OFFSET UNITYSDK_OFFSET(0x1D399A20)
#define WELING_SDK_PIPEWRAPPER_SENDDATATOPIPE_OFFSET UNITYSDK_OFFSET(0x1D399990)
#define WELING_SDK_PIPEWRAPPER_SENDDATA_OFFSET UNITYSDK_OFFSET(0x1D3996D0)
#define WELING_SDK_PIPEWRAPPER_SETONSENSORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D399760)
#define WELING_SDK_PIPEWRAPPER_SIMPLECALLBACKIMP_OFFSET UNITYSDK_OFFSET(0x1D3994C0)
#define WELING_SDK_PIPEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D399B80)

namespace WeLing::SDK
{
	inline static constexpr unsigned int PipeWrapper_TypeDefinitionIndex = 18795;

	class PipeWrapper : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_OnReceiveDataEvent()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PipeWrapper_TypeDefinitionIndex)->GetStaticField(0xAB40);
		}
		static ::System::Action_2<::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*>** StaticGet_OnSensorEvent()
		{
			return (::System::Action_2<::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(PipeWrapper_TypeDefinitionIndex)->GetStaticField(0xAB48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean Init(::WeLing::SDK::PipeWrapper_OnReceiveData* cb)
		{
			return ((::System::Boolean(*)(::WeLing::SDK::PipeWrapper_OnReceiveData*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_INIT_OFFSET))(cb);
		}

		static ::System::Boolean SendData(::Il2CppArray<::System::Byte>* data, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SENDDATA_OFFSET))(data, size);
		}

		static ::System::Boolean SetOnSensorCallback(::WeLing::SDK::PipeWrapper_OnSensorCallbackFun* onRotation)
		{
			return ((::System::Boolean(*)(::WeLing::SDK::PipeWrapper_OnSensorCallbackFun*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SETONSENSORCALLBACK_OFFSET))(onRotation);
		}

		static ::System::Void OnSensorImp(::System::Int32& type, ::System::IntPtr data, ::System::Int32& len)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORIMP_OFFSET))(type, data, len);
		}

		static ::System::Void SimpleCallBackImp(::System::IntPtr data, ::System::Int32& size)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SIMPLECALLBACKIMP_OFFSET))(data, size);
		}

		static ::System::Boolean InitPipe()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_INITPIPE_OFFSET))();
		}

		static ::System::Boolean InitGyro()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_INITGYRO_OFFSET))();
		}

		static ::System::Boolean SendDataToPipe(::Il2CppArray<::System::Byte>* data, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SENDDATATOPIPE_OFFSET))(data, size);
		}

		static ::System::Boolean SendDataString(::System::String* dataString)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_SENDDATASTRING_OFFSET))(dataString);
		}
	};
}
