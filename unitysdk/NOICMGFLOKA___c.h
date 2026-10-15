#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOICMGFLOKA;
namespace System { class Object; }

#define NOICMGFLOKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8C8C0)
#define NOICMGFLOKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8C900)
#define NOICMGFLOKA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB8C910)

inline static constexpr unsigned int NOICMGFLOKA___c_TypeDefinitionIndex = 29711;

	class NOICMGFLOKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOICMGFLOKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICMGFLOKA___C_CTOR_OFFSET))(this);
		}

		::NOICMGFLOKA* __cctor_b__23_0()
		{
			return ((::NOICMGFLOKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOICMGFLOKA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
