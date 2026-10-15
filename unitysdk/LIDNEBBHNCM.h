#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define LIDNEBBHNCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4AEBA0)
#define LIDNEBBHNCM_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define LIDNEBBHNCM_DKPJOGAKIJN_OFFSET UNITYSDK_OFFSET(0x1C4AE980)
#define LIDNEBBHNCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C27D50)
#define LIDNEBBHNCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C27CE0)
#define LIDNEBBHNCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C27D60)
#define LIDNEBBHNCM_JMGBDKFNMNG_1_OFFSET UNITYSDK_OFFSET(0x1C4AEA80)
#define LIDNEBBHNCM_JMGBDKFNMNG_OFFSET UNITYSDK_OFFSET(0x1C4AE9E0)
#define LIDNEBBHNCM_OOKBMEDBLOB_OFFSET UNITYSDK_OFFSET(0x1C4AE820)
#define LIDNEBBHNCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C27CD0)

	struct alignas(4) LIDNEBBHNCM
	{
		::System::Int32 NLDLDIJHIBF; // 0x10
		static ::LIDNEBBHNCM* StaticGet_DEKDDHBJLKP()
		{
			return (::LIDNEBBHNCM*)UnitySDK::FromName("", "LIDNEBBHNCM")->GetStaticField(0x4460);
		}

		static ::System::Int32* StaticGet_BMCJKDMCDAL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LIDNEBBHNCM")->GetStaticField(0x4464);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIDNEBBHNCM_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIDNEBBHNCM_CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDNEBBHNCM_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::LIDNEBBHNCM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIDNEBBHNCM))((::PBYTE)hIl2Cpp + LIDNEBBHNCM_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIDNEBBHNCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDNEBBHNCM_GETHASHCODE_OFFSET))(this);
		}

		static ::System::String* OOKBMEDBLOB(::System::UInt64 a1)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + LIDNEBBHNCM_OOKBMEDBLOB_OFFSET))(a1);
		}

		static ::System::String* DKPJOGAKIJN(::System::UInt64 a1)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + LIDNEBBHNCM_DKPJOGAKIJN_OFFSET))(a1);
		}

		static ::System::String* JMGBDKFNMNG(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LIDNEBBHNCM_JMGBDKFNMNG_OFFSET))(a1);
		}

		static ::System::String* JMGBDKFNMNG_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIDNEBBHNCM_JMGBDKFNMNG_1_OFFSET))(a1);
		}

	};
