#pragma once
#include "unitysdk/unitysdk.h"
class BGFDLPPHOCI;
class CDIFPACDAAE;
class CGBECAKCLFD;
class GMAGAHGCOFD;
class HHDFHOBABCB;
class JIJBCGDANLJ;
class KBFKLMMIPLI;
class KGAKDFCNDPH;
class KPDKCEAFBHI;
class NDIBMOJFOFL;
class PMLILPFMPHO;
namespace UnityEngine { class Transform; }

#define KPDKCEAFBHI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBE07AA0)
#define KPDKCEAFBHI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE07D80)
#define KPDKCEAFBHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE07DA0)
#define KPDKCEAFBHI_GET_ABILITYCASTSERVICES_OFFSET UNITYSDK_OFFSET(0xBE08060)
#define KPDKCEAFBHI_GET_AIDEBUGRECORDER_OFFSET UNITYSDK_OFFSET(0xBE080A0)
#define KPDKCEAFBHI_GET_CARSERVICE_OFFSET UNITYSDK_OFFSET(0xBE08020)
#define KPDKCEAFBHI_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xBE07F80)
#define KPDKCEAFBHI_GET_GAMESTATESERVICE_OFFSET UNITYSDK_OFFSET(0xBE07FE0)
#define KPDKCEAFBHI_GET_INPUTSERVICE_OFFSET UNITYSDK_OFFSET(0xBE07FC0)
#define KPDKCEAFBHI_GET_MAPSERVICE_OFFSET UNITYSDK_OFFSET(0xBE08000)
#define KPDKCEAFBHI_GET_PLAYERPEAKSPEED_OFFSET UNITYSDK_OFFSET(0xBE080C0)
#define KPDKCEAFBHI_GET_PLAYERSERVICES_OFFSET UNITYSDK_OFFSET(0xBE08040)
#define KPDKCEAFBHI_GET_TIMESERVICE_OFFSET UNITYSDK_OFFSET(0xBE07FA0)
#define KPDKCEAFBHI_GET_TREVENTSERVICE_OFFSET UNITYSDK_OFFSET(0xBE08080)
#define KPDKCEAFBHI_SET_ABILITYCASTSERVICES_OFFSET UNITYSDK_OFFSET(0xBE08070)
#define KPDKCEAFBHI_SET_AIDEBUGRECORDER_OFFSET UNITYSDK_OFFSET(0xBE080B0)
#define KPDKCEAFBHI_SET_CARSERVICE_OFFSET UNITYSDK_OFFSET(0xBE08030)
#define KPDKCEAFBHI_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xBE07F90)
#define KPDKCEAFBHI_SET_GAMESTATESERVICE_OFFSET UNITYSDK_OFFSET(0xBE07FF0)
#define KPDKCEAFBHI_SET_INPUTSERVICE_OFFSET UNITYSDK_OFFSET(0xBE07FD0)
#define KPDKCEAFBHI_SET_MAPSERVICE_OFFSET UNITYSDK_OFFSET(0xBE08010)
#define KPDKCEAFBHI_SET_PLAYERPEAKSPEED_OFFSET UNITYSDK_OFFSET(0xBE080D0)
#define KPDKCEAFBHI_SET_PLAYERSERVICES_OFFSET UNITYSDK_OFFSET(0xBE08050)
#define KPDKCEAFBHI_SET_TIMESERVICE_OFFSET UNITYSDK_OFFSET(0xBE07FB0)
#define KPDKCEAFBHI_SET_TREVENTSERVICE_OFFSET UNITYSDK_OFFSET(0xBE08090)

