#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAPHOALBKBH;
namespace System { class Object; }

#define LAPHOALBKBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20390EE0)
#define LAPHOALBKBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20390F20)
#define LAPHOALBKBH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20390F30)

inline static constexpr unsigned int LAPHOALBKBH___c_TypeDefinitionIndex = 28501;

	class LAPHOALBKBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAPHOALBKBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH___C_CTOR_OFFSET))(this);
		}

		::LAPHOALBKBH* __cctor_b__23_0()
		{
			return ((::LAPHOALBKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
