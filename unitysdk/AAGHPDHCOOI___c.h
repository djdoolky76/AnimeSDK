#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAGHPDHCOOI;
namespace System { class Object; }

#define AAGHPDHCOOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFBCB00)
#define AAGHPDHCOOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBCB40)
#define AAGHPDHCOOI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EFBCB50)

inline static constexpr unsigned int AAGHPDHCOOI___c_TypeDefinitionIndex = 30418;

	class AAGHPDHCOOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAGHPDHCOOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHPDHCOOI___C_CTOR_OFFSET))(this);
		}

		::AAGHPDHCOOI* __cctor_b__23_0()
		{
			return ((::AAGHPDHCOOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGHPDHCOOI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
