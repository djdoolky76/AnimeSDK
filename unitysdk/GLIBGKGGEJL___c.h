#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLIBGKGGEJL;
namespace System { class Object; }

#define GLIBGKGGEJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0A30)
#define GLIBGKGGEJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0A70)
#define GLIBGKGGEJL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4C0A80)

inline static constexpr unsigned int GLIBGKGGEJL___c_TypeDefinitionIndex = 25670;

	class GLIBGKGGEJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F4C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLIBGKGGEJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL___C_CTOR_OFFSET))(this);
		}

		::GLIBGKGGEJL* __cctor_b__28_0()
		{
			return ((::GLIBGKGGEJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
