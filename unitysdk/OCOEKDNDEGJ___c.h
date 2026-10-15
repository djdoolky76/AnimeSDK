#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCOEKDNDEGJ;
namespace System { class Object; }

#define OCOEKDNDEGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEB620)
#define OCOEKDNDEGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEB660)
#define OCOEKDNDEGJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDEB670)

inline static constexpr unsigned int OCOEKDNDEGJ___c_TypeDefinitionIndex = 28466;

	class OCOEKDNDEGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCOEKDNDEGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ___C_CTOR_OFFSET))(this);
		}

		::OCOEKDNDEGJ* __cctor_b__23_0()
		{
			return ((::OCOEKDNDEGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOEKDNDEGJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
