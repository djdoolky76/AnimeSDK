#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALLNMAAOELO;
namespace System { class Object; }

#define ALLNMAAOELO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E512630)
#define ALLNMAAOELO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E512670)
#define ALLNMAAOELO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E512680)

	class ALLNMAAOELO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALLNMAAOELO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLNMAAOELO___C_CTOR_OFFSET))(this);
		}

		::ALLNMAAOELO* __cctor_b__23_0()
		{
			return ((::ALLNMAAOELO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLNMAAOELO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
