#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIBGMKIJNDK;
namespace System { class Object; }

#define EIBGMKIJNDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E277AD0)
#define EIBGMKIJNDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E277B10)
#define EIBGMKIJNDK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E277B20)

inline static constexpr unsigned int EIBGMKIJNDK___c_TypeDefinitionIndex = 31373;

	class EIBGMKIJNDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIBGMKIJNDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK___C_CTOR_OFFSET))(this);
		}

		::EIBGMKIJNDK* __cctor_b__33_0()
		{
			return ((::EIBGMKIJNDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
