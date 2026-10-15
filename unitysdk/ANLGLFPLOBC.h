#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANLGLFPLOBC;

#define ANLGLFPLOBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1589B950)
#define ANLGLFPLOBC_FKPDPBFFLBO_OFFSET UNITYSDK_OFFSET(0x1589B9F0)
#define ANLGLFPLOBC_GDCPKFEPPOE_OFFSET UNITYSDK_OFFSET(0x1589B8C0)
#define ANLGLFPLOBC_MIDAGNDGAJC_OFFSET UNITYSDK_OFFSET(0x1589B960)

	class ANLGLFPLOBC : public ::System::Object
	{
	public:
		::System::Boolean GEOPPFCKACN; // 0x10
		::System::Boolean FNFMMNGIGLJ; // 0x11
		::System::Boolean NCPEFHFMBMB; // 0x12
		::System::Boolean IJPHJEDPHGN; // 0x13
		::System::Boolean LCCNIHLPDBF; // 0x14
		::System::Boolean GEIEKOJPANB; // 0x15
		::System::Boolean HEIHBJEEGPB; // 0x16
		::System::Boolean NKJCGHNCFFO; // 0x17
		::System::Boolean HGJICDMMJAB; // 0x18
		static ::ANLGLFPLOBC** StaticGet_LJFPJFOOLPK()
		{
			return (::ANLGLFPLOBC**)UnitySDK::FromName("", "ANLGLFPLOBC")->GetStaticField(0x60870);
		}

		static ::ANLGLFPLOBC** StaticGet_OBNODJFJFEM()
		{
			return (::ANLGLFPLOBC**)UnitySDK::FromName("", "ANLGLFPLOBC")->GetStaticField(0x60878);
		}

		static ::ANLGLFPLOBC** StaticGet_MNGIMAMHGNC()
		{
			return (::ANLGLFPLOBC**)UnitySDK::FromName("", "ANLGLFPLOBC")->GetStaticField(0x60880);
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
