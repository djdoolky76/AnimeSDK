#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEKLEHPFHMA;
namespace System { class Object; }

#define LEKLEHPFHMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9361F0)
#define LEKLEHPFHMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E936230)
#define LEKLEHPFHMA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E936240)

	class LEKLEHPFHMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x397C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEKLEHPFHMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA___C_CTOR_OFFSET))(this);
		}

		::LEKLEHPFHMA* __cctor_b__28_0()
		{
			return ((::LEKLEHPFHMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