inline static constexpr unsigned int KPDKCEAFBHI_TypeDefinitionIndex = 78253;

	class KPDKCEAFBHI
	{
	public:
		::GMAGAHGCOFD* _AbilityCastServices_k__BackingField; // 0x90
		::HHDFHOBABCB* _MapService_k__BackingField; // 0x98
		::NDIBMOJFOFL* _TimeService_k__BackingField; // 0xA0
		::PMLILPFMPHO* _InputService_k__BackingField; // 0xA8
		::BGFDLPPHOCI* _AIDebugRecorder_k__BackingField; // 0xB0
		::KBFKLMMIPLI* _PlayerServices_k__BackingField; // 0xB8
		::CDIFPACDAAE* _TREventService_k__BackingField; // 0xC0
		::KGAKDFCNDPH* _GameStateService_k__BackingField; // 0xC8
		::JIJBCGDANLJ* _Context_k__BackingField; // 0xD0
		::CGBECAKCLFD* _CarService_k__BackingField; // 0xD8
		::System::Single _PlayerPeakSpeed_k__BackingField; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_CTOR_OFFSET))(this);
		}

		static ::KPDKCEAFBHI* BPLPBPMEODA(::JIJBCGDANLJ* a1, ::UnityEngine::Transform* a2)
		{
			return ((::KPDKCEAFBHI*(*)(::JIJBCGDANLJ*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_DISPOSE_OFFSET))(this);
		}

		::JIJBCGDANLJ* get_Context()
		{
			return ((::JIJBCGDANLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::JIJBCGDANLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_CONTEXT_OFFSET))(this, a1);
		}

		::NDIBMOJFOFL* get_TimeService()
		{
			return ((::NDIBMOJFOFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_TIMESERVICE_OFFSET))(this);
		}

		::System::Void set_TimeService(::NDIBMOJFOFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDIBMOJFOFL*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_TIMESERVICE_OFFSET))(this, a1);
		}

		::PMLILPFMPHO* get_InputService()
		{
			return ((::PMLILPFMPHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_INPUTSERVICE_OFFSET))(this);
		}

		::System::Void set_InputService(::PMLILPFMPHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMLILPFMPHO*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_INPUTSERVICE_OFFSET))(this, a1);
		}

		::KGAKDFCNDPH* get_GameStateService()
		{
			return ((::KGAKDFCNDPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_GAMESTATESERVICE_OFFSET))(this);
		}

		::System::Void set_GameStateService(::KGAKDFCNDPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGAKDFCNDPH*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_GAMESTATESERVICE_OFFSET))(this, a1);
		}

		::HHDFHOBABCB* get_MapService()
		{
			return ((::HHDFHOBABCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_MAPSERVICE_OFFSET))(this);
		}

		::System::Void set_MapService(::HHDFHOBABCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHDFHOBABCB*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_MAPSERVICE_OFFSET))(this, a1);
		}

		::CGBECAKCLFD* get_CarService()
		{
			return ((::CGBECAKCLFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_CARSERVICE_OFFSET))(this);
		}

		::System::Void set_CarService(::CGBECAKCLFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGBECAKCLFD*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_CARSERVICE_OFFSET))(this, a1);
		}

		::KBFKLMMIPLI* get_PlayerServices()
		{
			return ((::KBFKLMMIPLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_PLAYERSERVICES_OFFSET))(this);
		}

		::System::Void set_PlayerServices(::KBFKLMMIPLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBFKLMMIPLI*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_PLAYERSERVICES_OFFSET))(this, a1);
		}

		::GMAGAHGCOFD* get_AbilityCastServices()
		{
			return ((::GMAGAHGCOFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_ABILITYCASTSERVICES_OFFSET))(this);
		}

		::System::Void set_AbilityCastServices(::GMAGAHGCOFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMAGAHGCOFD*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_ABILITYCASTSERVICES_OFFSET))(this, a1);
		}

		::CDIFPACDAAE* get_TREventService()
		{
			return ((::CDIFPACDAAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_TREVENTSERVICE_OFFSET))(this);
		}

		::System::Void set_TREventService(::CDIFPACDAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDIFPACDAAE*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_TREVENTSERVICE_OFFSET))(this, a1);
		}

		::BGFDLPPHOCI* get_AIDebugRecorder()
		{
			return ((::BGFDLPPHOCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_AIDEBUGRECORDER_OFFSET))(this);
		}

		::System::Void set_AIDebugRecorder(::BGFDLPPHOCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFDLPPHOCI*))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_AIDEBUGRECORDER_OFFSET))(this, a1);
		}

		::System::Single get_PlayerPeakSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_GET_PLAYERPEAKSPEED_OFFSET))(this);
		}

		::System::Void set_PlayerPeakSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPDKCEAFBHI_SET_PLAYERPEAKSPEED_OFFSET))(this, a1);
		}

	};
