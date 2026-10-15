#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIMHLPBEDDH;
namespace System { class Object; }

#define IIMHLPBEDDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68BFA0)
#define IIMHLPBEDDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68BFE0)
#define IIMHLPBEDDH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E68BFF0)

	class IIMHLPBEDDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIMHLPBEDDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH___C_CTOR_OFFSET))(this);
		}

		::IIMHLPBEDDH* __cctor_b__28_0()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
