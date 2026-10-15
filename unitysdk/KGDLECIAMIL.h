#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CADDDIKDHBJ;
namespace System { class String; }

#define KGDLECIAMIL_AJHHCOHFIFA_OFFSET UNITYSDK_OFFSET(0xB3D6960)
#define KGDLECIAMIL_AUTOACTIVE_OFFSET UNITYSDK_OFFSET(0xB3D6630)
#define KGDLECIAMIL_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xB3D6670)
#define KGDLECIAMIL_CLEAR_OFFSET UNITYSDK_OFFSET(0xB3D6900)
#define KGDLECIAMIL_CTOR_OFFSET UNITYSDK_OFFSET(0xB3D69C0)
#define KGDLECIAMIL_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xB3D65A0)
#define KGDLECIAMIL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3D65C0)
#define KGDLECIAMIL_ONCHANNELACTIVE_OFFSET UNITYSDK_OFFSET(0xB3D66B0)
#define KGDLECIAMIL_ONCHANNELDEACTIVE_OFFSET UNITYSDK_OFFSET(0xB3D66F0)
#define KGDLECIAMIL_ONCHANNELUPDATE_OFFSET UNITYSDK_OFFSET(0xB3D6730)
#define KGDLECIAMIL_SAMPLE_OFFSET UNITYSDK_OFFSET(0xB3D68A0)
#define KGDLECIAMIL_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xB3D65B0)

inline static constexpr unsigned int KGDLECIAMIL_TypeDefinitionIndex = 60897;

	class KGDLECIAMIL : public ::System::Object
	{
	public:
		::System::String* MCKJJLOPEKG; // 0x10
		::CADDDIKDHBJ* _OwnerFMSystem_k__BackingField; // 0x18
		::System::String* BPJCCKBGJOG; // 0x20
		::System::Boolean FMNEEONAMNO; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single AIKAPJELHNK; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDLECIAMIL_CTOR_OFFSET))(this);
		}

		::CADDDIKDHBJ* get_OwnerFMSystem()
		{
			return ((::CADDDIKDHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDLECIAMIL_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::CADDDIKDHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADDDIKDHBJ*))((::PBYTE)hIl2Cpp + KGDLECIAMIL_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KGDLECIAMIL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AutoActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDLECIAMIL_AUTOACTIVE_OFFSET))(this);
		}

		::System::String* ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDLECIAMIL_CHANNELNAME_OFFSET))(this);
		}

		::System::Void OnChannelActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDLECIAMIL_ONCHANNELACTIVE_OFFSET))(this);
		}

		::System::Void OnChannelDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDLECIAMIL_ONCHANNELDEACTIVE_OFFSET))(this);
		}

		::System::Void OnChannelUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGDLECIAMIL_ONCHANNELUPDATE_OFFSET))(this, a1);
		}

		::System::Single Sample(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGDLECIAMIL_SAMPLE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDLECIAMIL_CLEAR_OFFSET))(this);
		}

		::System::Void AJHHCOHFIFA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGDLECIAMIL_AJHHCOHFIFA_OFFSET))(this, a1);
		}

	};
