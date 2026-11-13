#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFHPBLANIKG;
namespace System { class Object; }

#define BFHPBLANIKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA089E0)
#define BFHPBLANIKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA08A20)
#define BFHPBLANIKG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA08A30)

inline static constexpr unsigned int BFHPBLANIKG___c_TypeDefinitionIndex = 32560;

	class BFHPBLANIKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C660);
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
