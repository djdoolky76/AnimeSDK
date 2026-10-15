#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEIAEAEGEBJ;
namespace System { class Object; }

#define JEIAEAEGEBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71D020)
#define JEIAEAEGEBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71D060)
#define JEIAEAEGEBJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E71D070)

	class JEIAEAEGEBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEIAEAEGEBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ___C_CTOR_OFFSET))(this);
		}

		::JEIAEAEGEBJ* __cctor_b__38_0()
		{
			return ((::JEIAEAEGEBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
