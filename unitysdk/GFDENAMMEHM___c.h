#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFDENAMMEHM;
namespace System { class Object; }

#define GFDENAMMEHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E465A10)
#define GFDENAMMEHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E465A40)
#define GFDENAMMEHM___C___CCTOR_B__61_0_OFFSET UNITYSDK_OFFSET(0x1E465A50)

	class GFDENAMMEHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x135F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFDENAMMEHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDENAMMEHM___C_CTOR_OFFSET))(this);
		}

		::GFDENAMMEHM* __cctor_b__61_0()
		{
			return ((::GFDENAMMEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDENAMMEHM___C___CCTOR_B__61_0_OFFSET))(this);
		}

	};
