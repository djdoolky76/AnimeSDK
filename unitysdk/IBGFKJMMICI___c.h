#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBGFKJMMICI;
namespace System { class Object; }

#define IBGFKJMMICI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203AE0A0)
#define IBGFKJMMICI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203AE0E0)
#define IBGFKJMMICI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x203AE0F0)

inline static constexpr unsigned int IBGFKJMMICI___c_TypeDefinitionIndex = 29007;

	class IBGFKJMMICI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x447E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBGFKJMMICI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGFKJMMICI___C_CTOR_OFFSET))(this);
		}

		::IBGFKJMMICI* __cctor_b__23_0()
		{
			return ((::IBGFKJMMICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGFKJMMICI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
