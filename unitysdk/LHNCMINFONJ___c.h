#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHNCMINFONJ;
namespace System { class Object; }

#define LHNCMINFONJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93AEE0)
#define LHNCMINFONJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93AF20)
#define LHNCMINFONJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E93AF30)

inline static constexpr unsigned int LHNCMINFONJ___c_TypeDefinitionIndex = 29204;

	class LHNCMINFONJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHNCMINFONJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNCMINFONJ___C_CTOR_OFFSET))(this);
		}

		::LHNCMINFONJ* __cctor_b__23_0()
		{
			return ((::LHNCMINFONJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNCMINFONJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
