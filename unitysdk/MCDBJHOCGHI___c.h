#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDBJHOCGHI;
namespace System { class Object; }

#define MCDBJHOCGHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C4A60)
#define MCDBJHOCGHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C4AA0)
#define MCDBJHOCGHI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9C4AB0)

inline static constexpr unsigned int MCDBJHOCGHI___c_TypeDefinitionIndex = 29594;

	class MCDBJHOCGHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCDBJHOCGHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI___C_CTOR_OFFSET))(this);
		}

		::MCDBJHOCGHI* __cctor_b__28_0()
		{
			return ((::MCDBJHOCGHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
