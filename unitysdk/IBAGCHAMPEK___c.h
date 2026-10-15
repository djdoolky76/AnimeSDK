#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBAGCHAMPEK;
namespace System { class Object; }

#define IBAGCHAMPEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E1E00)
#define IBAGCHAMPEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E1E40)
#define IBAGCHAMPEK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5E1E50)

inline static constexpr unsigned int IBAGCHAMPEK___c_TypeDefinitionIndex = 32189;

	class IBAGCHAMPEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBAGCHAMPEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAGCHAMPEK___C_CTOR_OFFSET))(this);
		}

		::IBAGCHAMPEK* __cctor_b__23_0()
		{
			return ((::IBAGCHAMPEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAGCHAMPEK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
