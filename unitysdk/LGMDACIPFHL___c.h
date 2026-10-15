#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGMDACIPFHL;
namespace System { class Object; }

#define LGMDACIPFHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E956CC0)
#define LGMDACIPFHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E956CF0)
#define LGMDACIPFHL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E956D00)

	class LGMDACIPFHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGMDACIPFHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL___C_CTOR_OFFSET))(this);
		}

		::LGMDACIPFHL* __cctor_b__33_0()
		{
			return ((::LGMDACIPFHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
