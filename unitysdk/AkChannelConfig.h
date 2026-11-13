#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkChannelConfig;

#define AKCHANNELCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EF03960)
#define AKCHANNELCONFIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF03850)
#define AKCHANNELCONFIG_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EF038D0)
#define AKCHANNELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF3C70)
#define AKCHANNELCONFIG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF03E70)
#define AKCHANNELCONFIG_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EF03230)
#define AKCHANNELCONFIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF03050)
#define AKCHANNELCONFIG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EF03160)
#define AKCHANNELCONFIG_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEF3B30)
#define AKCHANNELCONFIG_GET_ECONFIGTYPE_OFFSET UNITYSDK_OFFSET(0x1EF03630)
#define AKCHANNELCONFIG_GET_UCHANNELMASK_OFFSET UNITYSDK_OFFSET(0x1EF037A0)
#define AKCHANNELCONFIG_GET_UNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x1EF034C0)
#define AKCHANNELCONFIG_ISCHANNELCONFIGSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1EF040D0)
#define AKCHANNELCONFIG_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EF03D10)
#define AKCHANNELCONFIG_REMOVECENTER_OFFSET UNITYSDK_OFFSET(0x1EF04000)
#define AKCHANNELCONFIG_REMOVELFE_OFFSET UNITYSDK_OFFSET(0x1EF03F30)
#define AKCHANNELCONFIG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF03DC0)
#define AKCHANNELCONFIG_SETAMBISONIC_OFFSET UNITYSDK_OFFSET(0x1EF03C50)
#define AKCHANNELCONFIG_SETANONYMOUS_OFFSET UNITYSDK_OFFSET(0x1EF03B90)
#define AKCHANNELCONFIG_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EF02FF0)
#define AKCHANNELCONFIG_SETSTANDARDORANONYMOUS_OFFSET UNITYSDK_OFFSET(0x1EF03AD0)
#define AKCHANNELCONFIG_SETSTANDARD_OFFSET UNITYSDK_OFFSET(0x1EF03A10)
#define AKCHANNELCONFIG_SET_ECONFIGTYPE_OFFSET UNITYSDK_OFFSET(0x1EF03570)
#define AKCHANNELCONFIG_SET_UCHANNELMASK_OFFSET UNITYSDK_OFFSET(0x1EF036E0)
#define AKCHANNELCONFIG_SET_UNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x1EF03400)

inline static constexpr unsigned int AkChannelConfig_TypeDefinitionIndex = 45801;

	class AkChannelConfig : public ::System::Object
	{
	public:
		::System::IntPtr swigCPtr; // 0x10
		::System::Boolean swigCMemOwn; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::IntPtr getCPtr(::AkChannelConfig* a1)
		{
			return ((::System::IntPtr(*)(::AkChannelConfig*))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_uNumChannels(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SET_UNUMCHANNELS_OFFSET))(this, a1);
		}

		::System::UInt32 get_uNumChannels()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_GET_UNUMCHANNELS_OFFSET))(this);
		}

		::System::Void set_eConfigType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SET_ECONFIGTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_eConfigType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_GET_ECONFIGTYPE_OFFSET))(this);
		}

		::System::Void set_uChannelMask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SET_UCHANNELMASK_OFFSET))(this, a1);
		}

		::System::UInt32 get_uChannelMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_GET_UCHANNELMASK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_CLEAR_OFFSET))(this);
		}

		::System::Void SetStandard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETSTANDARD_OFFSET))(this, a1);
		}

		::System::Void SetStandardOrAnonymous(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETSTANDARDORANONYMOUS_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnonymous(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETANONYMOUS_OFFSET))(this, a1);
		}

		::System::Void SetAmbisonic(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SETAMBISONIC_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_ISVALID_OFFSET))(this);
		}

		::System::UInt32 Serialize()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_SERIALIZE_OFFSET))(this);
		}

		::System::Void Deserialize(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_DESERIALIZE_OFFSET))(this, a1);
		}

		::AkChannelConfig* RemoveLFE()
		{
			return ((::AkChannelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_REMOVELFE_OFFSET))(this);
		}

		::AkChannelConfig* RemoveCenter()
		{
			return ((::AkChannelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_REMOVECENTER_OFFSET))(this);
		}

		::System::Boolean IsChannelConfigSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELCONFIG_ISCHANNELCONFIGSUPPORTED_OFFSET))(this);
		}

	};
