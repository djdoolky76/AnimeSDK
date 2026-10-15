#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDIKLACNOEJ;
namespace System { class Object; }

#define GDIKLACNOEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44C390)
#define GDIKLACNOEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44C3D0)
#define GDIKLACNOEJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E44C3E0)

inline static constexpr unsigned int GDIKLACNOEJ___c_TypeDefinitionIndex = 33090;

	class GDIKLACNOEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDIKLACNOEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKLACNOEJ___C_CTOR_OFFSET))(this);
		}

		::GDIKLACNOEJ* __cctor_b__23_0()
		{
			return ((::GDIKLACNOEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKLACNOEJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
