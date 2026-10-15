#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define PEBDAPFKGKP_CTOR_OFFSET UNITYSDK_OFFSET(0xC02B190)
#define PEBDAPFKGKP_DABPDGMGOCA_OFFSET UNITYSDK_OFFSET(0xC02B440)
#define PEBDAPFKGKP_DNCOGIBIIFM_OFFSET UNITYSDK_OFFSET(0xC02B640)
#define PEBDAPFKGKP_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0xC02B280)
#define PEBDAPFKGKP_FNFKJCEECMO_OFFSET UNITYSDK_OFFSET(0xC02B400)
#define PEBDAPFKGKP_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xC02B6D0)
#define PEBDAPFKGKP_GET_EXT_OFFSET UNITYSDK_OFFSET(0xC02B710)
#define PEBDAPFKGKP_GET_ID_OFFSET UNITYSDK_OFFSET(0xC02B690)
#define PEBDAPFKGKP_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC02B6F0)
#define PEBDAPFKGKP_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC02B6B0)
#define PEBDAPFKGKP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC02B340)
#define PEBDAPFKGKP_NFMMIGNFNFE_OFFSET UNITYSDK_OFFSET(0xC02B5B0)
#define PEBDAPFKGKP_OFLDFAAPKHK_OFFSET UNITYSDK_OFFSET(0xC02B5F0)
#define PEBDAPFKGKP_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xC02B6E0)
#define PEBDAPFKGKP_SET_EXT_OFFSET UNITYSDK_OFFSET(0xC02B720)
#define PEBDAPFKGKP_SET_ID_OFFSET UNITYSDK_OFFSET(0xC02B6A0)
#define PEBDAPFKGKP_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC02B700)
#define PEBDAPFKGKP_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xC02B6C0)

inline static constexpr unsigned int PEBDAPFKGKP_TypeDefinitionIndex = 61078;

	class PEBDAPFKGKP : public ::System::Object
	{
	public:
		::System::String* _ext_k__BackingField; // 0x10
		::System::String* _Content_k__BackingField; // 0x18
		::System::String* _Title_k__BackingField; // 0x20
		::System::Int64 _TargetTimeStamp_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean FNFKJCEECMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_FNFKJCEECMO_OFFSET))(this);
		}

		::System::Void FIABLKFJCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_FIABLKFJCBF_OFFSET))(this);
		}

		::System::Void DABPDGMGOCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_DABPDGMGOCA_OFFSET))(this, a1);
		}

		::System::Void NFMMIGNFNFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_NFMMIGNFNFE_OFFSET))(this);
		}

		::System::Void OFLDFAAPKHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_OFLDFAAPKHK_OFFSET))(this);
		}

		::System::Void DNCOGIBIIFM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_DNCOGIBIIFM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Int64 get_TargetTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_GET_TARGETTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TargetTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_SET_TARGETTIMESTAMP_OFFSET))(this, a1);
		}

		::System::String* get_ext()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_GET_EXT_OFFSET))(this);
		}

		::System::Void set_ext(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEBDAPFKGKP_SET_EXT_OFFSET))(this, a1);
		}

	};
