#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJFJACCGDGA;
namespace System { class Object; }

#define EJFJACCGDGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5998A0)
#define EJFJACCGDGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5998D0)
#define EJFJACCGDGA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5998E0)

inline static constexpr unsigned int EJFJACCGDGA___c_TypeDefinitionIndex = 34988;

	class EJFJACCGDGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x450B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJFJACCGDGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFJACCGDGA___C_CTOR_OFFSET))(this);
		}

		::EJFJACCGDGA* __cctor_b__23_0()
		{
			return ((::EJFJACCGDGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFJACCGDGA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
