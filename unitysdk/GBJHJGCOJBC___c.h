#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBJHJGCOJBC;
namespace System { class Object; }

#define GBJHJGCOJBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42D300)
#define GBJHJGCOJBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42D340)
#define GBJHJGCOJBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E42D350)

inline static constexpr unsigned int GBJHJGCOJBC___c_TypeDefinitionIndex = 29422;

	class GBJHJGCOJBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBJHJGCOJBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJGCOJBC___C_CTOR_OFFSET))(this);
		}

		::GBJHJGCOJBC* __cctor_b__23_0()
		{
			return ((::GBJHJGCOJBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJGCOJBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
