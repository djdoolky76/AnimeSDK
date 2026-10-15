#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIBGMKIJNDK;
namespace System { class Object; }

#define EIBGMKIJNDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5140)
#define EIBGMKIJNDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5180)
#define EIBGMKIJNDK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2A5190)

inline static constexpr unsigned int EIBGMKIJNDK___c_TypeDefinitionIndex = 31373;

	class EIBGMKIJNDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x492F0);
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
