#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBOFFJNBFMI;
namespace System { class Object; }

#define PBOFFJNBFMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED1810)
#define PBOFFJNBFMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED1850)
#define PBOFFJNBFMI___C___CCTOR_B__178_0_OFFSET UNITYSDK_OFFSET(0x1DED1860)

inline static constexpr unsigned int PBOFFJNBFMI___c_TypeDefinitionIndex = 28709;

	class PBOFFJNBFMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBOFFJNBFMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOFFJNBFMI___C_CTOR_OFFSET))(this);
		}

		::PBOFFJNBFMI* __cctor_b__178_0()
		{
			return ((::PBOFFJNBFMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOFFJNBFMI___C___CCTOR_B__178_0_OFFSET))(this);
		}

	};
