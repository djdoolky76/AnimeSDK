#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHHFAMDCDPK;
namespace System { class Object; }

#define DHHFAMDCDPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F491480)
#define DHHFAMDCDPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4914C0)
#define DHHFAMDCDPK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4914D0)

inline static constexpr unsigned int DHHFAMDCDPK___c_TypeDefinitionIndex = 32734;

	class DHHFAMDCDPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHHFAMDCDPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHFAMDCDPK___C_CTOR_OFFSET))(this);
		}

		::DHHFAMDCDPK* __cctor_b__23_0()
		{
			return ((::DHHFAMDCDPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHFAMDCDPK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
