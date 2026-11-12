#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKIDLFGHOPP;
namespace System { class Object; }

#define GKIDLFGHOPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7A8D10)
#define GKIDLFGHOPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A8D40)
#define GKIDLFGHOPP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7A8D50)

inline static constexpr unsigned int GKIDLFGHOPP___c_TypeDefinitionIndex = 26817;

	class GKIDLFGHOPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x153A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKIDLFGHOPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP___C_CTOR_OFFSET))(this);
		}

		::GKIDLFGHOPP* __cctor_b__28_0()
		{
			return ((::GKIDLFGHOPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIDLFGHOPP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
