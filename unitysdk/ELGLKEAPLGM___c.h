#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELGLKEAPLGM;
namespace System { class Object; }

#define ELGLKEAPLGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D0F40)
#define ELGLKEAPLGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D0F80)
#define ELGLKEAPLGM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2D0F90)

	class ELGLKEAPLGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELGLKEAPLGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGLKEAPLGM___C_CTOR_OFFSET))(this);
		}

		::ELGLKEAPLGM* __cctor_b__23_0()
		{
			return ((::ELGLKEAPLGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGLKEAPLGM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
