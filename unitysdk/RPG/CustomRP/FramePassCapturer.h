#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CPPCaptureData.h"
#include "unitysdk/RPG/CustomRP/FramePassCaptureData.h"
#include "unitysdk/RPG/CustomRP/FramePassCapturer_CaptureTarget.h"
#include "unitysdk/RPG/CustomRP/QACaptureData.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_CAPTUREFRAMEANDPARAMS_OFFSET UNITYSDK_OFFSET(0x1DDD9650)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD95D0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD9930)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_CAPTUREDDATA_OFFSET UNITYSDK_OFFSET(0x1DDD95F0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_CPPCAPTUREDDATA_OFFSET UNITYSDK_OFFSET(0x1DDD9640)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_ISCAPTUREENDED_OFFSET UNITYSDK_OFFSET(0x1DDD95E0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_QACAPTUREDDATA_OFFSET UNITYSDK_OFFSET(0x1DDD9610)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_QACAPTUREALL_OFFSET UNITYSDK_OFFSET(0x1DDD96B0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_QACAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0x1DDD9710)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTURECB_OFFSET UNITYSDK_OFFSET(0x1DDD97C0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x1DDD9850)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__STARTCAPTUREFRAMEANDPARAMS_OFFSET UNITYSDK_OFFSET(0x1DDD9760)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer_TypeDefinitionIndex = 38549;

	class FramePassCapturer : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::QACaptureData* StaticGet__qaCaptureData()
		{
			return (::RPG::CustomRP::QACaptureData*)UnitySDK::FromName("RPG.CustomRP", "FramePassCapturer")->GetStaticField(0x27C70);
		}

		static ::RPG::CustomRP::FramePassCaptureData* StaticGet__captureData()
		{
			return (::RPG::CustomRP::FramePassCaptureData*)UnitySDK::FromName("RPG.CustomRP", "FramePassCapturer")->GetStaticField(0x27CA0);
		}

		static ::RPG::CustomRP::CPPCaptureData* StaticGet__cppCaptureData()
		{
			return (::RPG::CustomRP::CPPCaptureData*)UnitySDK::FromName("RPG.CustomRP", "FramePassCapturer")->GetStaticField(0x27CB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_IsCaptureEnded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_ISCAPTUREENDED_OFFSET))();
		}

		static ::RPG::CustomRP::FramePassCaptureData get_CapturedData()
		{
			return ((::RPG::CustomRP::FramePassCaptureData(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_CAPTUREDDATA_OFFSET))();
		}

		static ::RPG::CustomRP::QACaptureData get_QACapturedData()
		{
			return ((::RPG::CustomRP::QACaptureData(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_QACAPTUREDDATA_OFFSET))();
		}

		static ::RPG::CustomRP::CPPCaptureData get_cppCapturedData()
		{
			return ((::RPG::CustomRP::CPPCaptureData(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_CPPCAPTUREDDATA_OFFSET))();
		}

		static ::System::Collections::IEnumerator* CaptureFrameAndParams(::RPG::CustomRP::FramePassCapturer_CaptureTarget a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::CustomRP::FramePassCapturer_CaptureTarget, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_CAPTUREFRAMEANDPARAMS_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::IEnumerator* QACaptureAll(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_QACAPTUREALL_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* QACaptureParam()
		{
			return ((::System::Collections::IEnumerator*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_QACAPTUREPARAM_OFFSET))();
		}

		static ::System::Collections::IEnumerator* _StartCaptureFrameAndParams(::RPG::CustomRP::FramePassCapturer_CaptureTarget a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::CustomRP::FramePassCapturer_CaptureTarget, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__STARTCAPTUREFRAMEANDPARAMS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _CaptureCb(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTURECB_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture2D* _LoadImage(::System::String* a1)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__LOADIMAGE_OFFSET))(a1);
		}

	};
}
