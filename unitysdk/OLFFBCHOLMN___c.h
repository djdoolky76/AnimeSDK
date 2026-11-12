#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLFFBCHOLMN;
namespace System { class Object; }

#define OLFFBCHOLMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14EC40)
#define OLFFBCHOLMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F14EC80)
#define OLFFBCHOLMN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F14EC90)

inline static constexpr unsigned int OLFFBCHOLMN___c_TypeDefinitionIndex = 32358;

	class OLFFBCHOLMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLFFBCHOLMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN___C_CTOR_OFFSET))(this);
		}

		::OLFFBCHOLMN* __cctor_b__33_0()
		{
			return ((::OLFFBCHOLMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFFBCHOLMN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
