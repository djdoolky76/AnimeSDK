#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBHAMLBKJNJ;
namespace System { class Object; }

#define JBHAMLBKJNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEF99A0)
#define JBHAMLBKJNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEF99E0)
#define JBHAMLBKJNJ___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FEF99F0)

inline static constexpr unsigned int JBHAMLBKJNJ___c_TypeDefinitionIndex = 28318;

	class JBHAMLBKJNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBHAMLBKJNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHAMLBKJNJ___C_CTOR_OFFSET))(this);
		}

		::JBHAMLBKJNJ* __cctor_b__48_0()
		{
			return ((::JBHAMLBKJNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHAMLBKJNJ___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
