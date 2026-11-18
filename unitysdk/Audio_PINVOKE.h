#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/Audio_PINVOKE_ScePadControllerBusType.h"
#include "unitysdk/Audio_PINVOKE_ScePadControllerType.h"
#include "unitysdk/Audio_PINVOKE_ScePadVibrationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Audio_PINVOKE_GlobalStats.h"
#include "unitysdk/Audio_PINVOKE_ScePadColor.h"
#include "unitysdk/Audio_PINVOKE_ScePadContainerIdInfo.h"
#include "unitysdk/Audio_PINVOKE_ScePadInit3Param.h"
#include "unitysdk/Audio_PINVOKE_ScePadJackState.h"
#include "unitysdk/Audio_PINVOKE_ScePadVibrationParam.h"
#include "unitysdk/Audio_PINVOKE_ScePadVolumeGain.h"

namespace System { class String; }

#define AUDIO_PINVOKE_AKMETER_POLLKWEIGHTEDPOWER_OFFSET UNITYSDK_OFFSET(0x12D12B80)
#define AUDIO_PINVOKE_AKMETER_POLLPEAKPERCHANNEL_OFFSET UNITYSDK_OFFSET(0x12D12A70)
#define AUDIO_PINVOKE_AKMETER_POLLPEAK_OFFSET UNITYSDK_OFFSET(0x12D129F0)
#define AUDIO_PINVOKE_AKMETER_POLLRMS_OFFSET UNITYSDK_OFFSET(0x12D12B00)
#define AUDIO_PINVOKE_AKMETER_REGISTER_OFFSET UNITYSDK_OFFSET(0x12D128F0)
#define AUDIO_PINVOKE_AKMETER_RESET_OFFSET UNITYSDK_OFFSET(0x12D12C00)
#define AUDIO_PINVOKE_AKMETER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x12D12970)
#define AUDIO_PINVOKE_GETGLOBALSTATS_OFFSET UNITYSDK_OFFSET(0x12D12870)
#define AUDIO_PINVOKE_GETMODULEHANDLE_OFFSET UNITYSDK_OFFSET(0x12D12D10)
#define AUDIO_PINVOKE_GETPADERROR_OFFSET UNITYSDK_OFFSET(0x12D139E0)
#define AUDIO_PINVOKE_NAP_GETAUDIOBUFFER_OFFSET UNITYSDK_OFFSET(0x12D12C80)
#define AUDIO_PINVOKE_SCEPADCLOSE_OFFSET UNITYSDK_OFFSET(0x12D13110)
#define AUDIO_PINVOKE_SCEPADGETCONTAINERIDINFORMATION_OFFSET UNITYSDK_OFFSET(0x12D13540)
#define AUDIO_PINVOKE_SCEPADGETCONTROLLERBUSTYPE_OFFSET UNITYSDK_OFFSET(0x12D13860)
#define AUDIO_PINVOKE_SCEPADGETCONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x12D134C0)
#define AUDIO_PINVOKE_SCEPADGETHANDLE_OFFSET UNITYSDK_OFFSET(0x12D13080)
#define AUDIO_PINVOKE_SCEPADGETJACKSTATE_OFFSET UNITYSDK_OFFSET(0x12D13290)
#define AUDIO_PINVOKE_SCEPADINIT3_OFFSET UNITYSDK_OFFSET(0x12D12E60)
#define AUDIO_PINVOKE_SCEPADINIT_OFFSET UNITYSDK_OFFSET(0x12D12DE0)
#define AUDIO_PINVOKE_SCEPADISCONTROLLERUPDATEREQUIRED_OFFSET UNITYSDK_OFFSET(0x12D137E0)
#define AUDIO_PINVOKE_SCEPADOPEN_OFFSET UNITYSDK_OFFSET(0x12D12FF0)
#define AUDIO_PINVOKE_SCEPADRESETLIGHTBAR_OFFSET UNITYSDK_OFFSET(0x12D13440)
#define AUDIO_PINVOKE_SCEPADSETAUDIOOUTPATH_OFFSET UNITYSDK_OFFSET(0x12D13190)
#define AUDIO_PINVOKE_SCEPADSETLIGHTBAR_OFFSET UNITYSDK_OFFSET(0x12D133C0)
#define AUDIO_PINVOKE_SCEPADSETVIBRATIONMODE_OFFSET UNITYSDK_OFFSET(0x12D13960)
#define AUDIO_PINVOKE_SCEPADSETVIBRATION_OFFSET UNITYSDK_OFFSET(0x12D138E0)
#define AUDIO_PINVOKE_SCEPADSETVOLUMEGAIN_OFFSET UNITYSDK_OFFSET(0x12D13210)
#define AUDIO_PINVOKE_SCEPADTERMINATE_OFFSET UNITYSDK_OFFSET(0x12D12F70)
#define AUDIO_PINVOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D13AE0)

