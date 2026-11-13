#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONKHCFLOELJ;
namespace System { class Object; }

#define ONKHCFLOELJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2FC70)
#define ONKHCFLOELJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2FCB0)
#define ONKHCFLOELJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC2FCC0)

inline static constexpr unsigned int ONKHCFLOELJ___c_TypeDefinitionIndex = 33774;

	class ONKHCFLOELJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONKHCFLOELJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKHCFLOELJ___C_CTOR_OFFSET))(this);
		}

		::ONKHCFLOELJ* __cctor_b__23_0()
		{
			return ((::ONKHCFLOELJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKHCFLOELJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
