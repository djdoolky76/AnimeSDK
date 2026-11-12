#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEOBJJIOBFP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEOBJJIOBFP_BDOPEPHDPAE_OFFSET UNITYSDK_OFFSET(0xC44EE60)
#define NEOBJJIOBFP_CCTOR_OFFSET UNITYSDK_OFFSET(0xC44EEB0)
#define NEOBJJIOBFP_CTOR_OFFSET UNITYSDK_OFFSET(0xC44EE50)

inline static constexpr unsigned int NEOBJJIOBFP_TypeDefinitionIndex = 76076;

	class NEOBJJIOBFP : public ::System::Object
	{
	public:
		::System::Int32 DLMINHHKKMK; // 0x10
		::System::Int32 NALMBOOCCIN; // 0x14
		static ::NEOBJJIOBFP** StaticGet_FLDKONBFOMA()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF700);
		}

		static ::NEOBJJIOBFP** StaticGet_FLCDLHIJAGC()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF708);
		}

		static ::NEOBJJIOBFP** StaticGet_GNPCNKHPAMH()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF710);
		}

		static ::NEOBJJIOBFP** StaticGet_LJAAIAGMNDK()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF718);
		}

		static ::NEOBJJIOBFP** StaticGet_DNIPGEAABKE()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF720);
		}

		static ::NEOBJJIOBFP** StaticGet_FKMOKGOBEHJ()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF728);
		}

		static ::NEOBJJIOBFP** StaticGet_LGIABFPBNPG()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF730);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_DNKLFBGOPJA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF738);
		}

		static ::NEOBJJIOBFP** StaticGet_EJGIOGDEHLE()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF740);
		}

		static ::NEOBJJIOBFP** StaticGet_LJPLDIOCAGF()
		{
			return (::NEOBJJIOBFP**)UnitySDK::FromName("", "NEOBJJIOBFP")->GetStaticField(0xF748);
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
