#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGBJDKIEDJL;
namespace System { class Object; }

#define IGBJDKIEDJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61B550)
#define IGBJDKIEDJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61B590)
#define IGBJDKIEDJL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E61B5A0)

inline static constexpr unsigned int IGBJDKIEDJL___c_TypeDefinitionIndex = 30824;

	class IGBJDKIEDJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGBJDKIEDJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDKIEDJL___C_CTOR_OFFSET))(this);
		}

		::IGBJDKIEDJL* __cctor_b__23_0()
		{
			return ((::IGBJDKIEDJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDKIEDJL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
