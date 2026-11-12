#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBJNJPAOCDA;
namespace System { class Object; }

#define JBJNJPAOCDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA05D30)
#define JBJNJPAOCDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA05D60)
#define JBJNJPAOCDA___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FA05D70)

inline static constexpr unsigned int JBJNJPAOCDA___c_TypeDefinitionIndex = 26420;

	class JBJNJPAOCDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBJNJPAOCDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJNJPAOCDA___C_CTOR_OFFSET))(this);
		}

		::JBJNJPAOCDA* __cctor_b__53_0()
		{
			return ((::JBJNJPAOCDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJNJPAOCDA___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
