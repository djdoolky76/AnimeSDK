#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriAtomExAuxIn_Config.h"
#include "unitysdk/System/Nullable_1.h"
namespace CriWare { class CriAudioReadStream; }
namespace System { class Object; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_CREATE_OFFSET UNITYSDK_OFFSET(0x1752BF90)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_DESTROY_OFFSET UNITYSDK_OFFSET(0x1752C190)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x1752C5C0)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETBUSSENDLEVELBYNAME_OFFSET UNITYSDK_OFFSET(0x1752C940)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETFORMAT_OFFSET UNITYSDK_OFFSET(0x1752C4A0)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETFREQUENCYRATIO_OFFSET UNITYSDK_OFFSET(0x1752C800)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETINPUTREADSTREAM_OFFSET UNITYSDK_OFFSET(0x1752CA90)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1752C6E0)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_START_OFFSET UNITYSDK_OFFSET(0x1752C290)
#define CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_STOP_OFFSET UNITYSDK_OFFSET(0x1752C390)
#define CRIWARE_CRIATOMEXAUXIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1752BE20)
#define CRIWARE_CRIATOMEXAUXIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1752C090)
#define CRIWARE_CRIATOMEXAUXIN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1752C020)
#define CRIWARE_CRIATOMEXAUXIN_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x1752C530)
#define CRIWARE_CRIATOMEXAUXIN_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1752C890)
#define CRIWARE_CRIATOMEXAUXIN_SETFORMAT_OFFSET UNITYSDK_OFFSET(0x1752C410)
#define CRIWARE_CRIATOMEXAUXIN_SETFREQUENCYRATIO_OFFSET UNITYSDK_OFFSET(0x1752C770)
#define CRIWARE_CRIATOMEXAUXIN_SETINPUTREADSTREAM_OFFSET UNITYSDK_OFFSET(0x1752C9F0)
#define CRIWARE_CRIATOMEXAUXIN_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1752C650)
#define CRIWARE_CRIATOMEXAUXIN_START_OFFSET UNITYSDK_OFFSET(0x1752C210)
#define CRIWARE_CRIATOMEXAUXIN_STOP_OFFSET UNITYSDK_OFFSET(0x1752C310)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAuxIn_TypeDefinitionIndex = 41014;

	class CriAtomExAuxIn : public ::CriWare::CriDisposable
	{
	public:
		::CriWare::CriAudioReadStream* inputReadStream; // 0x20
		::System::IntPtr handle; // 0x28
		// static const ::System::String* errorInvalidHandle; // 0x0
		::System::Void _ctor(::System::Nullable_1<::System::Object*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_DISPOSE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_STOP_OFFSET))(this);
		}

		::System::Void SetFormat(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETFORMAT_OFFSET))(this, a1, a2);
		}

		::System::Void GetFormat(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_GETFORMAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetVolume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetFrequencyRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETFREQUENCYRATIO_OFFSET))(this, a1);
		}

		::System::Void SetBusSendLevel(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETBUSSENDLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void SetInputReadStream(::CriWare::CriAudioReadStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAudioReadStream*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_SETINPUTREADSTREAM_OFFSET))(this, a1);
		}

		static ::System::IntPtr criAtomAuxIn_Create(::CriWare::CriAtomExAuxIn_Config a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExAuxIn_Config, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomAuxIn_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomAuxIn_Start(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_START_OFFSET))(a1);
		}

		static ::System::Void criAtomAuxIn_Stop(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_STOP_OFFSET))(a1);
		}

		static ::System::Void criAtomAuxIn_SetVolume(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomAuxIn_SetFrequencyRatio(::System::IntPtr a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETFREQUENCYRATIO_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomAuxIn_SetBusSendLevelByName(::System::IntPtr a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETBUSSENDLEVELBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomAuxIn_SetFormat(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETFORMAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomAuxIn_GetFormat(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_GETFORMAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomAuxIn_SetInputReadStream(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXAUXIN_CRIATOMAUXIN_SETINPUTREADSTREAM_OFFSET))(a1, a2, a3);
		}

	};
}
