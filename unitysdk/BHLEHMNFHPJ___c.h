#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHLEHMNFHPJ;
namespace System { class Object; }

#define BHLEHMNFHPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCA060)
#define BHLEHMNFHPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCA0A0)
#define BHLEHMNFHPJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDCA0B0)

inline static constexpr unsigned int BHLEHMNFHPJ___c_TypeDefinitionIndex = 32717;

	class BHLEHMNFHPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHLEHMNFHPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ___C_CTOR_OFFSET))(this);
		}

		::BHLEHMNFHPJ* __cctor_b__33_0()
		{
			return ((::BHLEHMNFHPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
