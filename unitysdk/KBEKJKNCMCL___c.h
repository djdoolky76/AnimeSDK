#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBEKJKNCMCL;
namespace System { class Object; }

#define KBEKJKNCMCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EDFA0)
#define KBEKJKNCMCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EDFE0)
#define KBEKJKNCMCL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7EDFF0)

	class KBEKJKNCMCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEKJKNCMCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL___C_CTOR_OFFSET))(this);
		}

		::KBEKJKNCMCL* __cctor_b__23_0()
		{
			return ((::KBEKJKNCMCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
