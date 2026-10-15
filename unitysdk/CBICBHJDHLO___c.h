#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBICBHJDHLO;
namespace System { class Object; }

#define CBICBHJDHLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03CEC0)
#define CBICBHJDHLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03CF00)
#define CBICBHJDHLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E03CF10)

inline static constexpr unsigned int CBICBHJDHLO___c_TypeDefinitionIndex = 29658;

	class CBICBHJDHLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBICBHJDHLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBICBHJDHLO___C_CTOR_OFFSET))(this);
		}

		::CBICBHJDHLO* __cctor_b__23_0()
		{
			return ((::CBICBHJDHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBICBHJDHLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
