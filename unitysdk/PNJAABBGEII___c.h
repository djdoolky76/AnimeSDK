#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNJAABBGEII;
namespace System { class Object; }

#define PNJAABBGEII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBC680)
#define PNJAABBGEII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBC6C0)
#define PNJAABBGEII___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DFBC6D0)

	class PNJAABBGEII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNJAABBGEII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJAABBGEII___C_CTOR_OFFSET))(this);
		}

		::PNJAABBGEII* __cctor_b__38_0()
		{
			return ((::PNJAABBGEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJAABBGEII___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
