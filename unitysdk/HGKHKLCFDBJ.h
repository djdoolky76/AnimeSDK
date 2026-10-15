#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
class CADDDIKDHBJ;
namespace RPG::Client { class FMChannelClientTransformMonoPlugin; }
namespace System { class String; }

#define HGKHKLCFDBJ_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x15CA8DF0)
#define HGKHKLCFDBJ_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x15CA8E80)
#define HGKHKLCFDBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA91F0)
#define HGKHKLCFDBJ_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x15CA8E60)
#define HGKHKLCFDBJ_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0x15CA8F20)
#define HGKHKLCFDBJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15CA8C80)
#define HGKHKLCFDBJ_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x15CA8D90)
#define HGKHKLCFDBJ_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0x15CA9040)
#define HGKHKLCFDBJ_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x15CA8D30)
#define HGKHKLCFDBJ_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0x15CA8FA0)
#define HGKHKLCFDBJ_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x15CA8E70)

	class HGKHKLCFDBJ : public ::RPG::Client::TABehaviorBase
	{
	public:
		::CADDDIKDHBJ* _OwnerFMSystem_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_CGEJMGFOLMP_OFFSET))(this);
		}

		::CADDDIKDHBJ* get_OwnerFMSystem()
		{
			return ((::CADDDIKDHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::CADDDIKDHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADDDIKDHBJ*))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
		}

		::System::String* ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_CHANNELNAME_OFFSET))(this);
		}

		::System::Single SampleDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_SAMPLEDELAY_OFFSET))(this);
		}

		::System::Void OnSample(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_ONSAMPLE_OFFSET))(this, a1);
		}

		::RPG::Client::FMChannelClientTransformMonoPlugin* JJINILFDJOF()
		{
			return ((::RPG::Client::FMChannelClientTransformMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKHKLCFDBJ_JJINILFDJOF_OFFSET))(this);
		}

	};
