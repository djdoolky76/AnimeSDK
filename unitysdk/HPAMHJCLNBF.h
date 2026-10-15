#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CADDDIKDHBJ;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }

#define HPAMHJCLNBF_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x15DC0400)
#define HPAMHJCLNBF_CLEAR_OFFSET UNITYSDK_OFFSET(0x15DC03B0)
#define HPAMHJCLNBF_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC0AC0)
#define HPAMHJCLNBF_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x15DC0320)
#define HPAMHJCLNBF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15DC0340)
#define HPAMHJCLNBF_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0x15DC0480)
#define HPAMHJCLNBF_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0x15DC0440)
#define HPAMHJCLNBF_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x15DC0330)

	class HPAMHJCLNBF : public ::System::Object
	{
	public:
		::CADDDIKDHBJ* _OwnerFMSystem_k__BackingField; // 0x10
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::String* ILHIPLMGPLH; // 0x20
		::System::Action* ODIOOEOBLJF; // 0x28
		::System::String* BPJCCKBGJOG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAMHJCLNBF_CTOR_OFFSET))(this);
		}

		::CADDDIKDHBJ* get_OwnerFMSystem()
		{
			return ((::CADDDIKDHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAMHJCLNBF_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::CADDDIKDHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADDDIKDHBJ*))((::PBYTE)hIl2Cpp + HPAMHJCLNBF_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::System::String* a1, ::RPG::GameCore::TaskContext* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + HPAMHJCLNBF_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAMHJCLNBF_CLEAR_OFFSET))(this);
		}

		::System::String* ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAMHJCLNBF_CHANNELNAME_OFFSET))(this);
		}

		::System::Single SampleDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAMHJCLNBF_SAMPLEDELAY_OFFSET))(this);
		}

		::System::Void OnSample(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPAMHJCLNBF_ONSAMPLE_OFFSET))(this, a1);
		}

	};
