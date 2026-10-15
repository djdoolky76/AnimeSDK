#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHENKFJFGKH;
namespace System { class Object; }

#define LHENKFJFGKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9329F0)
#define LHENKFJFGKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E932A30)
#define LHENKFJFGKH___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1E932A40)

inline static constexpr unsigned int LHENKFJFGKH___c_TypeDefinitionIndex = 31520;

	class LHENKFJFGKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHENKFJFGKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHENKFJFGKH___C_CTOR_OFFSET))(this);
		}

		::LHENKFJFGKH* __cctor_b__37_0()
		{
			return ((::LHENKFJFGKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHENKFJFGKH___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
