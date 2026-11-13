#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkBasePathGetter;
namespace System { class String; }

#define AKBASEPATHGETTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEFDE50)
#define AKBASEPATHGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFD9B0)
#define AKBASEPATHGETTER_EVALUATEGAMEPATHS_OFFSET UNITYSDK_OFFSET(0x1EEFD9C0)
#define AKBASEPATHGETTER_GETPLATFORMBASEPATH_OFFSET UNITYSDK_OFFSET(0x1EEFD840)
#define AKBASEPATHGETTER_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x1EEFD750)
#define AKBASEPATHGETTER_GET_DECODEDBANKFULLPATH_OFFSET UNITYSDK_OFFSET(0x1EEFDE30)
#define AKBASEPATHGETTER_GET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x1EEFD7D0)
#define AKBASEPATHGETTER_GET_OFFSET UNITYSDK_OFFSET(0x1EEFD010)
#define AKBASEPATHGETTER_GET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1EEFDE10)
#define AKBASEPATHGETTER_GET_SOUNDBANKBASEPATH_OFFSET UNITYSDK_OFFSET(0x1EEFDDF0)
#define AKBASEPATHGETTER_SET_DECODEDBANKFULLPATH_OFFSET UNITYSDK_OFFSET(0x1EEFDE40)
#define AKBASEPATHGETTER_SET_LOGWARNINGS_OFFSET UNITYSDK_OFFSET(0x1EEFD810)
#define AKBASEPATHGETTER_SET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1EEFDE20)
#define AKBASEPATHGETTER_SET_SOUNDBANKBASEPATH_OFFSET UNITYSDK_OFFSET(0x1EEFDE00)

inline static constexpr unsigned int AkBasePathGetter_TypeDefinitionIndex = 45896;

	class AkBasePathGetter : public ::System::Object
	{
	public:
		::System::String* _DecodedBankFullPath_k__BackingField; // 0x10
		::System::String* _PersistentDataPath_k__BackingField; // 0x18
		::System::String* _SoundBankBasePath_k__BackingField; // 0x20
		static ::System::String** StaticGet_DefaultBasePath()
		{
			return (::System::String**)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x708A0);
		}

		static ::AkBasePathGetter** StaticGet_Instance()
		{
			return (::AkBasePathGetter**)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x708A8);
		}

		static ::System::String** StaticGet_DefaultPersistentDataPath()
		{
			return (::System::String**)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x708B0);
		}

		static ::System::String** StaticGet_DefaultPlatformName()
		{
			return (::System::String**)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x708B8);
		}

		static ::System::Boolean* StaticGet_LogWarnings_Internal()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AkBasePathGetter")->GetStaticField(0x15930);
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
