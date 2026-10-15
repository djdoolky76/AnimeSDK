#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGHOCEGBDCC;
namespace System { class Object; }

#define JGHOCEGBDCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73A0C0)
#define JGHOCEGBDCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73A100)
#define JGHOCEGBDCC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E73A110)

inline static constexpr unsigned int JGHOCEGBDCC___c_TypeDefinitionIndex = 30333;

	class JGHOCEGBDCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGHOCEGBDCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHOCEGBDCC___C_CTOR_OFFSET))(this);
		}

		::JGHOCEGBDCC* __cctor_b__18_0()
		{
			return ((::JGHOCEGBDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHOCEGBDCC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
