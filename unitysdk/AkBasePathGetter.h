#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkBasePathGetter;
namespace System { class String; }

#define AKBASEPATHGETTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x2082D130)
#define AKBASEPATHGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x2082CC90)
#define AKBASEPATHGETTER_EVALUATEGAMEPATHS_OFFSET UNITYSDK_OFFSET(0x2082CCA0)
#define AKBASEPATHGETTER_GETPLATFORMBASEPATH_OFFSET UNITYSDK_OFFSET(0x2082CB20)
#define AKBASEPATHGETTER_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x2082CA30)
#define AKBASEPATHGETTER_GET_DECODEDBANKFULLPATH_OFFSET UNITYSDK_OFFSET(0x2082D110)
#define AKBASEPATHGETTER_GET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x2082CAB0)
#define AKBASEPATHGETTER_GET_OFFSET UNITYSDK_OFFSET(0x2082C2F0)
#define AKBASEPATHGETTER_GET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x2082D0F0)
#define AKBASEPATHGETTER_GET_SOUNDBANKBASEPATH_OFFSET UNITYSDK_OFFSET(0x2082D0D0)
#define AKBASEPATHGETTER_SET_DECODEDBANKFULLPATH_OFFSET UNITYSDK_OFFSET(0x2082D120)
#define AKBASEPATHGETTER_SET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x2082CAF0)
#define AKBASEPATHGETTER_SET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x2082D100)
#define AKBASEPATHGETTER_SET_SOUNDBANKBASEPATH_OFFSET UNITYSDK_OFFSET(0x2082D0E0)

inline static constexpr unsigned int AkBasePathGetter_TypeDefinitionIndex = 45896;

	class AkBasePathGetter : public ::System::Object
	{
	public:
		::System::String* _SoundBankBasePath_k__BackingField; // 0x10
		::System::String* _DecodedBankFullPath_k__BackingField; // 0x18
		::System::String* _PersistentDataPath_k__BackingField; // 0x20
		static ::System::String** StaticGet_DefaultBasePath()
		{
			return (::System::String**)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x6D540);
		}

		static ::System::String** StaticGet_DefaultPersistentDataPath()
		{
			return (::System::String**)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x6D548);
		}

		static ::AkBasePathGetter** StaticGet_Instance()
		{
			return (::AkBasePathGetter**)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x6D550);
		}

		static ::System::String** StaticGet_DefaultPlatformName()
		{
			return (::System::String**)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x6D558);
		}

		static ::System::Boolean* StaticGet_LogWarnings_Internal()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x15BA0);
		}

		// static const ::System::String* DecodedBankFolder; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_CCTOR_OFFSET))();
		}

		static ::System::String* GetPlatformName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GETPLATFORMNAME_OFFSET))();
		}

		static ::System::Boolean get_LogWarnings()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_LOGWARNINGS_OFFSET))();
		}

		static ::System::Void set_LogWarnings(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_LOGWARNINGS_OFFSET))(a1);
		}

		static ::System::String* GetPlatformBasePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GETPLATFORMBASEPATH_OFFSET))();
		}

		static ::AkBasePathGetter* Get()
		{
			return ((::AkBasePathGetter*(*)())((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_OFFSET))();
		}

		::System::Void EvaluateGamePaths()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_EVALUATEGAMEPATHS_OFFSET))(this);
		}

		::System::String* get_SoundBankBasePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_SOUNDBANKBASEPATH_OFFSET))(this);
		}

		::System::Void set_SoundBankBasePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_SOUNDBANKBASEPATH_OFFSET))(this, a1);
		}

		::System::String* get_PersistentDataPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_PERSISTENTDATAPATH_OFFSET))(this);
		}

		::System::Void set_PersistentDataPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_PERSISTENTDATAPATH_OFFSET))(this, a1);
		}

		::System::String* get_DecodedBankFullPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_GET_DECODEDBANKFULLPATH_OFFSET))(this);
		}

		::System::Void set_DecodedBankFullPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKBASEPATHGETTER_SET_DECODEDBANKFULLPATH_OFFSET))(this, a1);
		}

	};
