#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IACEIJKMLLN;
namespace System { class Object; }

#define IACEIJKMLLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E603520)
#define IACEIJKMLLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E603560)
#define IACEIJKMLLN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E603570)

	class IACEIJKMLLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IACEIJKMLLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEIJKMLLN___C_CTOR_OFFSET))(this);
		}

		::IACEIJKMLLN* __cctor_b__23_0()
		{
			return ((::IACEIJKMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACEIJKMLLN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
