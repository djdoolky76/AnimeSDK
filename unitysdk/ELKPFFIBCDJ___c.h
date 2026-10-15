#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define ELKPFFIBCDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x155269D0)
#define ELKPFFIBCDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15526A10)
#define ELKPFFIBCDJ___C__TRANSLATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x15526A20)

	class ELKPFFIBCDJ___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::Object*, ::System::Object*, ::System::Object*>** StaticGet___9__0_0()
		{
			return (::System::Func_3<::System::Object*, ::System::Object*, ::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48FD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48FD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELKPFFIBCDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKPFFIBCDJ___C_CTOR_OFFSET))(this);
		}

		::APDMIIEDMLI_CFHOMFLPNNO* _Translate_b__0_0(::APDMIIEDMLI_CFHOMFLPNNO* a1, ::APDMIIEDMLI_CFHOMFLPNNO* a2)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::PVOID, ::APDMIIEDMLI_CFHOMFLPNNO*, ::APDMIIEDMLI_CFHOMFLPNNO*))((::PBYTE)hIl2Cpp + ELKPFFIBCDJ___C__TRANSLATE_B__0_0_OFFSET))(this, a1, a2);
		}

	};
