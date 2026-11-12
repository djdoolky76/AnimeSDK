#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAJOMNJMJLE;
namespace System { class Object; }

#define OAJOMNJMJLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F09D8A0)
#define OAJOMNJMJLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F09D8D0)
#define OAJOMNJMJLE___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1F09D8E0)

inline static constexpr unsigned int OAJOMNJMJLE___c_TypeDefinitionIndex = 26736;

	class OAJOMNJMJLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAJOMNJMJLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJOMNJMJLE___C_CTOR_OFFSET))(this);
		}

		::OAJOMNJMJLE* __cctor_b__68_0()
		{
			return ((::OAJOMNJMJLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJOMNJMJLE___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
