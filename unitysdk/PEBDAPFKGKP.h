#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define PEBDAPFKGKP_CTOR_OFFSET UNITYSDK_OFFSET(0x104469C0)
#define PEBDAPFKGKP_DABPDGMGOCA_OFFSET UNITYSDK_OFFSET(0x10446C70)
#define PEBDAPFKGKP_DNCOGIBIIFM_OFFSET UNITYSDK_OFFSET(0x10446E70)
#define PEBDAPFKGKP_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0x10446AB0)
#define PEBDAPFKGKP_FNFKJCEECMO_OFFSET UNITYSDK_OFFSET(0x10446C30)
#define PEBDAPFKGKP_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x10446F00)
#define PEBDAPFKGKP_GET_EXT_OFFSET UNITYSDK_OFFSET(0x10446F40)
#define PEBDAPFKGKP_GET_ID_OFFSET UNITYSDK_OFFSET(0x10446EC0)
#define PEBDAPFKGKP_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x10446F20)
#define PEBDAPFKGKP_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x10446EE0)
#define PEBDAPFKGKP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x10446B70)
#define PEBDAPFKGKP_NFMMIGNFNFE_OFFSET UNITYSDK_OFFSET(0x10446DE0)
#define PEBDAPFKGKP_OFLDFAAPKHK_OFFSET UNITYSDK_OFFSET(0x10446E20)
#define PEBDAPFKGKP_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x10446F10)
#define PEBDAPFKGKP_SET_EXT_OFFSET UNITYSDK_OFFSET(0x10446F50)
#define PEBDAPFKGKP_SET_ID_OFFSET UNITYSDK_OFFSET(0x10446ED0)
#define PEBDAPFKGKP_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x10446F30)
#define PEBDAPFKGKP_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x10446EF0)

inline static constexpr unsigned int PEBDAPFKGKP_TypeDefinitionIndex = 62463;

	class PEBDAPFKGKP : public ::System::Object
	{
	public:
		::System::String* _ext_k__BackingField; // 0x10
		::System::String* _Title_k__BackingField; // 0x18
		::System::String* _Content_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 _TargetTimeStamp_k__BackingField; // 0x30
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
