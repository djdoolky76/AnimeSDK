#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHKCBNKJELL;
namespace System { class Object; }

#define HHKCBNKJELL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20513A30)
#define HHKCBNKJELL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20513A60)
#define HHKCBNKJELL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20513A70)

inline static constexpr unsigned int HHKCBNKJELL___c_TypeDefinitionIndex = 34714;

	class HHKCBNKJELL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHKCBNKJELL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKCBNKJELL___C_CTOR_OFFSET))(this);
		}

		::HHKCBNKJELL* __cctor_b__18_0()
		{
			return ((::HHKCBNKJELL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKCBNKJELL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
