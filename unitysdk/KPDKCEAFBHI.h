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

#define KPDKCEAFBHI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5AD250)
#define KPDKCEAFBHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AD530)
#define KPDKCEAFBHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5AD550)
#define KPDKCEAFBHI_GET_ABILITYCASTSERVICES_OFFSET UNITYSDK_OFFSET(0xB5AD810)
#define KPDKCEAFBHI_GET_AIDEBUGRECORDER_OFFSET UNITYSDK_OFFSET(0xB5AD850)
#define KPDKCEAFBHI_GET_CARSERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD7D0)
#define KPDKCEAFBHI_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xB5AD730)
#define KPDKCEAFBHI_GET_GAMESTATESERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD790)
#define KPDKCEAFBHI_GET_INPUTSERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD770)
#define KPDKCEAFBHI_GET_MAPSERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD7B0)
#define KPDKCEAFBHI_GET_PLAYERPEAKSPEED_OFFSET UNITYSDK_OFFSET(0xB5AD870)
#define KPDKCEAFBHI_GET_PLAYERSERVICES_OFFSET UNITYSDK_OFFSET(0xB5AD7F0)
#define KPDKCEAFBHI_GET_TIMESERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD750)
#define KPDKCEAFBHI_GET_TREVENTSERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD830)
#define KPDKCEAFBHI_SET_ABILITYCASTSERVICES_OFFSET UNITYSDK_OFFSET(0xB5AD820)
#define KPDKCEAFBHI_SET_AIDEBUGRECORDER_OFFSET UNITYSDK_OFFSET(0xB5AD860)
#define KPDKCEAFBHI_SET_CARSERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD7E0)
#define KPDKCEAFBHI_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xB5AD740)
#define KPDKCEAFBHI_SET_GAMESTATESERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD7A0)
#define KPDKCEAFBHI_SET_INPUTSERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD780)
#define KPDKCEAFBHI_SET_MAPSERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD7C0)
#define KPDKCEAFBHI_SET_PLAYERPEAKSPEED_OFFSET UNITYSDK_OFFSET(0xB5AD880)
#define KPDKCEAFBHI_SET_PLAYERSERVICES_OFFSET UNITYSDK_OFFSET(0xB5AD800)
#define KPDKCEAFBHI_SET_TIMESERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD760)
#define KPDKCEAFBHI_SET_TREVENTSERVICE_OFFSET UNITYSDK_OFFSET(0xB5AD840)

inline static constexpr unsigned int KPDKCEAFBHI_TypeDefinitionIndex = 75925;

	class KPDKCEAFBHI
	{
	public:
		::GMAGAHGCOFD* _AbilityCastServices_k__BackingField; // 0x90
		::KGAKDFCNDPH* _GameStateService_k__BackingField; // 0x98
		::KBFKLMMIPLI* _PlayerServices_k__BackingField; // 0xA0
		::NDIBMOJFOFL* _TimeService_k__BackingField; // 0xA8
		::CGBECAKCLFD* _CarService_k__BackingField; // 0xB0
		::BGFDLPPHOCI* _AIDebugRecorder_k__BackingField; // 0xB8
		::PMLILPFMPHO* _InputService_k__BackingField; // 0xC0
		::JIJBCGDANLJ* _Context_k__BackingField; // 0xC8
		::CDIFPACDAAE* _TREventService_k__BackingField; // 0xD0
		::HHDFHOBABCB* _MapService_k__BackingField; // 0xD8
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
