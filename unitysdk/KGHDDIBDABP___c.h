#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGHDDIBDABP;
namespace System { class Object; }

#define KGHDDIBDABP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB50F60)
#define KGHDDIBDABP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB50FA0)
#define KGHDDIBDABP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FB50FB0)

inline static constexpr unsigned int KGHDDIBDABP___c_TypeDefinitionIndex = 28095;

	class KGHDDIBDABP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGHDDIBDABP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP___C_CTOR_OFFSET))(this);
		}

		::KGHDDIBDABP* __cctor_b__43_0()
		{
			return ((::KGHDDIBDABP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
