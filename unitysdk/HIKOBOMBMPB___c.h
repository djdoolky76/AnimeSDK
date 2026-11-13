#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIKOBOMBMPB;
namespace System { class Object; }

#define HIKOBOMBMPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205242E0)
#define HIKOBOMBMPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20524320)
#define HIKOBOMBMPB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20524330)

inline static constexpr unsigned int HIKOBOMBMPB___c_TypeDefinitionIndex = 33588;

	class HIKOBOMBMPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIKOBOMBMPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKOBOMBMPB___C_CTOR_OFFSET))(this);
		}

		::HIKOBOMBMPB* __cctor_b__23_0()
		{
			return ((::HIKOBOMBMPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKOBOMBMPB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
