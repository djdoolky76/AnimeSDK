#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLFNCLPCJGO;
namespace System { class Object; }

#define KLFNCLPCJGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88A270)
#define KLFNCLPCJGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88A2A0)
#define KLFNCLPCJGO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E88A2B0)

	class KLFNCLPCJGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLFNCLPCJGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFNCLPCJGO___C_CTOR_OFFSET))(this);
		}

		::KLFNCLPCJGO* __cctor_b__33_0()
		{
			return ((::KLFNCLPCJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFNCLPCJGO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
