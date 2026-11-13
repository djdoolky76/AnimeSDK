#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriAtomExOutputAnalyzer_Config.h"
namespace CriWare { class CriAtomExOutputAnalyzer_InternalPcmCaptureCallback; }
namespace CriWare { class CriAtomExOutputAnalyzer_PcmCaptureCallback; }
namespace CriWare { class CriAtomExPlayer; }
namespace System { class Object; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUS_OFFSET UNITYSDK_OFFSET(0x1EC4CD00)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1EC4C9E0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1EC4BBF0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC4DC50)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUSBYNAME_OFFSET UNITYSDK_OFFSET(0x1EC4CF20)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1EC4CC00)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_CREATE_OFFSET UNITYSDK_OFFSET(0x1EC4DB80)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1EC4C960)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUSBYNAME_OFFSET UNITYSDK_OFFSET(0x1EC4CFC0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1EC4CC80)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_EXECUTEQUEUEDPCMCAPTURERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1EC4DA20)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET UNITYSDK_OFFSET(0x1EC4D770)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET UNITYSDK_OFFSET(0x1EC4D3A0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET UNITYSDK_OFFSET(0x1EC4D580)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC4DAB0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4BDF0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUS_OFFSET UNITYSDK_OFFSET(0x1EC4C850)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1EC4C740)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EC4C280)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC4C270)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1EC4DAA0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x1EC4D810)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EC4DB10)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET UNITYSDK_OFFSET(0x1EC4D600)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET UNITYSDK_OFFSET(0x1EC4D060)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET UNITYSDK_OFFSET(0x1EC4D420)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1EC4BDE0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INITIALIZEWITHCONFIG_OFFSET UNITYSDK_OFFSET(0x1EC4BEA0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_SETPCMCAPTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x1EC4D800)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputAnalyzer_TypeDefinitionIndex = 41020;

	class CriAtomExOutputAnalyzer : public ::CriWare::CriDisposable
	{
	public:
		::CriWare::CriAtomExPlayer* player; // 0x20
		::System::String* busName; // 0x28
		::Il2CppArray<::System::Single>* dataL; // 0x30
		::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback* userPcmCaptureCallback; // 0x38
		::Il2CppArray<::System::Single>* dataR; // 0x40
		::System::IntPtr handle; // 0x48
		::System::Int32 numCapturedPcmSamples; // 0x50
		::System::Int32 numBands; // 0x54
		static ::Il2CppArray<::System::Single>** StaticGet_DataR()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("CriWare", "CriAtomExOutputAnalyzer")->GetStaticField(0x5BDC0);
		}

		static ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback** StaticGet_UserPcmCaptureCallback()
		{
			return (::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback**)UnitySDK::FromName("CriWare", "CriAtomExOutputAnalyzer")->GetStaticField(0x5BDC8);
		}

		static ::CriWare::CriAtomExOutputAnalyzer_InternalPcmCaptureCallback** StaticGet_DelegateObject()
		{
			return (::CriWare::CriAtomExOutputAnalyzer_InternalPcmCaptureCallback**)UnitySDK::FromName("CriWare", "CriAtomExOutputAnalyzer")->GetStaticField(0x5BDD0);
		}

		static ::Il2CppArray<::System::Single>** StaticGet_DataL()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("CriWare", "CriAtomExOutputAnalyzer")->GetStaticField(0x5BDD8);
		}

		static ::System::IntPtr* StaticGet_InternalCallbackFunctionPointer()
		{
			return (::System::IntPtr*)UnitySDK::FromName("CriWare", "CriAtomExOutputAnalyzer")->GetStaticField(0x132B0);
		}

		// static const ::System::Object MaximumSpectrumBands; // 0x0
		// static const ::System::Object pcmCapturerNumMaxData; // 0x0
		::System::Void _ctor(::CriWare::CriAtomExOutputAnalyzer_Config a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CCTOR_OFFSET))();
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Boolean AttachExPlayer(::CriWare::CriAtomExPlayer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET))(this, a1);
		}

		::System::Void DetachExPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET))(this);
		}

		::System::Boolean AttachDspBus(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUS_OFFSET))(this, a1);
		}

		::System::Void DetachDspBus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUS_OFFSET))(this);
		}

		::System::Single GetRms(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET))(this, a1);
		}

		::System::Void GetSpectrumLevels(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET))(this, a1);
		}

		::System::Void GetPcmData(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetPcmCaptureCallback(::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_SETPCMCAPTURECALLBACK_OFFSET))(this, a1);
		}

		::System::Void ExecutePcmCaptureCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_OFFSET))(this);
		}

		::System::Void ExecutePcmCaptureCallback_1(::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_FINALIZE_OFFSET))(this);
		}

		::System::Void InitializeWithConfig(::CriWare::CriAtomExOutputAnalyzer_Config a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INITIALIZEWITHCONFIG_OFFSET))(this, a1);
		}

		static ::System::Void Callback(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr criAtomExOutputAnalyzer_Create(::CriWare::CriAtomExOutputAnalyzer_Config a1)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExOutputAnalyzer_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_CREATE_OFFSET))(a1);
		}

		static ::System::Void criAtomExOutputAnalyzer_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomExOutputAnalyzer_AttachExPlayer(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExOutputAnalyzer_DetachExPlayer(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExOutputAnalyzer_AttachDspBusByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUSBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExOutputAnalyzer_DetachDspBusByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUSBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Single criAtomExOutputAnalyzer_GetRms(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET))(a1, a2);
		}

		static ::System::IntPtr criAtomExOutputAnalyzer_GetSpectrumLevels(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExOutputAnalyzer_GetPcmData(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExOutputAnalyzer_ExecuteQueuedPcmCapturerCallbacks(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_EXECUTEQUEUEDPCMCAPTURERCALLBACKS_OFFSET))(a1, a2);
		}

	};
}
