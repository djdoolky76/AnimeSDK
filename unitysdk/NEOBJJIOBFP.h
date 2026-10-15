#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEOBJJIOBFP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEOBJJIOBFP_BDOPEPHDPAE_OFFSET UNITYSDK_OFFSET(0xBB6DE90)
#define NEOBJJIOBFP_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB6DEE0)
#define NEOBJJIOBFP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB6DE80)

inline static constexpr unsigned int NEOBJJIOBFP_TypeDefinitionIndex = 73939;

	class NEOBJJIOBFP : public ::System::Object
	{
	public:
		::System::Int32 NALMBOOCCIN; // 0x10
		::System::Int32 DLMINHHKKMK; // 0x14
		static ::NEOBJJIOBFP** StaticGet_LJAAIAGMNDK()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x11020);
		}

		static ::NEOBJJIOBFP** StaticGet_DNIPGEAABKE()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x11028);
		}

		static ::NEOBJJIOBFP** StaticGet_EJGIOGDEHLE()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x11030);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_DNKLFBGOPJA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x11038);
		}

		static ::NEOBJJIOBFP** StaticGet_GNPCNKHPAMH()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x11040);
		}

		static ::NEOBJJIOBFP** StaticGet_LGIABFPBNPG()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x11048);
		}

		static ::NEOBJJIOBFP** StaticGet_FLCDLHIJAGC()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x11050);
		}

		static ::NEOBJJIOBFP** StaticGet_FLDKONBFOMA()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x11058);
		}

		static ::NEOBJJIOBFP** StaticGet_LJPLDIOCAGF()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0x11060);
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
