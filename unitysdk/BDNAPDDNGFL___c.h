#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDNAPDDNGFL;
namespace System { class Object; }

#define BDNAPDDNGFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD17C80)
#define BDNAPDDNGFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD17CC0)
#define BDNAPDDNGFL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD17CD0)

inline static constexpr unsigned int BDNAPDDNGFL___c_TypeDefinitionIndex = 25880;

	class BDNAPDDNGFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDNAPDDNGFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNAPDDNGFL___C_CTOR_OFFSET))(this);
		}

		::BDNAPDDNGFL* __cctor_b__23_0()
		{
			return ((::BDNAPDDNGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNAPDDNGFL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
