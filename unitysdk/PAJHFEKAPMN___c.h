#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAJHFEKAPMN;
namespace System { class Object; }

#define PAJHFEKAPMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEFAE0)
#define PAJHFEKAPMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEFB20)
#define PAJHFEKAPMN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEEFB30)

inline static constexpr unsigned int PAJHFEKAPMN___c_TypeDefinitionIndex = 29563;

	class PAJHFEKAPMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAJHFEKAPMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHFEKAPMN___C_CTOR_OFFSET))(this);
		}

		::PAJHFEKAPMN* __cctor_b__23_0()
		{
			return ((::PAJHFEKAPMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHFEKAPMN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
