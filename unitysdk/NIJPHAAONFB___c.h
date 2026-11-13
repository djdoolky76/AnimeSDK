#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIJPHAAONFB;
namespace System { class Object; }

#define NIJPHAAONFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC9D90)
#define NIJPHAAONFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC9DD0)
#define NIJPHAAONFB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAC9DE0)

inline static constexpr unsigned int NIJPHAAONFB___c_TypeDefinitionIndex = 30595;

	class NIJPHAAONFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIJPHAAONFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB___C_CTOR_OFFSET))(this);
		}

		::NIJPHAAONFB* __cctor_b__28_0()
		{
			return ((::NIJPHAAONFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
