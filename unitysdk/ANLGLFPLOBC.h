#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANLGLFPLOBC;

#define ANLGLFPLOBC_CTOR_OFFSET UNITYSDK_OFFSET(0x158900B0)
#define ANLGLFPLOBC_FKPDPBFFLBO_OFFSET UNITYSDK_OFFSET(0x15890150)
#define ANLGLFPLOBC_GDCPKFEPPOE_OFFSET UNITYSDK_OFFSET(0x15890020)
#define ANLGLFPLOBC_MIDAGNDGAJC_OFFSET UNITYSDK_OFFSET(0x158900C0)

inline static constexpr unsigned int ANLGLFPLOBC_TypeDefinitionIndex = 57254;

	class ANLGLFPLOBC : public ::System::Object
	{
	public:
		::System::Boolean FNFMMNGIGLJ; // 0x10
		::System::Boolean HGJICDMMJAB; // 0x11
		::System::Boolean HEIHBJEEGPB; // 0x12
		::System::Boolean LCCNIHLPDBF; // 0x13
		::System::Boolean NCPEFHFMBMB; // 0x14
		::System::Boolean GEIEKOJPANB; // 0x15
		::System::Boolean GEOPPFCKACN; // 0x16
		::System::Boolean IJPHJEDPHGN; // 0x17
		::System::Boolean NKJCGHNCFFO; // 0x18
		static ::ANLGLFPLOBC** StaticGet_OBNODJFJFEM()
		{
			return (::ANLGLFPLOBC**)UnitySDK::FromName("", "ANLGLFPLOBC")->GetStaticField(0x5DB30);
		}

		static ::ANLGLFPLOBC** StaticGet_MNGIMAMHGNC()
		{
			return (::ANLGLFPLOBC**)UnitySDK::FromName("", "ANLGLFPLOBC")->GetStaticField(0x5DB38);
		}

		static ::ANLGLFPLOBC** StaticGet_LJFPJFOOLPK()
		{
			return (::ANLGLFPLOBC**)UnitySDK::FromName("", "ANLGLFPLOBC")->GetStaticField(0x5DB40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGLFPLOBC_CTOR_OFFSET))(this);
		}

		static ::ANLGLFPLOBC* GDCPKFEPPOE()
		{
			return ((::ANLGLFPLOBC*(*)())((::PBYTE)hIl2Cpp + ANLGLFPLOBC_GDCPKFEPPOE_OFFSET))();
		}

		static ::ANLGLFPLOBC* MIDAGNDGAJC()
		{
			return ((::ANLGLFPLOBC*(*)())((::PBYTE)hIl2Cpp + ANLGLFPLOBC_MIDAGNDGAJC_OFFSET))();
		}

		static ::ANLGLFPLOBC* FKPDPBFFLBO()
		{
			return ((::ANLGLFPLOBC*(*)())((::PBYTE)hIl2Cpp + ANLGLFPLOBC_FKPDPBFFLBO_OFFSET))();
		}

	};
