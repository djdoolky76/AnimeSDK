#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHICHKBDMIC;
namespace System { class Object; }

#define JHICHKBDMIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204AFA70)
#define JHICHKBDMIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204AFAB0)
#define JHICHKBDMIC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x204AFAC0)

inline static constexpr unsigned int JHICHKBDMIC___c_TypeDefinitionIndex = 28072;

	class JHICHKBDMIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x607A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHICHKBDMIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICHKBDMIC___C_CTOR_OFFSET))(this);
		}

		::JHICHKBDMIC* __cctor_b__38_0()
		{
			return ((::JHICHKBDMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHICHKBDMIC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
