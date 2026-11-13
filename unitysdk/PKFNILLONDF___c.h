#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKFNILLONDF;
namespace System { class Object; }

#define PKFNILLONDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F498620)
#define PKFNILLONDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F498660)
#define PKFNILLONDF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F498670)

inline static constexpr unsigned int PKFNILLONDF___c_TypeDefinitionIndex = 33766;

	class PKFNILLONDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKFNILLONDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF___C_CTOR_OFFSET))(this);
		}

		::PKFNILLONDF* __cctor_b__28_0()
		{
			return ((::PKFNILLONDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
