#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFHPBLANIKG;
namespace System { class Object; }

#define BFHPBLANIKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6D900)
#define BFHPBLANIKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6D940)
#define BFHPBLANIKG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA6D950)

inline static constexpr unsigned int BFHPBLANIKG___c_TypeDefinitionIndex = 31647;

	class BFHPBLANIKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x422C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFHPBLANIKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHPBLANIKG___C_CTOR_OFFSET))(this);
		}

		::BFHPBLANIKG* __cctor_b__23_0()
		{
			return ((::BFHPBLANIKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHPBLANIKG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
