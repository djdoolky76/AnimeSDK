#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAFJLIIKIIF;
namespace System { class Object; }

#define MAFJLIIKIIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8ED0)
#define MAFJLIIKIIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8F10)
#define MAFJLIIKIIF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9D8F20)

	class MAFJLIIKIIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAFJLIIKIIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJLIIKIIF___C_CTOR_OFFSET))(this);
		}

		::MAFJLIIKIIF* __cctor_b__23_0()
		{
			return ((::MAFJLIIKIIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJLIIKIIF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
