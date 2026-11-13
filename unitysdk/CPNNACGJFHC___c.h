#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPNNACGJFHC;
namespace System { class Object; }

#define CPNNACGJFHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204F0500)
#define CPNNACGJFHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204F0540)
#define CPNNACGJFHC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x204F0550)

inline static constexpr unsigned int CPNNACGJFHC___c_TypeDefinitionIndex = 26007;

	class CPNNACGJFHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNNACGJFHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNACGJFHC___C_CTOR_OFFSET))(this);
		}

		::CPNNACGJFHC* __cctor_b__23_0()
		{
			return ((::CPNNACGJFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNNACGJFHC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
