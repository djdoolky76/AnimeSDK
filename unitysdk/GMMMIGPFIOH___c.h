#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMMMIGPFIOH;
namespace System { class Object; }

#define GMMMIGPFIOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D6C30)
#define GMMMIGPFIOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D6C70)
#define GMMMIGPFIOH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4D6C80)

	class GMMMIGPFIOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMMMIGPFIOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH___C_CTOR_OFFSET))(this);
		}

		::GMMMIGPFIOH* __cctor_b__23_0()
		{
			return ((::GMMMIGPFIOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMMIGPFIOH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
