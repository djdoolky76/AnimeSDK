#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIJBCJPELBG;
namespace System { class Object; }

#define GIJBCJPELBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49BA20)
#define GIJBCJPELBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49BA60)
#define GIJBCJPELBG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E49BA70)

	class GIJBCJPELBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIJBCJPELBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJBCJPELBG___C_CTOR_OFFSET))(this);
		}

		::GIJBCJPELBG* __cctor_b__33_0()
		{
			return ((::GIJBCJPELBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJBCJPELBG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
