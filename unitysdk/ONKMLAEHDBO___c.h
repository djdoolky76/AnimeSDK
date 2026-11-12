#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONKMLAEHDBO;
namespace System { class Object; }

#define ONKMLAEHDBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F195EC0)
#define ONKMLAEHDBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F195F00)
#define ONKMLAEHDBO___C___CCTOR_B__72_0_OFFSET UNITYSDK_OFFSET(0x1F195F10)

inline static constexpr unsigned int ONKMLAEHDBO___c_TypeDefinitionIndex = 29720;

	class ONKMLAEHDBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONKMLAEHDBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMLAEHDBO___C_CTOR_OFFSET))(this);
		}

		::ONKMLAEHDBO* __cctor_b__72_0()
		{
			return ((::ONKMLAEHDBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKMLAEHDBO___C___CCTOR_B__72_0_OFFSET))(this);
		}

	};
