#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLEKOLHCNIE;
namespace System { class Object; }

#define DLEKOLHCNIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B9560)
#define DLEKOLHCNIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B9590)
#define DLEKOLHCNIE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1B95A0)

inline static constexpr unsigned int DLEKOLHCNIE___c_TypeDefinitionIndex = 33709;

	class DLEKOLHCNIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLEKOLHCNIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE___C_CTOR_OFFSET))(this);
		}

		::DLEKOLHCNIE* __cctor_b__38_0()
		{
			return ((::DLEKOLHCNIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEKOLHCNIE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
