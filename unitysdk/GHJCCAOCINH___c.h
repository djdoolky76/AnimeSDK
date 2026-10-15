#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHJCCAOCINH;
namespace System { class Object; }

#define GHJCCAOCINH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45E400)
#define GHJCCAOCINH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45E440)
#define GHJCCAOCINH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E45E450)

inline static constexpr unsigned int GHJCCAOCINH___c_TypeDefinitionIndex = 34356;

	class GHJCCAOCINH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJCCAOCINH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH___C_CTOR_OFFSET))(this);
		}

		::GHJCCAOCINH* __cctor_b__28_0()
		{
			return ((::GHJCCAOCINH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
