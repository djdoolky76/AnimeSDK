#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFGLEOIIJBD;
namespace System { class Object; }

#define OFGLEOIIJBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0EBDC0)
#define OFGLEOIIJBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0EBE00)
#define OFGLEOIIJBD___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x1F0EBE10)

inline static constexpr unsigned int OFGLEOIIJBD___c_TypeDefinitionIndex = 27748;

	class OFGLEOIIJBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFGLEOIIJBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGLEOIIJBD___C_CTOR_OFFSET))(this);
		}

		::OFGLEOIIJBD* __cctor_b__88_0()
		{
			return ((::OFGLEOIIJBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGLEOIIJBD___C___CCTOR_B__88_0_OFFSET))(this);
		}

	};
