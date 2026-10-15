#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKLLLNDHJHI;
namespace System { class Object; }

#define JKLLLNDHJHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76FF40)
#define JKLLLNDHJHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76FF70)
#define JKLLLNDHJHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E76FF80)

	class JKLLLNDHJHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKLLLNDHJHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLLNDHJHI___C_CTOR_OFFSET))(this);
		}

		::JKLLLNDHJHI* __cctor_b__23_0()
		{
			return ((::JKLLLNDHJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLLNDHJHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
