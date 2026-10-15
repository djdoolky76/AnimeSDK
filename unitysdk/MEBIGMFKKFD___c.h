#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEBIGMFKKFD;
namespace System { class Object; }

#define MEBIGMFKKFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA08790)
#define MEBIGMFKKFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA087C0)
#define MEBIGMFKKFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA087D0)

	class MEBIGMFKKFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEBIGMFKKFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD___C_CTOR_OFFSET))(this);
		}

		::MEBIGMFKKFD* __cctor_b__28_0()
		{
			return ((::MEBIGMFKKFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
