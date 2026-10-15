#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCEAHPDAPFC;
namespace System { class Object; }

#define OCEAHPDAPFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE121B0)
#define OCEAHPDAPFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE121E0)
#define OCEAHPDAPFC___C___CCTOR_B__76_0_OFFSET UNITYSDK_OFFSET(0x1DE121F0)

	class OCEAHPDAPFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEAHPDAPFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEAHPDAPFC___C_CTOR_OFFSET))(this);
		}

		::OCEAHPDAPFC* __cctor_b__76_0()
		{
			return ((::OCEAHPDAPFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEAHPDAPFC___C___CCTOR_B__76_0_OFFSET))(this);
		}

	};
