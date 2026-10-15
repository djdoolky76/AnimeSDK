#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFIKFCJEDNP;
namespace System { class Object; }

#define OFIKFCJEDNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1B2B0)
#define OFIKFCJEDNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1B2F0)
#define OFIKFCJEDNP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE1B300)

inline static constexpr unsigned int OFIKFCJEDNP___c_TypeDefinitionIndex = 27229;

	class OFIKFCJEDNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFIKFCJEDNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIKFCJEDNP___C_CTOR_OFFSET))(this);
		}

		::OFIKFCJEDNP* __cctor_b__23_0()
		{
			return ((::OFIKFCJEDNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIKFCJEDNP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
