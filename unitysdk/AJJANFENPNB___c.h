#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJJANFENPNB;
namespace System { class Object; }

#define AJJANFENPNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C2D10)
#define AJJANFENPNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C2D40)
#define AJJANFENPNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3C2D50)

	class AJJANFENPNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJANFENPNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB___C_CTOR_OFFSET))(this);
		}

		::AJJANFENPNB* __cctor_b__28_0()
		{
			return ((::AJJANFENPNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJANFENPNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
