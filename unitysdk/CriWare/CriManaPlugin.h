#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/CodecType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"
namespace CriWare::CriMana { class MovieInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }

#define CRIWARE_CRIMANAPLUGIN_ADD_ONBEFOREFINALIZE_OFFSET UNITYSDK_OFFSET(0x17573DD0)
#define CRIWARE_CRIMANAPLUGIN_ADD_ONBEFOREINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17573B50)
#define CRIWARE_CRIMANAPLUGIN_ADD_ONFINALIZED_OFFSET UNITYSDK_OFFSET(0x17573F10)
#define CRIWARE_CRIMANAPLUGIN_ADD_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x17573C90)
#define CRIWARE_CRIMANAPLUGIN_ANALYZEMOVIEHEADER_OFFSET UNITYSDK_OFFSET(0x17576530)
#define CRIWARE_CRIMANAPLUGIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x17576950)
#define CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_ISLEGACYDECODERUSED_PC_OFFSET UNITYSDK_OFFSET(0x17575510)
#define CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_USELEGACYDECODER_PC_OFFSET UNITYSDK_OFFSET(0x175753F0)
#define CRIWARE_CRIMANAPLUGIN_CRIMANA_ISSTREAMERMANAGERUSED_OFFSET UNITYSDK_OFFSET(0x175761F0)
#define CRIWARE_CRIMANAPLUGIN_CRIMANA_USESTREAMERMANAGER_OFFSET UNITYSDK_OFFSET(0x175760D0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE2FD61C09_OFFSET UNITYSDK_OFFSET(0x175764B0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE62D83A19_OFFSET UNITYSDK_OFFSET(0x17576310)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE63FB5F99_OFFSET UNITYSDK_OFFSET(0x17574190)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE7AC3BD3F_OFFSET UNITYSDK_OFFSET(0x17575D00)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE7D957BD9_OFFSET UNITYSDK_OFFSET(0x17575D80)
#define CRIWARE_CRIMANAPLUGIN_CRIWAREA366939A_OFFSET UNITYSDK_OFFSET(0x1756F550)
#define CRIWARE_CRIMANAPLUGIN_CRIWAREB42EAA2D_OFFSET UNITYSDK_OFFSET(0x17575C80)
#define CRIWARE_CRIMANAPLUGIN_CRIWAREB445CE28_OFFSET UNITYSDK_OFFSET(0x17576430)
#define CRIWARE_CRIMANAPLUGIN_CRIWAREB8BBA02A_OFFSET UNITYSDK_OFFSET(0x17576580)
#define CRIWARE_CRIMANAPLUGIN_CRIWAREC42BE465_OFFSET UNITYSDK_OFFSET(0x175768C0)
#define CRIWARE_CRIMANAPLUGIN_CRIWAREE22F4332_OFFSET UNITYSDK_OFFSET(0x175752D0)
#define CRIWARE_CRIMANAPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x17576940)
#define CRIWARE_CRIMANAPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x17575930)
#define CRIWARE_CRIMANAPLUGIN_GETAV1EXPANSIONCLASS_OFFSET UNITYSDK_OFFSET(0x17574DA0)
#define CRIWARE_CRIMANAPLUGIN_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET UNITYSDK_OFFSET(0x17562470)
#define CRIWARE_CRIMANAPLUGIN_GETVP9EXPANSIONCLASS_OFFSET UNITYSDK_OFFSET(0x175745A0)
#define CRIWARE_CRIMANAPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x17573AE0)
#define CRIWARE_CRIMANAPLUGIN_GET_ISMULTITHREADEDRENDERINGENABLED_OFFSET UNITYSDK_OFFSET(0x17573B10)
#define CRIWARE_CRIMANAPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x175755B0)
#define CRIWARE_CRIMANAPLUGIN_ISAV1CODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x17574EE0)
#define CRIWARE_CRIMANAPLUGIN_ISCODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x17575E00)
#define CRIWARE_CRIMANAPLUGIN_ISH264CODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x17576000)
#define CRIWARE_CRIMANAPLUGIN_ISLEGACYDECODERUSED_PC_OFFSET UNITYSDK_OFFSET(0x17575470)
#define CRIWARE_CRIMANAPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x17562E50)
#define CRIWARE_CRIMANAPLUGIN_ISSTREAMERMANAGERUSED_OFFSET UNITYSDK_OFFSET(0x17576150)
#define CRIWARE_CRIMANAPLUGIN_ISVP9CODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x175746E0)
#define CRIWARE_CRIMANAPLUGIN_LOCK_OFFSET UNITYSDK_OFFSET(0x17576270)
#define CRIWARE_CRIMANAPLUGIN_REMOVE_ONBEFOREFINALIZE_OFFSET UNITYSDK_OFFSET(0x17573E70)
#define CRIWARE_CRIMANAPLUGIN_REMOVE_ONBEFOREINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17573BF0)
#define CRIWARE_CRIMANAPLUGIN_REMOVE_ONFINALIZED_OFFSET UNITYSDK_OFFSET(0x17573FB0)
#define CRIWARE_CRIMANAPLUGIN_REMOVE_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x17573D30)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x17575590)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET UNITYSDK_OFFSET(0x17575230)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_VITA_OFFSET UNITYSDK_OFFSET(0x17575220)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_WEBGL_OFFSET UNITYSDK_OFFSET(0x175755A0)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x17574050)
#define CRIWARE_CRIMANAPLUGIN_SETDECODETHREADPRIORITYANDROIDEXPERIMENTAL_OFFSET UNITYSDK_OFFSET(0x17576010)
#define CRIWARE_CRIMANAPLUGIN_SETUPAV1_OFFSET UNITYSDK_OFFSET(0x17574A20)
#define CRIWARE_CRIMANAPLUGIN_SETUPVP9_OFFSET UNITYSDK_OFFSET(0x17574220)
#define CRIWARE_CRIMANAPLUGIN_SHOULDSAMPLERED_OFFSET UNITYSDK_OFFSET(0x17576020)
#define CRIWARE_CRIMANAPLUGIN_UNLOCK_OFFSET UNITYSDK_OFFSET(0x17576390)
#define CRIWARE_CRIMANAPLUGIN_USELEGACYDECODER_PC_OFFSET UNITYSDK_OFFSET(0x17575350)
#define CRIWARE_CRIMANAPLUGIN_USESTREAMERMANAGER_OFFSET UNITYSDK_OFFSET(0x17576030)