inline static constexpr unsigned int Audio_PINVOKE_TypeDefinitionIndex = 38664;

class Audio_PINVOKE : public ::System::Object
{
public:
	// static const ::System::String* AkSoundEngineDll_Path; // 0x0
	// static const ::System::Int32 AkMeter_MaxChannels = 0xC; // 0x0
	// static const ::System::Int32 AkMeter_MaxSlots = 0x10; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE__CTOR_OFFSET))(this);
	}

	static ::System::Void GetGlobalStats(::Audio_PINVOKE_GlobalStats& out_status)
	{
		return ((::System::Void(*)(::Audio_PINVOKE_GlobalStats&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_GETGLOBALSTATS_OFFSET))(out_status);
	}

	static ::AKRESULT AkMeter_Register(::System::UInt32 in_busID, ::System::UInt32 in_flags)
	{
		return ((::AKRESULT(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_AKMETER_REGISTER_OFFSET))(in_busID, in_flags);
	}

	static ::AKRESULT AkMeter_Unregister(::System::UInt32 in_busID)
	{
		return ((::AKRESULT(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_AKMETER_UNREGISTER_OFFSET))(in_busID);
	}

	static ::System::Single AkMeter_PollPeak(::System::UInt32 in_busID)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_AKMETER_POLLPEAK_OFFSET))(in_busID);
	}

	static ::System::Int32 AkMeter_PollPeakPerChannel(::System::UInt32 in_busID, ::Il2CppArray<::System::Single>* out_pPeaks, ::System::Int32 in_maxCount)
	{
		return ((::System::Int32(*)(::System::UInt32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_AKMETER_POLLPEAKPERCHANNEL_OFFSET))(in_busID, out_pPeaks, in_maxCount);
	}

	static ::System::Single AkMeter_PollRms(::System::UInt32 in_busID)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_AKMETER_POLLRMS_OFFSET))(in_busID);
	}

	static ::System::Single AkMeter_PollKWeightedPower(::System::UInt32 in_busID)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_AKMETER_POLLKWEIGHTEDPOWER_OFFSET))(in_busID);
	}

	static ::System::Void AkMeter_Reset()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_AKMETER_RESET_OFFSET))();
	}

	static ::System::Void NAP_GetAudioBuffer(::Il2CppArray<::System::Single>* out_fSamplesData, ::System::UInt32 in_uStartIndex, ::System::UInt32 in_uSize)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_NAP_GETAUDIOBUFFER_OFFSET))(out_fSamplesData, in_uStartIndex, in_uSize);
	}

	static ::System::IntPtr GetModuleHandle(::System::String* lpModuleName)
	{
		return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_GETMODULEHANDLE_OFFSET))(lpModuleName);
	}

	static ::System::Int32 scePadInit()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADINIT_OFFSET))();
	}

	static ::System::Int32 scePadInit3(::Audio_PINVOKE_ScePadInit3Param& pParam)
	{
		return ((::System::Int32(*)(::Audio_PINVOKE_ScePadInit3Param&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADINIT3_OFFSET))(pParam);
	}

	static ::System::Void scePadTerminate()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADTERMINATE_OFFSET))();
	}

	static ::System::Int32 scePadOpen(::System::Int32 userId, ::System::Int32 type, ::System::Int32 index, ::System::IntPtr pParam)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADOPEN_OFFSET))(userId, type, index, pParam);
	}

	static ::System::Int32 scePadGetHandle(::System::Int32 userId, ::System::Int32 type, ::System::Int32 index)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADGETHANDLE_OFFSET))(userId, type, index);
	}

	static ::System::Int32 scePadClose(::System::Int32 handle)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADCLOSE_OFFSET))(handle);
	}

	static ::System::Int32 scePadSetAudioOutPath(::System::Int32 handle, ::System::Int32 path)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADSETAUDIOOUTPATH_OFFSET))(handle, path);
	}

	static ::System::Int32 scePadSetVolumeGain(::System::Int32 handle, ::Audio_PINVOKE_ScePadVolumeGain& pGain)
	{
		return ((::System::Int32(*)(::System::Int32, ::Audio_PINVOKE_ScePadVolumeGain&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADSETVOLUMEGAIN_OFFSET))(handle, pGain);
	}

	static ::System::Int32 scePadGetJackState(::System::Int32 handle, ::Audio_PINVOKE_ScePadJackState& pState)
	{
		return ((::System::Int32(*)(::System::Int32, ::Audio_PINVOKE_ScePadJackState&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADGETJACKSTATE_OFFSET))(handle, pState);
	}

	static ::System::Int32 scePadSetLightBar(::System::Int32 handle, ::Audio_PINVOKE_ScePadColor& pParam)
	{
		return ((::System::Int32(*)(::System::Int32, ::Audio_PINVOKE_ScePadColor&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADSETLIGHTBAR_OFFSET))(handle, pParam);
	}

	static ::System::Int32 scePadResetLightBar(::System::Int32 handle)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADRESETLIGHTBAR_OFFSET))(handle);
	}

	static ::System::Int32 scePadGetControllerType(::System::Int32 handle, ::Audio_PINVOKE_ScePadControllerType& pControllerType)
	{
		return ((::System::Int32(*)(::System::Int32, ::Audio_PINVOKE_ScePadControllerType&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADGETCONTROLLERTYPE_OFFSET))(handle, pControllerType);
	}

	static ::System::Int32 scePadGetContainerIdInformation(::System::Int32 handle, ::Audio_PINVOKE_ScePadContainerIdInfo& pInfo)
	{
		return ((::System::Int32(*)(::System::Int32, ::Audio_PINVOKE_ScePadContainerIdInfo&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADGETCONTAINERIDINFORMATION_OFFSET))(handle, pInfo);
	}

	static ::System::Int32 scePadIsControllerUpdateRequired(::System::Int32 handle)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADISCONTROLLERUPDATEREQUIRED_OFFSET))(handle);
	}

	static ::System::Int32 scePadGetControllerBusType(::System::Int32 handle, ::Audio_PINVOKE_ScePadControllerBusType& pBusType)
	{
		return ((::System::Int32(*)(::System::Int32, ::Audio_PINVOKE_ScePadControllerBusType&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADGETCONTROLLERBUSTYPE_OFFSET))(handle, pBusType);
	}

	static ::System::Int32 scePadSetVibration(::System::Int32 handle, ::Audio_PINVOKE_ScePadVibrationParam& pParam)
	{
		return ((::System::Int32(*)(::System::Int32, ::Audio_PINVOKE_ScePadVibrationParam&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADSETVIBRATION_OFFSET))(handle, pParam);
	}

	static ::System::Int32 scePadSetVibrationMode(::System::Int32 handle, ::Audio_PINVOKE_ScePadVibrationMode mode)
	{
		return ((::System::Int32(*)(::System::Int32, ::Audio_PINVOKE_ScePadVibrationMode))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_SCEPADSETVIBRATIONMODE_OFFSET))(handle, mode);
	}

	static ::System::String* GetPadError(::System::UInt32 ret)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_GETPADERROR_OFFSET))(ret);
	}
};
