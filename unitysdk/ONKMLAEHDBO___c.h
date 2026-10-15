#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONKMLAEHDBO;
namespace System { class Object; }

#define ONKMLAEHDBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECD8E0)
#define ONKMLAEHDBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DECD920)
#define ONKMLAEHDBO___C___CCTOR_B__64_0_OFFSET UNITYSDK_OFFSET(0x1DECD930)

inline static constexpr unsigned int ONKMLAEHDBO___c_TypeDefinitionIndex = 29124;

	class ONKMLAEHDBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONKMLAEHDBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMLAEHDBO___C_CTOR_OFFSET))(this);
		}

		::ONKMLAEHDBO* __cctor_b__64_0()
		{
			return ((::ONKMLAEHDBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMLAEHDBO___C___CCTOR_B__64_0_OFFSET))(this);
		}

	};
