#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJMCKLDMLDL;
namespace System { class Object; }

#define IJMCKLDMLDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2005CB10)
#define IJMCKLDMLDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2005CB50)
#define IJMCKLDMLDL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2005CB60)

inline static constexpr unsigned int IJMCKLDMLDL___c_TypeDefinitionIndex = 35808;

	class IJMCKLDMLDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x489A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJMCKLDMLDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL___C_CTOR_OFFSET))(this);
		}

		::IJMCKLDMLDL* __cctor_b__28_0()
		{
			return ((::IJMCKLDMLDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMCKLDMLDL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
