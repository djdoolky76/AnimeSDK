#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDGJDOHPMPL;
namespace System { class Object; }

#define LDGJDOHPMPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F8E60)
#define LDGJDOHPMPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F8EA0)
#define LDGJDOHPMPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8F8EB0)

inline static constexpr unsigned int LDGJDOHPMPL___c_TypeDefinitionIndex = 30233;

	class LDGJDOHPMPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x347D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDGJDOHPMPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL___C_CTOR_OFFSET))(this);
		}

		::LDGJDOHPMPL* __cctor_b__28_0()
		{
			return ((::LDGJDOHPMPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGJDOHPMPL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
