#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JODCPJNHFDL;
namespace System { class Object; }

#define JODCPJNHFDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79EF40)
#define JODCPJNHFDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79EF70)
#define JODCPJNHFDL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E79EF80)

	class JODCPJNHFDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CD20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JODCPJNHFDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODCPJNHFDL___C_CTOR_OFFSET))(this);
		}

		::JODCPJNHFDL* __cctor_b__23_0()
		{
			return ((::JODCPJNHFDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JODCPJNHFDL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
