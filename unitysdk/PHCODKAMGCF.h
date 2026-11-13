#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CADDDIKDHBJ;
class NEOCEOCDEAF;
namespace System { class String; }

#define PHCODKAMGCF_AHPHBNKKKPE_OFFSET UNITYSDK_OFFSET(0x16DAF750)
#define PHCODKAMGCF_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0x16DAF7C0)
#define PHCODKAMGCF_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x16DAF490)
#define PHCODKAMGCF_CTOR_OFFSET UNITYSDK_OFFSET(0x16DAF360)
#define PHCODKAMGCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DAF4D0)
#define PHCODKAMGCF_EOCMLHBPGEI_OFFSET UNITYSDK_OFFSET(0x16DAF570)
#define PHCODKAMGCF_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x16DAF7A0)
#define PHCODKAMGCF_LNINKBDLJBG_OFFSET UNITYSDK_OFFSET(0x16DAF650)
#define PHCODKAMGCF_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0x16DAF800)
#define PHCODKAMGCF_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0x16DAF840)
#define PHCODKAMGCF_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0x16DAF880)
#define PHCODKAMGCF_SAMPLE_OFFSET UNITYSDK_OFFSET(0x16DAF960)
#define PHCODKAMGCF_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x16DAF7B0)

inline static constexpr unsigned int PHCODKAMGCF_TypeDefinitionIndex = 71123;

	class PHCODKAMGCF : public ::System::Object
	{
	public:
		::NEOCEOCDEAF* INDMABDHFDH; // 0x10
		::System::String* GIDAEFPOGHI; // 0x18
		::CADDDIKDHBJ* _OwnerFMSystem_k__BackingField; // 0x20
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PHCODKAMGCF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCODKAMGCF_DISPOSE_OFFSET))(this);
		}

		::System::Void EOCMLHBPGEI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHCODKAMGCF_EOCMLHBPGEI_OFFSET))(this, a1);
		}

		::System::Void LNINKBDLJBG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHCODKAMGCF_LNINKBDLJBG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AHPHBNKKKPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCODKAMGCF_AHPHBNKKKPE_OFFSET))(this);
		}

		::CADDDIKDHBJ* get_OwnerFMSystem()
		{
			return ((::CADDDIKDHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCODKAMGCF_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::CADDDIKDHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADDDIKDHBJ*))((::PBYTE)hIl2Cpp + PHCODKAMGCF_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
		}

		::System::String* ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCODKAMGCF_CHANNELNAME_OFFSET))(this);
		}

		::System::Boolean AutoActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCODKAMGCF_AUTOACTIVE_OFFSET))(this);
		}

		::System::Void OnChannelActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCODKAMGCF_ONCHANNELACTIVE_OFFSET))(this);
		}

		::System::Void OnChannelDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCODKAMGCF_ONCHANNELDEACTIVE_OFFSET))(this);
		}

		::System::Void OnChannelUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHCODKAMGCF_ONCHANNELUPDATE_OFFSET))(this, a1);
		}

		::System::Single Sample(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHCODKAMGCF_SAMPLE_OFFSET))(this, a1);
		}

	};
