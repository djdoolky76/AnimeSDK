#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEMMJHDFOLM;
namespace System { class Object; }

#define PEMMJHDFOLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E6E0)
#define PEMMJHDFOLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E710)
#define PEMMJHDFOLM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF1E720)

	class PEMMJHDFOLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEMMJHDFOLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMMJHDFOLM___C_CTOR_OFFSET))(this);
		}

		::PEMMJHDFOLM* __cctor_b__18_0()
		{
			return ((::PEMMJHDFOLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMMJHDFOLM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
