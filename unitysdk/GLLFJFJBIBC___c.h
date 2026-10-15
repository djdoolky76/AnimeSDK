#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLLFJFJBIBC;
namespace System { class Object; }

#define GLLFJFJBIBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4AF0)
#define GLLFJFJBIBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4B30)
#define GLLFJFJBIBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4C4B40)

	class GLLFJFJBIBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLFJFJBIBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC___C_CTOR_OFFSET))(this);
		}

		::GLLFJFJBIBC* __cctor_b__23_0()
		{
			return ((::GLLFJFJBIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFJFJBIBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
