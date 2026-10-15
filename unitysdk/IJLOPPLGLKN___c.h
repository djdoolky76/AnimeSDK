#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFHPBLANIKG;
class IOAFKPDEIEA;
namespace System { class Action; }
namespace System { class Object; }

#define IJLOPPLGLKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1646EDE0)
#define IJLOPPLGLKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1646EE20)
#define IJLOPPLGLKN___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET UNITYSDK_OFFSET(0x1646EE30)
#define IJLOPPLGLKN___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET UNITYSDK_OFFSET(0x1646EE40)

	class IJLOPPLGLKN___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x610C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x610C8);
		}

		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x610D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C_CTOR_OFFSET))(this);
		}

		::System::Void _SendPixAirGetDataCsReq_b__5_0(::IOAFKPDEIEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOAFKPDEIEA*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET))(this, a1);
		}

		::System::Void _SendPixAirQuitStageCsReq_b__9_0(::BFHPBLANIKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFHPBLANIKG*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET))(this, a1);
		}

	};
