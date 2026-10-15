#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCKHEKIFHLO;
namespace System { class Object; }

#define JCKHEKIFHLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E703AA0)
#define JCKHEKIFHLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E703AE0)
#define JCKHEKIFHLO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E703AF0)

	class JCKHEKIFHLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCKHEKIFHLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKHEKIFHLO___C_CTOR_OFFSET))(this);
		}

		::JCKHEKIFHLO* __cctor_b__38_0()
		{
			return ((::JCKHEKIFHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKHEKIFHLO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
