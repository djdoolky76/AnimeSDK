#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHLPEJFEGAN;
namespace System { class Object; }

#define DHLPEJFEGAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20657630)
#define DHLPEJFEGAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20657670)
#define DHLPEJFEGAN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20657680)

inline static constexpr unsigned int DHLPEJFEGAN___c_TypeDefinitionIndex = 32441;

	class DHLPEJFEGAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHLPEJFEGAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN___C_CTOR_OFFSET))(this);
		}

		::DHLPEJFEGAN* __cctor_b__28_0()
		{
			return ((::DHLPEJFEGAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
