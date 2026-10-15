#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOMGGGKLGLP;
namespace System { class Object; }

#define FOMGGGKLGLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FFD30)
#define FOMGGGKLGLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FFD70)
#define FOMGGGKLGLP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3FFD80)

	class FOMGGGKLGLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66380);
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
