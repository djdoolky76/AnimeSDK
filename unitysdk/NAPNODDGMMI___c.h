#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAPNODDGMMI;
namespace System { class Object; }

#define NAPNODDGMMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201543C0)
#define NAPNODDGMMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201543F0)
#define NAPNODDGMMI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x20154400)

inline static constexpr unsigned int NAPNODDGMMI___c_TypeDefinitionIndex = 27869;

	class NAPNODDGMMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPNODDGMMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPNODDGMMI___C_CTOR_OFFSET))(this);
		}

		::NAPNODDGMMI* __cctor_b__43_0()
		{
			return ((::NAPNODDGMMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPNODDGMMI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
