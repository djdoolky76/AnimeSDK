#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIAGIOBGGNK;
namespace System { class Object; }

#define KIAGIOBGGNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E851B70)
#define KIAGIOBGGNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E851BB0)
#define KIAGIOBGGNK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E851BC0)

	class KIAGIOBGGNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAGIOBGGNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK___C_CTOR_OFFSET))(this);
		}

		::KIAGIOBGGNK* __cctor_b__33_0()
		{
			return ((::KIAGIOBGGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAGIOBGGNK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
