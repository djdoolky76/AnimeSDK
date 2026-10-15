#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKLEOKANBFE;
namespace System { class Object; }

#define AKLEOKANBFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D01F0)
#define AKLEOKANBFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D0220)
#define AKLEOKANBFE___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E3D0230)

	class AKLEOKANBFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLEOKANBFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLEOKANBFE___C_CTOR_OFFSET))(this);
		}

		::AKLEOKANBFE* __cctor_b__58_0()
		{
			return ((::AKLEOKANBFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLEOKANBFE___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