namespace CriWare
{
	inline static constexpr unsigned int CriManaPlugin_TypeDefinitionIndex = 41100;

	class CriManaPlugin : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_OnFinalized()
		{
			return (::System::Action**)UnitySDK::FromName("CriWare", "CriManaPlugin")->GetStaticField(0x5A8F0);
		}

		static ::System::Action** StaticGet_OnBeforeFinalize()
		{
			return (::System::Action**)UnitySDK::FromName("CriWare", "CriManaPlugin")->GetStaticField(0x5A8F8);
		}

		static ::System::Action** StaticGet_OnBeforeInitialize()
		{
			return (::System::Action**)UnitySDK::FromName("CriWare", "CriManaPlugin")->GetStaticField(0x5A900);
		}

		static ::System::Action** StaticGet_OnInitialized()
		{
			return (::System::Action**)UnitySDK::FromName("CriWare", "CriManaPlugin")->GetStaticField(0x5A908);
		}

		static ::System::Int32* StaticGet_renderingEventOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("CriWare", "CriManaPlugin")->GetStaticField(0x11260);
		}

		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)UnitySDK::FromName("CriWare", "CriManaPlugin")->GetStaticField(0x11264);
		}

		static ::System::Boolean* StaticGet_enabledMultithreadedRendering()
		{
			return (::System::Boolean*)UnitySDK::FromName("CriWare", "CriManaPlugin")->GetStaticField(0x11265);
		}

		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)UnitySDK::FromName("CriWare", "CriManaPlugin")->GetStaticField(0x11268);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Boolean get_isMultithreadedRenderingEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GET_ISMULTITHREADEDRENDERINGENABLED_OFFSET))();
		}

		static ::System::Void add_OnBeforeInitialize(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ADD_ONBEFOREINITIALIZE_OFFSET))(a1);
		}

		static ::System::Void remove_OnBeforeInitialize(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_REMOVE_ONBEFOREINITIALIZE_OFFSET))(a1);
		}

		static ::System::Void add_OnInitialized(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ADD_ONINITIALIZED_OFFSET))(a1);
		}

		static ::System::Void remove_OnInitialized(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_REMOVE_ONINITIALIZED_OFFSET))(a1);
		}

		static ::System::Void add_OnBeforeFinalize(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ADD_ONBEFOREFINALIZE_OFFSET))(a1);
		}

		static ::System::Void remove_OnBeforeFinalize(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_REMOVE_ONBEFOREFINALIZE_OFFSET))(a1);
		}

		static ::System::Void add_OnFinalized(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ADD_ONFINALIZED_OFFSET))(a1);
		}

		static ::System::Void remove_OnFinalized(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_REMOVE_ONFINALIZED_OFFSET))(a1);
		}

		static ::System::Void SetConfigParameters(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetupVp9()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETUPVP9_OFFSET))();
		}

		static ::System::Void SetupAV1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETUPAV1_OFFSET))();
		}

		static ::System::Void SetConfigAdditonalParameters_VITA(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_VITA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetConfigAdditonalParameters_PC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET))(a1);
		}

		static ::System::Void UseLegacyDecoder_PC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_USELEGACYDECODER_PC_OFFSET))(a1);
		}

		static ::System::Boolean IsLegacyDecoderUsed_PC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISLEGACYDECODERUSED_PC_OFFSET))();
		}

		static ::System::Void SetConfigAdditonalParameters_ANDROID(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_ANDROID_OFFSET))(a1, a2);
		}

		static ::System::Void SetConfigAdditonalParameters_WEBGL(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_WEBGL_OFFSET))(a1, a2);
		}

		static ::System::Void InitializeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_INITIALIZELIBRARY_OFFSET))();
		}

		static ::System::Boolean IsLibraryInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISLIBRARYINITIALIZED_OFFSET))();
		}

		static ::System::Void FinalizeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_FINALIZELIBRARY_OFFSET))();
		}

		static ::System::Boolean IsCodecSupported(::CriWare::CriMana::CodecType a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::CodecType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISCODECSUPPORTED_OFFSET))(a1);
		}

		static ::System::Type* GetVp9ExpansionClass()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GETVP9EXPANSIONCLASS_OFFSET))();
		}

		static ::System::Type* GetAV1ExpansionClass()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GETAV1EXPANSIONCLASS_OFFSET))();
		}

		static ::System::Boolean IsAV1CodecSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISAV1CODECSUPPORTED_OFFSET))();
		}

		static ::System::Boolean IsVp9CodecSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISVP9CODECSUPPORTED_OFFSET))();
		}

		static ::System::Boolean IsH264CodecSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISH264CODECSUPPORTED_OFFSET))();
		}

		static ::System::Void SetDecodeThreadPriorityAndroidExperimental(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETDECODETHREADPRIORITYANDROIDEXPERIMENTAL_OFFSET))(a1);
		}

		static ::System::Boolean ShouldSampleRed(::UnityEngine::Rendering::GraphicsDeviceType a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::GraphicsDeviceType, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SHOULDSAMPLERED_OFFSET))(a1, a2);
		}

		static ::System::Void UseStreamerManager(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_USESTREAMERMANAGER_OFFSET))(a1);
		}

		static ::System::Boolean IsStreamerManagerUsed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISSTREAMERMANAGERUSED_OFFSET))();
		}

		static ::System::Void Lock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_LOCK_OFFSET))();
		}

		static ::System::Void Unlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_UNLOCK_OFFSET))();
		}

		static ::System::UInt32 GetPrimeBufferAlignmentSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET))();
		}

		static ::System::Boolean AnalyzeMovieHeader(::System::IntPtr a1, ::CriWare::CriMana::MovieInfo* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ANALYZEMOVIEHEADER_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE63FB5F99(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE63FB5F99_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CRIWAREB42EAA2D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWAREB42EAA2D_OFFSET))();
		}

		static ::System::Boolean CRIWARE7AC3BD3F()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE7AC3BD3F_OFFSET))();
		}

		static ::System::Void CRIWARE7D957BD9()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE7D957BD9_OFFSET))();
		}

		static ::System::Void CRIWAREA366939A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWAREA366939A_OFFSET))(a1);
		}

		static ::System::Void CRIWARE62D83A19()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE62D83A19_OFFSET))();
		}

		static ::System::Void CRIWAREB445CE28()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWAREB445CE28_OFFSET))();
		}

		static ::System::UInt32 CRIWARE2FD61C09()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE2FD61C09_OFFSET))();
		}

		static ::System::Void criMana_UseStreamerManager(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANA_USESTREAMERMANAGER_OFFSET))(a1);
		}

		static ::System::Boolean criMana_IsStreamerManagerUsed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANA_ISSTREAMERMANAGERUSED_OFFSET))();
		}

		static ::System::Boolean CRIWAREB8BBA02A(::System::IntPtr a1, ::CriWare::CriMana::MovieInfo* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWAREB8BBA02A_OFFSET))(a1, a2);
		}

		static ::System::UInt32 CRIWAREC42BE465()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWAREC42BE465_OFFSET))();
		}

		static ::System::Void criManaUnity_UseLegacyDecoder_PC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_USELEGACYDECODER_PC_OFFSET))(a1);
		}

		static ::System::Boolean criManaUnity_IsLegacyDecoderUsed_PC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_ISLEGACYDECODERUSED_PC_OFFSET))();
		}

		static ::System::Void CRIWAREE22F4332(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWAREE22F4332_OFFSET))(a1);
		}

	};
}
