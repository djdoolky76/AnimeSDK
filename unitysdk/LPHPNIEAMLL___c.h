#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHPNIEAMLL;
namespace System { class Object; }

#define LPHPNIEAMLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCF3DF0)
#define LPHPNIEAMLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCF3E30)
#define LPHPNIEAMLL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FCF3E40)

inline static constexpr unsigned int LPHPNIEAMLL___c_TypeDefinitionIndex = 30599;

	class LPHPNIEAMLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x486B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPHPNIEAMLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHPNIEAMLL___C_CTOR_OFFSET))(this);
		}

		::LPHPNIEAMLL* __cctor_b__18_0()
		{
			return ((::LPHPNIEAMLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPHPNIEAMLL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
