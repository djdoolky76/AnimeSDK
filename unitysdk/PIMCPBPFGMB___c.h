#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHCEFHABPDI;
class DCKGNOHECDC;
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIMCPBPFGMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC270100)
#define PIMCPBPFGMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC270140)
#define PIMCPBPFGMB___C__GET_ISSESSIONSETTLED_B__20_0_OFFSET UNITYSDK_OFFSET(0xC270150)
#define PIMCPBPFGMB___C___CTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0xC2701A0)
#define PIMCPBPFGMB___C___CTOR_B__53_2_OFFSET UNITYSDK_OFFSET(0xC270200)

	class PIMCPBPFGMB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ItemDisplayData*, ::AHCEFHABPDI*>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::RPG::Client::ItemDisplayData*, ::AHCEFHABPDI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F830);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F838);
		}

		static ::System::Func_2<::RPG::Client::ItemDisplayData*, ::System::UInt32>** StaticGet___9__53_2()
		{
			return (::System::Func_2<::RPG::Client::ItemDisplayData*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F840);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIMCPBPFGMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsSessionSettled_b__20_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + PIMCPBPFGMB___C__GET_ISSESSIONSETTLED_B__20_0_OFFSET))(this, a1);
		}

		::AHCEFHABPDI* __ctor_b__53_0(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::AHCEFHABPDI*(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + PIMCPBPFGMB___C___CTOR_B__53_0_OFFSET))(this, a1);
		}

		::System::UInt32 __ctor_b__53_2(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + PIMCPBPFGMB___C___CTOR_B__53_2_OFFSET))(this, a1);
		}

	};
