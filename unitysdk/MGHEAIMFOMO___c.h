#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGHEAIMFOMO;
namespace System { class Object; }

#define MGHEAIMFOMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA25B90)
#define MGHEAIMFOMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA25BD0)
#define MGHEAIMFOMO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA25BE0)

	class MGHEAIMFOMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGHEAIMFOMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO___C_CTOR_OFFSET))(this);
		}

		::MGHEAIMFOMO* __cctor_b__18_0()
		{
			return ((::MGHEAIMFOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
