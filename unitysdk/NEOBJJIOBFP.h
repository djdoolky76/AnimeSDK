#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEOBJJIOBFP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEOBJJIOBFP_BDOPEPHDPAE_OFFSET UNITYSDK_OFFSET(0xBB74080)
#define NEOBJJIOBFP_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB740D0)
#define NEOBJJIOBFP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB74070)

	class NEOBJJIOBFP : public ::System::Object
	{
	public:
		::System::Int32 NALMBOOCCIN; // 0x10
		::System::Int32 DLMINHHKKMK; // 0x14
		static ::NEOBJJIOBFP** StaticGet_GNPCNKHPAMH()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x10310);
		}

		static ::NEOBJJIOBFP** StaticGet_LJPLDIOCAGF()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x10318);
		}

		static ::NEOBJJIOBFP** StaticGet_LJAAIAGMNDK()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x10320);
		}

		static ::NEOBJJIOBFP** StaticGet_EJGIOGDEHLE()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x10328);
		}

		static ::NEOBJJIOBFP** StaticGet_FLDKONBFOMA()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x10330);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_DNKLFBGOPJA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x10338);
		}

		static ::NEOBJJIOBFP** StaticGet_LGIABFPBNPG()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x10340);
		}

		static ::NEOBJJIOBFP** StaticGet_DNIPGEAABKE()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x10348);
		}

		static ::NEOBJJIOBFP** StaticGet_FLCDLHIJAGC()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x10350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOBJJIOBFP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEOBJJIOBFP_CCTOR_OFFSET))();
		}

		::System::Boolean BDOPEPHDPAE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEOBJJIOBFP_BDOPEPHDPAE_OFFSET))(this, a1);
		}

	};
