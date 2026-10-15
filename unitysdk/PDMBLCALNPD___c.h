#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PDMBLCALNPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC019DB0)
#define PDMBLCALNPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC019DF0)
#define PDMBLCALNPD___C___CTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0xC019E00)

inline static constexpr unsigned int PDMBLCALNPD___c_TypeDefinitionIndex = 79576;

	class PDMBLCALNPD___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69EB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69EB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDMBLCALNPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMBLCALNPD___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__23_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDMBLCALNPD___C___CTOR_B__23_0_OFFSET))(this, a1);
		}

	};
