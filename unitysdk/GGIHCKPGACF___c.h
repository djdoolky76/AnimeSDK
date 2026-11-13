#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGIHCKPGACF;
namespace System { class Object; }

#define GGIHCKPGACF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2026AC30)
#define GGIHCKPGACF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2026AC70)
#define GGIHCKPGACF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x2026AC80)

inline static constexpr unsigned int GGIHCKPGACF___c_TypeDefinitionIndex = 33085;

	class GGIHCKPGACF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGIHCKPGACF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF___C_CTOR_OFFSET))(this);
		}

		::GGIHCKPGACF* __cctor_b__38_0()
		{
			return ((::GGIHCKPGACF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
