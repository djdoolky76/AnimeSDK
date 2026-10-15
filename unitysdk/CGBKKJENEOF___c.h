#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGBKKJENEOF;
namespace System { class Object; }

#define CGBKKJENEOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0ABF00)
#define CGBKKJENEOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0ABF30)
#define CGBKKJENEOF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0ABF40)

inline static constexpr unsigned int CGBKKJENEOF___c_TypeDefinitionIndex = 33659;

	class CGBKKJENEOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBKKJENEOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKJENEOF___C_CTOR_OFFSET))(this);
		}

		::CGBKKJENEOF* __cctor_b__23_0()
		{
			return ((::CGBKKJENEOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKJENEOF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
