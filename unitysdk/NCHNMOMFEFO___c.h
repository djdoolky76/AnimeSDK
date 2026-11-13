#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCHNMOMFEFO;
namespace System { class Object; }

#define NCHNMOMFEFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202F3B20)
#define NCHNMOMFEFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202F3B50)
#define NCHNMOMFEFO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x202F3B60)

inline static constexpr unsigned int NCHNMOMFEFO___c_TypeDefinitionIndex = 32372;

	class NCHNMOMFEFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CF80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCHNMOMFEFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNMOMFEFO___C_CTOR_OFFSET))(this);
		}

		::NCHNMOMFEFO* __cctor_b__18_0()
		{
			return ((::NCHNMOMFEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHNMOMFEFO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
