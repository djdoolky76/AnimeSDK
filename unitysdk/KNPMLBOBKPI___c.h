#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNPMLBOBKPI;
namespace System { class Object; }

#define KNPMLBOBKPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AA880)
#define KNPMLBOBKPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AA8C0)
#define KNPMLBOBKPI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8AA8D0)

inline static constexpr unsigned int KNPMLBOBKPI___c_TypeDefinitionIndex = 33261;

	class KNPMLBOBKPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNPMLBOBKPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPMLBOBKPI___C_CTOR_OFFSET))(this);
		}

		::KNPMLBOBKPI* __cctor_b__23_0()
		{
			return ((::KNPMLBOBKPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPMLBOBKPI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
