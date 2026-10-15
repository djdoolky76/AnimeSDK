#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIKGKBHIILL;
namespace System { class Object; }

#define OIKGKBHIILL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE45F00)
#define OIKGKBHIILL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE45F40)
#define OIKGKBHIILL___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1DE45F50)

inline static constexpr unsigned int OIKGKBHIILL___c_TypeDefinitionIndex = 32572;

	class OIKGKBHIILL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIKGKBHIILL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKGKBHIILL___C_CTOR_OFFSET))(this);
		}

		::OIKGKBHIILL* __cctor_b__42_0()
		{
			return ((::OIKGKBHIILL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKGKBHIILL___C___CCTOR_B__42_0_OFFSET))(this);
		}

	};
