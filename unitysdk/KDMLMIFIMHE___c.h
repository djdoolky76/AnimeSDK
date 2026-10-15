#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMLMIFIMHE;
namespace System { class Object; }

#define KDMLMIFIMHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8053C0)
#define KDMLMIFIMHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8053F0)
#define KDMLMIFIMHE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E805400)

inline static constexpr unsigned int KDMLMIFIMHE___c_TypeDefinitionIndex = 28522;

	class KDMLMIFIMHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x114B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMLMIFIMHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE___C_CTOR_OFFSET))(this);
		}

		::KDMLMIFIMHE* __cctor_b__43_0()
		{
			return ((::KDMLMIFIMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
