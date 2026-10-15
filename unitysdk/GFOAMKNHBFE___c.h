#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFOAMKNHBFE;
namespace System { class Object; }

#define GFOAMKNHBFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E475080)
#define GFOAMKNHBFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4750C0)
#define GFOAMKNHBFE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4750D0)

inline static constexpr unsigned int GFOAMKNHBFE___c_TypeDefinitionIndex = 32495;

	class GFOAMKNHBFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFOAMKNHBFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOAMKNHBFE___C_CTOR_OFFSET))(this);
		}

		::GFOAMKNHBFE* __cctor_b__33_0()
		{
			return ((::GFOAMKNHBFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOAMKNHBFE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
