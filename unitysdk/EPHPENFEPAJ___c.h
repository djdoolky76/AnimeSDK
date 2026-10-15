#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHPENFEPAJ;
namespace System { class Object; }

#define EPHPENFEPAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E0230)
#define EPHPENFEPAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E0270)
#define EPHPENFEPAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2E0280)

inline static constexpr unsigned int EPHPENFEPAJ___c_TypeDefinitionIndex = 32305;

	class EPHPENFEPAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x496F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPHPENFEPAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ___C_CTOR_OFFSET))(this);
		}

		::EPHPENFEPAJ* __cctor_b__23_0()
		{
			return ((::EPHPENFEPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHPENFEPAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
