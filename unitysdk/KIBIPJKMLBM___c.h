#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIBIPJKMLBM;
namespace System { class Object; }

#define KIBIPJKMLBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E854450)
#define KIBIPJKMLBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E854480)
#define KIBIPJKMLBM___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E854490)

	class KIBIPJKMLBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIBIPJKMLBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBIPJKMLBM___C_CTOR_OFFSET))(this);
		}

		::KIBIPJKMLBM* __cctor_b__63_0()
		{
			return ((::KIBIPJKMLBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBIPJKMLBM___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
