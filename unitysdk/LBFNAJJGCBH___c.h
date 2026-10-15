#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBFNAJJGCBH;
namespace System { class Object; }

#define LBFNAJJGCBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DCA70)
#define LBFNAJJGCBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DCAB0)
#define LBFNAJJGCBH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E8DCAC0)

	class LBFNAJJGCBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBFNAJJGCBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFNAJJGCBH___C_CTOR_OFFSET))(this);
		}

		::LBFNAJJGCBH* __cctor_b__43_0()
		{
			return ((::LBFNAJJGCBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFNAJJGCBH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
