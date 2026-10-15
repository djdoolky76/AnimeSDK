#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIBMBDDOGBH;
namespace System { class Object; }

#define CIBMBDDOGBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CE7D0)
#define CIBMBDDOGBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CE810)
#define CIBMBDDOGBH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0CE820)

	class CIBMBDDOGBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIBMBDDOGBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMBDDOGBH___C_CTOR_OFFSET))(this);
		}

		::CIBMBDDOGBH* __cctor_b__23_0()
		{
			return ((::CIBMBDDOGBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMBDDOGBH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
