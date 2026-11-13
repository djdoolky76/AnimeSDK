#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOMGGGKLGLP;
namespace System { class Object; }

#define FOMGGGKLGLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB8A280)
#define FOMGGGKLGLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB8A2C0)
#define FOMGGGKLGLP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB8A2D0)

inline static constexpr unsigned int FOMGGGKLGLP___c_TypeDefinitionIndex = 26860;

	class FOMGGGKLGLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOMGGGKLGLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGGGKLGLP___C_CTOR_OFFSET))(this);
		}

		::FOMGGGKLGLP* __cctor_b__23_0()
		{
			return ((::FOMGGGKLGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMGGGKLGLP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
