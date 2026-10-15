#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKMNFJIPCMI;
namespace System { class Object; }

#define EKMNFJIPCMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E298CB0)
#define EKMNFJIPCMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E298CF0)
#define EKMNFJIPCMI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E298D00)

inline static constexpr unsigned int EKMNFJIPCMI___c_TypeDefinitionIndex = 31669;

	class EKMNFJIPCMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKMNFJIPCMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMNFJIPCMI___C_CTOR_OFFSET))(this);
		}

		::EKMNFJIPCMI* __cctor_b__23_0()
		{
			return ((::EKMNFJIPCMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMNFJIPCMI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
