#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDENCEMCKLN;
class ECPDFJJNDBI;

#define OFPMMJFPEBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C49F320)
#define OFPMMJFPEBD_HOBKJFMBIIE_OFFSET UNITYSDK_OFFSET(0x1C49EF00)
#define OFPMMJFPEBD_ICBAPCMGILE_1_OFFSET UNITYSDK_OFFSET(0x1C49F2D0)
#define OFPMMJFPEBD_ICBAPCMGILE_OFFSET UNITYSDK_OFFSET(0x1C49F280)
#define OFPMMJFPEBD_IIBLNDECKMN_1_OFFSET UNITYSDK_OFFSET(0x1C49F230)
#define OFPMMJFPEBD_IIBLNDECKMN_OFFSET UNITYSDK_OFFSET(0x1C49F1E0)

inline static constexpr unsigned int OFPMMJFPEBD_TypeDefinitionIndex = 41564;

	class OFPMMJFPEBD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_AEAANNFKGFC()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "OFPMMJFPEBD")->GetStaticField(0x1DA00);
		}

		// static const ::System::Object PEGKIDLALHF; // 0x0
		// static const ::System::String* GJPNNCFPMGK; // 0x0
		// static const ::System::String* GDDNCOOPCMF; // 0x0
		// static const ::System::String* KNHJNAFPPAL; // 0x0
		// static const ::System::String* CAHJMOPMKLE; // 0x0
		// static const ::System::String* PNBHFOIJAIP; // 0x0
		// static const ::System::String* CMDACCHOACL; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFPMMJFPEBD_CCTOR_OFFSET))();
		}

		static ::ECPDFJJNDBI* HOBKJFMBIIE(::DDENCEMCKLN* a1)
		{
			return ((::ECPDFJJNDBI*(*)(::DDENCEMCKLN*))((::PBYTE)hIl2Cpp + OFPMMJFPEBD_HOBKJFMBIIE_OFFSET))(a1);
		}

		static ::System::Int32 IIBLNDECKMN(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + OFPMMJFPEBD_IIBLNDECKMN_OFFSET))(a1);
		}

		static ::System::Int64 IIBLNDECKMN_1(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + OFPMMJFPEBD_IIBLNDECKMN_1_OFFSET))(a1);
		}

		static ::System::Int32 ICBAPCMGILE(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + OFPMMJFPEBD_ICBAPCMGILE_OFFSET))(a1);
		}

		static ::System::Int64 ICBAPCMGILE_1(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + OFPMMJFPEBD_ICBAPCMGILE_1_OFFSET))(a1);
		}

	};
